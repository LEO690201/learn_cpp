//����

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<malloc.h>

//���鲻�ܶ�̬�ͷź�����,ͬʱmalloc���ֲܾ��ͷź�����,ͬʱ����ֻ����ͬ����������
/*����
������һϵ�нڵ�(ÿһ��Ԫ�س�Ϊ�ڵ�)���,�ڵ�����ʱ��̬����(malloc).ÿ���ڵ����������:��������Ԫ�ص�������,������һ���ڵ��ַ��ָ����
���һλָ��NULL


ÿ���ڵ��ȡ�ṹ��
typedef struct student
{
int num;
char name[20];
struct student*next;//��һ���ĵ�ַ
}STU;

����Ĳ���:
����
��
ɾ
��
��ѯ

��һ��:����һ���ڵ�
�ڶ���:�����ڶ����ڵ�,������ڵ�һ���ڵ����(��һ���ڵ��ָ���򱣴�ڶ����ĵ�ַ)
������:�ٴδ����½ڵ�,�ҵ�ԭ�������е����һ���ڵ�,���Ž����һ���ڵ��ָ���򱣴����½ڵ�ĵ�ַ,�Դ�����









//�ṹ��

/*�ṹ��
�洢�������͵�����


*/

struct Student 
{
    int id;
    char *name;
    int age;
    float score;
    //...
};





//��һ��������ʽ
struct EmptyStruct 
{
    //NULL
};

//�����ṹ��
struct 
{
    int id;
    int age;
}stu1,stu2;

//typedef����ṹ��
typedef struct Student Student ;

int main()
{
    //��������+������:int a; float b;char c;
    struct Student stu;
    Student stu;

}

//�ṹ��Ƕ��
#include<stdio.h>

typedef struct birthday{
    int year;
    int month;
    int day;

}birthday;

typedef struct Student {
    int id;
    char*name;//�ַ���
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
    printf("ѧ��:%d\t����:%s\t����:%d\t%.2f\t%d-%d-%d\n",pStu->id,pStu->name,pStu->age,pStu->score,
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
    char str[3];//��ɳ���Ϊ4���ֽ���a����
}A;


//�ṹ�庯��
A hgl(A a,A b)
{
    A result;
    result.a=a.a+b.a;
    return result;
}

//�ṹ������
void printstudentinfo(Student *pStu,int len)
{
    for(int i=0;i<len;++i)
    {
        printf("ѧ��:%d\t����:%s\t����:%d\t%.2f\t%d-%d-%d\n",
            (pStu+i)->id,(pStu+i)->name,(pStu+i)->age,(pStu+i)->score,
            (pStu+i)->birthday.year,(pStu+i)->birthday.month,(pStu+i)->birthday.day);
    }
}


//�����ṹ�����
//�ṹ��ָ����Ϊ����
int main()
{
    Student stu1={1001,"hgl",27,100,{2021,1,24}};
    //����+������
    printf("ѧ��:%d\t����:%s\t����:%d\t%.2f\t%d-%d-%d\n",stu1.id,stu1.name,stu1.age,stu1.score);
    Student stu2;
    Student*pStu=&stu1;//����ṹ��ָ��ָ������ĵ�ַ
    printStudentInfo(pStu);
    pStu=&stu2;//��ָ���Ϊָ��stu2�ĵ�ַ
    printStudentInfo(pStu);
    //printStudentInfo(stu1);
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(char));//1
    printf("%d\n",sizeof(float));//4
    printf("���սṹ��ռ�ֽ���%d\n",sizeof(birthday));//12
    //12���ֽ�,���ڰ�������������,���ΰ���4���ֽ�,�ܹ�3*4=12
    printf("ѧ���ṹ��ռ�ֽ���%d\n",sizeof(Student));//40
    //40���ֽ�
    printf("A�Ľṹ��ռ�ֽ���%d\n",sizeof(A));//8
    //8���ֽ�  �ڴ����



    //������һ���ṹ������
    Student students[]=
    {
        {1001,"hgl",27,100,{2021,12,23}},
        {1002,"hgl",23,43,{2024,32,12}}
    };

    printstudentinfo(students,sizeof(students)/sizeof(students[0]));


    return 0;
}

//���ʳ�Ա����ʹ�õ������

/*
�ṹ��ָ��Ӧ����pstu->id,�������Ľṹ��Ӧ����stu.id
*/

//����ṹ����ڴ�



//����
typedef struct student1 
{
    char *name;
    int age;
    int number;
    address a;
};
//�ڴ��еĴ洢

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
    ps2->name="hgl";//����ָ��
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

//��ʱ��ַ��ͬ----�ṹ�������ַ=�ṹ���׸�Ԫ�صĵ�ַ



//��������

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













































































































































