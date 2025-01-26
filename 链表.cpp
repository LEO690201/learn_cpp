//链表:是一种数据结构
/*
数组:内存连续
链表:随机分布的(堆分布)

概念:节点:一个结构体,
    数据域:节点中的数据
    指针域:指向下一个节点的指针
struct Node
{
data data;
指针;
}

*/


#include<stdio.h>
#include<stdlib.h>

//定义链表
struct node
{
    int num;
    struct node*next;
};


//创建链表的方式
//头插法(插入顺序与得到的链表的顺序相反)
struct node*createlistF(void)
{
    struct node*head,*p;
    int number;

    head=NULL;//头节点先定为空
    printf("input: ");
    scanf("%d",&number);

    while(number!=0)
    {
        p=(struct node*)malloc(sizeof(struct node));
        //****************************** */
        p->num=number;//数据域赋值为Number
        p->next=head;//指针域指向头节点(将其插入到头节点之前)
        head=p;//最后将p确定为新的头节点
        //****************************** */

        printf("input: ");
        scanf("%d",&number);
    }

    return head;//************************** */

}
//复现
struct node*createlistF(void)
{
    int number;
    struct node*p,*head;
    head=NULL;
    
    printf("input: ");
    scanf("%d",&number);

    while(number!=0)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->num=number;//数字
        p->next=head;//指针
        head=p;

        printf("input: ");
        scanf("%d",&number);
    }

    return head;//***************** */
}

//尾插法(插入的顺序与得到的链表的顺序相同)
struct node*createlistR(void)
{
    struct node*head,*p,*last;
    int number;

    head=NULL;
    printf("input: ");
    scanf("%d",&number);

    while(number!=0)//不想输入了就打印一个0
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->next=NULL;//身后为NULL
        p->num=number;//输入数据(先把p不计位置,先定义好)
        if(head=NULL)//头节点为空(第一次时)
        {
            head=p;//说明没有节点,那么说明其本身就为唯一节点
        }
        else//链表不为空,有其他节点,要找到表尾
        {
            last->next=p;//将p插入在rear后面
        }
        last=p;//最后令p为rear(最后一个),之后的都插入到p后面
        printf("input: ");
        scanf("%d",&number);

    }
    return head;
}
//复现
struct node*createlistR(void)
{
    struct node*head,*last,*p;
    head=NULL;
    int number;

    printf("input: ");
    scanf("%d",&number);

    while(number!=0)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->num=number;
        p->next=NULL;

        if(head!=NULL)
        {
            head=p;
        }
        else
        {
            last->next=p;
        }
        last=p;
        printf("input: ");
        scanf("%d",&number);
    }
    return head;
}
//(头插法尾插法都是从没有开始插入节点)
//因为head要作为参数传给其他子函数,所以return head


//链表的遍历
void printlist(struct node*head)
//将head的地址作为参数找到链表
{
    struct node*p=head;
    while(p)
    {
        printf("%d\n",p->num);
        p=p->next;
    }
}
//复现
void printlist(struct node*head)
{
    struct node*p=head;
    while(p)
    {
        printf("%d\n",p->num);
        p=p->next;
    }
}


//链表内部插入节点
struct node*insertlist(struct node*head,struct node*q)
{
    struct node*p;
    if(head=NULL)//此时为空
    {
        q->next=head;
        head=q;//直接插入即可
        return head;
    }//以下为非空的情况

    //假定此时链表是按照从小到大的方式排列
    if(head->num>q->num)//如果head的数据域>要插入的数据域
    {
        q->next=head;
        head=q;
        return head;//直接把q插在最前面就可以
    }

    //如果不是第一个就成立
    p=head;//从头节点开始
    while(p->next&&p->next->num<q->num)
    //当它还有下一个且下一个数据域小于q时
    {
        p=p->next;//让它下一个为p(此时的p类似于循环中的i)
    }
    
    //当某一个p不存在下一个或者下一个就比q大时
    q->next=p->next;//把q插入在p的下一个的前面
    p->next=q;//同时q也是p的下一个(也就是将q插入到p和p的下一个中间)
    return head;
}
//复现
struct node*insertlist(struct node*head,struct node*q)
{
    struct node*p;
    q=head;

    if(head=NULL)
    {
        q->next=NULL;
        head=q;
        return head;
    }

    if(head->num>q->num)
    {
        q->next=NULL;
        head=q;
        return head;
    }

    p=head;
    while(p->next!=NULL&&p->next->num<q->num)
    {
        p=p->next;
    }

    q->next=p->next;
    p->next=q;
    return head;
}


