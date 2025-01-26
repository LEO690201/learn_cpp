//链表

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<malloc.h>

//数组不能动态释放和申请,同时malloc不能局部释放和申请,同时它们只能是同种数据类型
/*链表
链表由一系列节点(每一个元素称为节点)组成,节点运行时动态生成(malloc).每个节点包括两部分:储存数组元素的数据域,储存下一个节点地址的指针域
最后一位指向NULL


每个节点采取结构体
typedef struct student
{
int num;
char name[20];
struct student*next;//下一个的地址
}STU;

链表的操作:
创建
增
删
改
查询

第一步:创建一个节点
第二步:创建第二个节点,将其放在第一个节点后面(第一个节点的指针域保存第二个的地址)
第三步:再次创建新节点,找到原本链表中的最后一个节点,接着讲最后一个节点的指针域保存在新节点的地址,以此类推









//结构体

/*结构体
存储多种类型的数据


*/

struct Student 
{
    int id;
    char *name;
    int age;
    float score;
    //...
};





//另一种声明方式
struct EmptyStruct 
{
    //NULL
};

//匿名结构体
struct 
{
    int id;
    int age;
}stu1,stu2;

//typedef定义结构体
typedef struct Student Student ;

int main()
{
    //数据类型+变量名:int a; float b;char c;
    struct Student stu;
    Student stu;

}

//结构体嵌套
#include<stdio.h>

typedef struct birthday{
    int year;
    int month;
    int day;

}birthday;

typedef struct Student {
    int id;
    char*name;//字符串
    int age;
    float score;
    birthday birthday;
    //...
}Student;

typedef struct student{
    int id;
    char*name;
    int age;
    float score;
    birthday birthday;
}student;

void printStudentInfo(Student *pStu)
{
    printf("学号:%d\t姓名:%s\t年龄:%d\t%.2f\t%d-%d-%d\n",pStu->id,pStu->name,pStu->age,pStu->score,
    pStu->birthday.year,pStu->birthday.month,pStu->birthday.day);
}

// int main()
// {
//     Student stu;
//     stu.birthday.year=0;
//     return 0;
// }

typedef struct A
{
    int a;
    char c;
    char str[3];//组成长度为4的字节与a对齐
}A;


//结构体函数
A hgl(A a,A b)
{
    A result;
    result.a=a.a+b.a;
    return result;
}

//结构体数组
void printstudentinfo(Student *pStu,int len)
{
    for(int i=0;i<len;++i)
    {
        printf("学号:%d\t姓名:%s\t年龄:%d\t%.2f\t%d-%d-%d\n",
            (pStu+i)->id,(pStu+i)->name,(pStu+i)->age,(pStu+i)->score,
            (pStu+i)->birthday.year,(pStu+i)->birthday.month,(pStu+i)->birthday.day);
    }
}


//声明结构体变量
//结构体指针作为参数
int main()
{
    Student stu1={1001,"hgl",27,100,{2021,1,24}};
    //类型+变量名
    printf("学号:%d\t姓名:%s\t年龄:%d\t%.2f\t%d-%d-%d\n",stu1.id,stu1.name,stu1.age,stu1.score);
    Student stu2;
    Student*pStu=&stu1;//定义结构体指针指向变量的地址
    printStudentInfo(pStu);
    pStu=&stu2;//把指针改为指向stu2的地址
    printStudentInfo(pStu);
    //printStudentInfo(stu1);
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(char));//1
    printf("%d\n",sizeof(float));//4
    printf("生日结构体占字节数%d\n",sizeof(birthday));//12
    //12个字节,由于包含了三个类型,整形包含4个字节,总共3*4=12
    printf("学生结构体占字节数%d\n",sizeof(Student));//40
    //40个字节
    printf("A的结构体占字节数%d\n",sizeof(A));//8
    //8个字节  内存对齐



    //声明了一个结构体数组
    Student students[]=
    {
        {1001,"hgl",27,100,{2021,12,23}},
        {1002,"hgl",23,43,{2024,32,12}}
    };

    printstudentinfo(students,sizeof(students)/sizeof(students[0]));


    return 0;
}

//访问成员变量使用点操作符

/*
结构体指针应该是pstu->id,而正常的结构体应该是stu.id
*/

//计算结构体的内存



//链表
typedef struct student1 
{
    char *name;
    int age;
    int number;
    address a;
};
//内存中的存储

typedef struct address
{
    int street;
    int number;
};

int main()
{
    student1 s1;
    student1 s2;
    student1*ps2=&s2;
    ps2->name="hgl";//利用指针
    ps2->age=100;
    ps2->number=123456;
    
    ps2->a.street=12;
    ps2->a.number=1234;
    
    s1.name="hgl";
    s1.age=18;
    s1.number=23010;
    printf("%d\n",&s1);
    printf("%d\n",&s1.name);

    return 0;
}

//此时地址相同----结构体变量地址=结构体首个元素的地址



//对于链表

typedef struct student{
    char*name;
    int age;
    int number;
    student*dizhi;
};

int main()
{
    student s1;
    s1.name="hhh";
    s1.age=10;
    s1.number=12345678;

    student s2;
    student*ps2=&s2;
    ps2->name="ggg";

    s1.dizhi=&s2;

    printf("");
}













































































































