//删除链表节点
struct node*deletelist(struct node*head,int num)
//删除等于Num的节点
{
    struct node*p,*q;//删除需要定义两个检查的变量,
    //从而删除一个之后还可以连接
    if(head!=NULL&&head->num==num)//如果第一个就是,直接交换
    {
        p=head;
        head=p->next;
        free(p);
        return head;
    }

    q=p=head;
    while(p&&p->num!=num)//只要p存在且p的数据域不是
    {
        q=p;//就把q赋值为p
        p=p->next;//然后把p递推到下一个
    }//(q和p连续)

    if(p)//如果p还存在(最终停在了p)(此时前一个是q)
    {
        q->next=p->next;//将q的下一个连接p的下一个
        free(p);
        return head;
    }

    printf("NOT FOUND\n");//如果最终没有找到相同的
    return head;
}
//复现
struct node*deletelist(struct node*head,int num)
{
    struct node*q,*p;
    if(head!=NULL&&head->num==num)
    {
        head=head->next;
        return head;
    }

    while(p!=NULL&&p->num!=num)
    {
        q=p;
        p=p->next;
    }

    if(p)
    {
        q->next=p->next;
        free(p);//释放
        return head;
    }

    printf("NOT FOUND\n");
    return head;
}


//基本操作
int main()
{
    struct node*head,*ps;
    int num;

    //输入数据
    printf("创建链表: ");
    head=createlistR();//最好使用尾插法,这样才能顺序输入
    printf("output: \n");
    printlist(head);//打印

    //插入
    ps=(struct node*)malloc(sizeof(struct node));//**********
    //插入数据的话要申请内存
    printf("input num as the new one: ");
    scanf("%d",&ps->num);
    head=insertlist(head,ps);
    printlist(head);

    //删除
    printf("input the one to be delete: ");
    scanf("%d",&num);
    head=deletelist(head,num);
    printlist(head);

    return 0;
}



//冒泡排序
struct node*sort(struct node*head,int n)
{
    struct node*p,*q;
    int tmp1,i;
    for(p=head,i=1;i<n;i++,p=p->next)//p和i一同操作从而遍历
    {
        for(q=p->next;q!=NULL;q=q->next)
        {
            if(p->num>q->num)
            {
                tmp1=p->num;
                p->num=q->num;
                q->num=tmp1;
            }
        }
    }
    return head;
}


typedef struct student
{
    int grade;
    student*next;  //student的下一个需要是地址,结构体需要通过地址来找到他
};

//选择排序
void selectsort(student*p[],int n)//定义了结构体数组
{
    int i,j,k;
    student*tmp;
    for(i=0;i<n;i++)
    {
        if(p[j]->grade<p[k]->grade)
        {
            k=j;
        }
        if(k!=i)
        {
            tmp=*(p+k);
            *(p+k)=*(p+i);
            *(p+i)=tmp;
        }
    }
}


//冒泡排序
void bubblesort(student*p[],int n)
{
    int i,k,j;
    student*tmp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(p[j]->grade>p[j+1]->grade)
            {
                tmp=p[j];
                p[j]=p[j+1];
                p[j+1]=tmp;
            }
        }
    }
}







































































































































































































































































































































































































































// #include<stdio.h>

// typedef int Data;

// typedef struct _Node//声明一个结构体类型名
// {
//     Data data;
//     struct _Node* next;//将这个结构体变量设置一个指针域
// };

// int main()
// {
//     struct _Node n1={1},n2={2},n3={3};//只定义数据域即可
//     n1.next=&n2;
//     n2.next=&n3;
//     //将指针域依次进行递推

//     struct _Node *p=&n1;//定义一个指向n1的指针
//     for(int i=0;i<3;i++)
//     {
//         printf("%d  ",p->data);//打印出来指针指向的数据,
//         p=p->next;//然后递推到下一项
//     }

//     return 0;
// }

// //统计节点数量

// struct _List
// {
//     _Node* front;
//     _Node* tail;
//     int size;
// }List;

// //创建链表
// #include<malloc.h>
// _List*createlist()
// {
//     _List*ls=createlist();
//     _List*list=(_List*)malloc(sizeof(_List));
//     if(list==NULL)
//     {
//         return NULL;
//     }
//     list->front=NULL;
//     list->tail=NULL;
//     list->size=0;


//     //尾部插入
//     for(int i=0;i<5;i++)
//     {
        
//     }

//     _Node*createlist(Data data)
//     {
//         Node*newNode
//     }

//     void push_back(_List*list,Data data)
//     {

//     }
// }













