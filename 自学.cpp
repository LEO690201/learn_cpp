//2024.8.26
// 
//一·比大小
//#include<stdio.h>
//int main()
//{
//	int a = 123;//定义整型变量并赋值为a
//	int b = 456;
//	int sum = a + b;//定义int 变量sum并赋值为a+b
//	printf("%d\n", sum);//%d格式化符,输出整数
//	return 0;
//
//}



//二.从键盘读取数据
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d",&a);
//	printf("%d\n",a);
//	return 0;
//}



//三.比大小
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d", &a, &b);//scanf_s输入
//	if (a >= b)
//		c = a;
//	else
//		c = b;
//	printf("更大的是%d\n", c);
//
//	return 0;
//}


//另解
//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	scanf_s("%d %d", &a, &b);
//	c =a>=b? a : b;//?为真:为假
//	printf("%d\n", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int max(int x, int y);//max(int x,int y)是一个被定义的函数,对其int
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int c = max(a, b);
//	printf("%d\n", c);
//
//	return 0;
//
//}
//int max(int x, int y)
//{
//	return x >= y ? x : y;
//}





//#include <stdio.h>
//int max(int x, int y)
//{
//	return x >= y ? x : y;
//}
//int main()
//{
//	
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int c = max(a, b);
//	printf("%d\n", c);
//
//	return 0;
//
//}



//四.累乘
//#include <stdio.h>
//int main()
//{
//	int a = 1 * 2 * 3 * 4 * 5;
//	printf("%d\n", a);
//	return 0;
//}


//用循环的办法
//#include<stdio.h>
//int main()
//{
//	int a = 1;//定义int变量a并初始化为1
//	for (int i = 1;i <= 5;++i)//循环   ++i--i的值增加1
//		//表达式1:初始化循环因子,有且执行一次
//		//表达式2:判断,为真继续,为假循环结束
//		//表达式3:修改循环因子的值
//		a = a * i;
//	printf("%d\n", a);
//	return 0;
//}



//五.判断闰年   输出2000年到2500年之间的闰年
/*#include<stdio.h>
int main()
{
	for (int year = 2000;year <= 2500;++year);
	{
		//表达式1/表达式2:得到商.例如10/2为5   注意整除问题---结果为丢弃小数的整数
		//表达式1%表达式2:取余数.判断整除时可以使用
	}
	return 0;
}
*/
//#include<stdio.h>
//int main()
//{
//	double a = 10 / 3;//结果为整数,丢弃小数
//	double b = 10.0 / 3;//破坏整数除整数,结果为含小数
//	printf("%lf\n%lf\n", a, b);
//	return 0;
//}



//表达式1/表达式2:得到商.例如10/2为5   注意整除问题---结果为丢弃小数的整数
//表达式1%表达式2:取余数.判断整除时可以使用
//==等号,判断左右是否相等
//=赋值
//&&且
//||或
//!=不等号




//2024.8.27
//#include<stdio.h>
//int main()
//{
//	for (int year = 2000;year <= 2500;++year)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("%d是闰年\n", year);
//	}//2100年不是闰年
//	return 0;
//}


//六.数据类型
/*数据类型:(字节数,数据范围)       1字节为8位
* 字符:char(1)------用于表示英文(8)----字符,不能存中文,可表示2^8种
* 整数:short(2),int(4),long(4),long long-----short:2^16=65536种     int:2^32=4294967296种
* 小数:float(4),double(8,默认)有效数字更多范围更广
* 
* //sizeof:求字节数
*/

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


//七.运算符
/*
()函数提升优先值
逻辑谓词:
!:不是,非
真:非0,C99 true
假:0,C99   false 
&&:且    都为真才为真
||:或    一个为真就为真
<:小于   注意不可以使用连续比较
++i:i的值自增1                         先加1,再输出值
i++       单独使用无区别               先输出当前值再加1
--i  i--  也是有前置和后置
*指针变量:间接访问符,解引用
(类型)变量:把变量强制转化为()中的形式
sizeof:求字节数
%取余,获得余数     应用:1.判断整除2.控制范围
/n:换行符
表达式1?表达式2:表达式3      如果表达式1为真,则执行表达式2,否则执行表达式3
=赋值运算符
建议优先使用符合赋值符    a+=10//a=a+10     a-=b//a=a-b   a*=2//a=a*2  /=    %=




*/

//#include<stdio.h>
//int main()
//{
//	//if (0)
//	//if("hgl")
//	if(!1)         //假
//		printf("真\n");
//	else
//		printf("假\n");
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 5;
//	//if (0 < n < 10) (错误)    //(0<n)<10->真(1)<10   布尔数据类型与数字比较大小
//	if(0<n&&n<10)
//		printf("zhen");
//	else
//		printf("jia");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (++a || ++b)   //短路
//		printf("真");
//	else
//		printf("假");
//	printf("%d %d\n", a, b);//\n可以换行
//	return 0;//结果为11,20------短路现象
//	//表达式1&&表达式2    如果表达式1为假,表达式2不计算
//	//表达式1||表达式2    如果表达式1为真,表达式2不计算
//}


//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int j = ++i;
//	printf("i=%d,j=%d", i, j);//i=11,j=11    前置
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int j = i++;
//	printf("i=%d,j=%d", i, j);//i=11,j=10     后置++:一会再加
//	//先把i赋值给j,然后再对i++
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 100;
//	printf("%d\n", *p);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//char a = 200;//-128~127
//	//short a = 200;
//	double a = (double)10 / 3;
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("%lld\n", sizeof(1));//int              4
//	printf("%lld\n", sizeof(12.5));//double        8
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	for (int i = 0;i < 100;i++)
//	{
//		if (i % 10 == 0)
//			printf("\n");
//		printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = 100;
//	int b = 20;
//	a += 10;//a=a+10
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int c = (10, 20);//输入括号后面的数值
//	printf("%d\n", c);
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int t = 3;
//	int x, y;
//	x = y = 2;
//	t = x++ || ++y;//y=2-----因为被短路    t=1-----逻辑表达式,为真
//	printf("%d,%d\n", t, y);//1,2
//	return 0;
//}


//八.素数及其优化
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);//scanf_s时应输入&
//	for (int i = 2;i < n;++i)
//	{
//		if (n % i == 0)
//		{
//			printf("%d不是素数\n", n);
//			return 0;//结束循环
//		}
//	}
//	printf("%d是素数\n", n);//循环之后始终没有结束循环,就输出其为素数的结论
//	return 0;
//}



//对其优化
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long n;
//	scanf_s("%lld", &n);
//	for (long long i = 2;i <= sqrt(n);++i)
//		//^为乘方     //sqrt为开方,而且需要引用<math.h>
//	{
//		printf("%lld不是素数\n", n);
//		return 0;
//	}
//	printf("%lld是素数\n",n);
//	return 0;
//}







//九.简单算法举例
//#include<stdio.h>
//int main()
//{
//	double sum = 0;//和
//	int sign = 1;//符号
//	int deno = 1;//分母
//	for (int deno = 1;deno <= 100;deno++)//分母
//	{
//		sum += sign *1.0 / deno;//注意整除,用1.0破坏整除
//		//累加和加上分子除分母
//		sign *= -1;
//		//分子每次乘-1
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
/*
sign:当前项数值符号
term:当前项的值
sum:当前项累加和
deno:当前项分母
*/




//作业
//三数比较大小
//#include<stdio.h>
//int main()
//{
//	int c;
//	int x, y, z;
//	scanf_s("%d %d %d", &x, &y, &z);
//	c = x >= y ? x : y;
//	if (z >= c)
//		printf("%d\n",z);
//	
//	else
//		printf("%d\n",c);
//	return 0;
//}


//求1加到100
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= 100;i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//判断一个数可否同时被3和5整除
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d",&a);
//	if (a % 3 == 0 && a % 5 == 0)
//		printf("%d能被三和五整除\n", a);
//	else
//		printf("%d不能同时被3和5整除\n", a);
//	return 0;
//}


//100-200之间素数输出
//#include<math.h>
//#include<stdio.h>
//int main() {
//	int n;
//	for (int i = 101; i <= 200; i += 2) 
//	{
//		//sqrt:计算平方根
//		int sqrti = (int)sqrt(i);//用开平方后效率更高
//		for (n = 2; n <= i; n++) 
//		{
//			if (i % n == 0) 
//				break;
//		}
//		if (i == n) 
//		{
//			printf("素数：%d\n", i);
//		}
//	}
//}


//另解
//int main()
//{
//	int i;
//	for (int a = 100;a <= 200;a++)
//	{
//		for ( i = 2;i <= a;i++) 
//		{
//			if (a % i == 0)
//				break;
//		}
//		if(a==i)
//		printf("%d\n", a);
//	}
//	return 0;
//}


//十.顺序结构设计
//华氏度
//#include<stdio.h>
//int main()
//{
//	double f;//华氏温度
//	scanf_s("%lf", &f);//读取double必须用%lf,易错
//	double c = 5.0 / 9 * (f - 32);
//	printf("%lf\n", c);
//	return 0;
//}


//计算利息
//#include<stdio.h>
//int main()
//{
//	double p0 = 1000;
//	double r1 = 0.0036;
//	double r2 = 0.0225;
//	double r3 = 0.0198;
//	printf("活期本息和为%lf\n", p0 * (1 + r1));
//	printf("一年本息和为%lf\n", p0 * (1 + r2));
//	printf("0.5年和0.5年本息和为%lf\n", p0 * (1 + r3 / 2) * (1 + r3 / 2));
//	return 0;
//}



//十一.常量与变量
/*
常量:不能修改的值
  数字常量,整数常量:例如1;     小数:1.234,       科学计数法----123.4=1.234e2
  字符常量:用单引号包括的一个符号.'a'  '0'  'A'   '\0'   '\n'(转义字符)修改其原含义
                                   97   48   65     0     换行
  转义字符:改变原含义,'\0'字符串的结尾标记;'\n'换行;'\\'就是字符\(文件的路径中要使用)
  字符串常量:用""包括的字符序列,可以是0个以上的字符,例如""(空串),"abc"
  (符号常量)宏定义:#define 宏名 替换的内容    在C中用得多,C++中不可用   让奇怪的数字有自己的名字

  
变量:可以修改的值
  1.先定义后使用  类型   变量名=初始化值;
  2.标识符命名规范:变量名,函数名,宏名
    (1)只包含字母,数字,下划线        a b  a3b_
	(2)不能以数字开头
	(3)区分大小写
	(4)关键字不可使用


进制转化:
  101.11=1*2^2+0*2^1+1*2^0+1*2^-1+1*2^-2=4+1+0.5+0.25=5.75
  十进制转二进制
    90 倒序取余1010110
    60 凑32,16等 00111100


数值在计算机的表示,标准规定,对无符号数所有的位都是数值,
对于有符号数,最高位符号位(0表示正数,1表示负数):
  12(一字节(8位)):00001100
  -12            :10001100
  0              :10011000   这种设计错误
从新设计
  12             :00001100
  0              :00000000
  -12            :11110100       此时12+(-12)为100000000只有8个字节,所以最前端的1丢弃
  ----------补码       绝对值的二进制区分然后再加1


*/

//#include<stdio.h>
//int main()
//{
//	printf("%d %d %d %d %d\n", '0', 'A', 'a', '\0', '\n');//%d输出字符对应编码值
//	printf("%c, %c, %c, %c, %c, %c\n", '0', 'A', 'a', '\0', '\n','B');//%c输出对应的字符
//	return 0;
//}


//#define PI 3.14

//宏的例题  ------------一眼看出来的都不对
//#define DOUBLE(x) x+x
//int main()
//{
//	printf("%d\n", 2 * DOUBLE(10));//结果输出为30
//	//2*DOLUBLE(10)替换为2*10+10,不包含括号
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int b;
//	b = b + 10;
//	printf("%d\n", b);      //错误越早被发现,影响越小
//	return 0;
//}


//十二.举例
//大写转小写        利用字符常量
//#include<stdio.h>
//int main()
//{
//	char ch;//char可以用于表示字符类型,字母
//	printf("请输入一个大写字母\n");
//	scanf_s("%c", &ch);
//	if ('A' <= ch && ch <= 'Z')
//		printf("%c\n", ch + ('a' - 'A'));//'a''A'是A到a的距离
//
//	return 0;
//}
//'大写'-'小写'=32



//求三角形面积  不判断数据合法性
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > 0 && b > 0 && a + b > c && b + c > a && a + c > b)//判断三角形是否成立
//	{
//		double s = (a + b + c) / 2.0;//注意整除
//		double area = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("%lf", area);
//	}
//	else 
//	{
//		printf("输入非法\n");
//	}
//	return 0;
//}



//求二次方程的根
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	int d = b ^ 2 - 4 * a * c;
//	if (d < 0)
//	{
//		printf("无实根\n");
//		return 0;
//	}
//	double x1, x2;
//	x1 = (-b + sqrt(d)) / (2 * a);
//	x2 = (-b - sqrt(d)) / (2 * a);
//	printf("%lf,%lf", x1, x2);
//	return 0;
//
//}


//十三.数据输入输出
//getchar---输入一个字符     putchar-----输出一个字符
//#include<stdio.h>
//int main()
//{
//	char ch = getchar();//从键盘获取一个字符,并返回
//	//putchar(ch);//输出一个字符到屏幕
//	while((ch=getchar())!='\n')//读取一行字符     改变优先值顺序,加括号
//	return  0;
//}


//十四.选择程序设计
/*
1.if语句
(1)单分支
if(表达式1)
  {
     语块1
  }
  //如果表达式1为真,执行语块1
(2)双分支
if(表达式1)
{
    语块1
}
else
{
    语块2
}
//如果表达式1为真则执行语块1
(3)多分支
if(表达式1)
{
    语块1
}
else if(表达式2)
{
    语块2
}
...
else
{
}
*/


//例.从小到大输入两个实数
//#include<stdio.h>
//int main()
//{
//	double a, b;
//	scanf_s("%lf%lf", &a, &b);
//	if (a > b)
//	{
//		printf("%lf,%lf\n", b, a);
//	}
//	else
//	{
//		printf("%lf,%lf\n", a, b);
//	}
//	return 0;
//}



//从小到大输出三个数字
//#include<stdio.h>
//int main()
//{
//	double a, b, c;
//	double tmp;
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	//a保存最小值,b保存第二小的值,c保存最大值
//	//令a为a,b中最小值,a,c中最小值...
//	if (a > b)
//	{
//		//交换
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%lf,%lf,%lf\n", a, b, c);
//	return 0;
//}



//对二次方程求根改进
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	int d = b ^ 2 - 4 * a * c;
//	double x1, x2;
//	if (a == 0)
//	{
//		x1 = -1.0*c / b;
//		printf("%lf\n",x1);
//	}
//	else if(d<0)
//	{
//		printf("没有实根\n");
//	}
//	else if (d == 0)
//	{
//		x1 = x2 = -b / (2.0 * a);
//		printf("重根\n", x1);
//	}
//	else
//	{
//		x1 = (-b + sqrt(d)) / (2.0 * a);
//		x2 = (-b - sqrt(d)) / (2.0 * a);
//		printf("根为%lf,%lf\n", x1, x2);
//	}
//	return 0;
//}


//分段函数
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	int y;
//	if (x < 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//	return 0;
//}


/*
switch(整形表达式)------必须包含整数或者枚举 char int bool long ...
{
case 常量表达式1:
语块1
break;
case 常量表达式2:
语块2
break;
default:
语块n+1
break;
}


*/

//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	switch (a)
//	{
//	case 0:             //默认a==0   标签   标签不可以一样,必须唯一
//		printf("0\n");
//		break;
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	default:
//		printf("other\n");
//		break;
//	}
//	return 0;
//}
//如何进:当整形表达式和其中一个常量表达式(标签)相同时进入
//如何出:当遇到break时或者整个switch结束



//举例:
//#include<stdio.h>
//int main()
//{
//	int s;
//	scanf_s("%d", &s);
//	double a = 1;
//	switch (s/250)//利用整除
//	{
//	case 0:
//		a = 1;
//		break;
//	case 1:
//		a = 0.98;
//		break;
//	case 3:
//		a = 0.95;
//		break;
//
//	default:
//		a = 0.85;
//	}
//	return 0;
//	/*if (s < 250)
//		a = 1;
//	else if (250 <= s && s < 500)
//		a = 0.98;
//	else if (500 <= s && s < 1000)
//		a = 0.95;
//	else if (1000 <= s && s < 2000)
//		a = 0.92;
//	else if (2000 <= s && s < 3000)
//		a = 0.9;
//	else
//		a = 0.85;
//	printf("费率=%.2lf\n", a);//%.2lf为保留两位小数
//	return 0;
//	*/
//}



//十五.循环结构设计
/*
for, while, do while, break, continue

1.for (表达式1;表达式2;表达式3)
{
    语块1
}
表达式1:循环因子初始化,最早被执行,有且执行一次
表达式2;为真循环继续,为假循环结束
表达式3:步进,修改循环因子的值,在语句块1之后执行
2.while循环的表达
while(表达式1)
{
    语块1
}
表达式1如果为真,循环继续,为假则结束,不能省略
3.do while循环
do
{
    语块1
}
while(表达式1);
4.break
作用:跳出一层循环
5.continue:提前结束本次循环,提前进入下一次循环

*/

//#include<stdio.h>
//int main()
//{
//    for (int i = 0;i < 3;++i)
//    {
//        printf("%d\n", i);
//    }
//    return 0;
//}

//另一种表达
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (;;)
//    {
//        if (i >= 3)
//            break;
//        printf("%d\n", i);
//        ++i;
//    }
//    return 0;
//}


//求1加到100
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= 100;i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//另一种写法
//#include<stdio.h>
//int main()
//{
//    int sum = 0;
//    int i=0;
//    for (;;)
//    {
//        if (i >100)
//            break;
//            sum += i;
//        ++i;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    while (i < 3)
//    {
//        printf("%d\n", i);
//        ++i;
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int sum = 0;
//    int i = 1;
//    while (i <= 100)
//    {
//        sum += i;
//        ++i;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    do
//    {
//        printf("%d\n", i);
//        ++i;
//    } while (i < 3);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int sum=0;
//    int i = 1;
//    do
//    {
//        sum += i;
//        ++i;
//    } while (i <= 100);
//    printf("%d\n", sum);
//    return 0;
//    
//}


//#include<stdio.h>
//int main()
//{
//    int sum = 0;
//    int n;//每次捐款的数额
//    int i;
//    for ( i = 1;i <= 1000;++i)//i捐款人数
//    {
//        scanf_s("%d", &n);
//        sum += n;
//        if (sum >= 100000)
//            break;//跳出一层循环
//    }
//    printf("人数=%d,平均数额=%.2lf\n", i,(double) sum / i);
//    return 0;
//}


//输出100-200可以不可以被3和5整除的数字
//#include<stdio.h>
//int main()
//{
//    for (int i = 100;i < 130;i++)
//    {
//        if (i % 3 == 0)
//            continue;//break:到此彻底结束循环    continue:本轮结束进入下一轮
//        printf("%d\n", i);
//    }
//    return 0;
//}



//输出矩阵(4*5)
//#include<stdio.h>
//int main()
//{
//    for (int i = 1;i <= 4;i++)//行
//    {
//        for (int j = 1;j <= 5;j++)//列
//        {
//            printf("%-3d", i * j);//%d   :空三个格;%3d:每个占三个格(右对齐);%-3d:左对齐
//        }
//        printf("\n");
//    }
//    return 0;
//}


//求和
//#include<stdio.h>
//int main()
//{
//    double sum = 0;
//    int sign = 1;//符号       fabs求绝对值
//    
//    for (int i = 1;i < 100000;i += 2)
//    {
//        sum += sign* 1.0 / i;
//        sign *= -1;
//    }//i为分母
//    printf("pi=%lf\n", sum * 4);
//    return 0;
//}


//斐波那契数列
//#include<stdio.h>
//int main()
//{
//    int f1 = 1;
//    int f2 = 1;
//    int f3 = 1;
//    printf("1 1");
//    for (int i=3;i<=40;i++)
//    {
//        f3 = f1 + f2;
//        printf("%d ", f3);
//        f1 = f2;
//        f2 = f3;
//    }
//    return 0;
//}



//输出最大公约数和最小公倍数
//f



//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf_s("%d %d", &a, &b);
//    int x = a >= b ? a : b;
//    int i;
//    for (i = 2;i<=x;i++)
//    {
//        if (a % i == 0 && b % i == 0)
//        {
//            printf("%d\n", i);
//            break;
//        }
//
//    }
//    return 0;
//}



//#include <stdio.h>
//int f(int a, int b)      //新定义一个函数 f
//{
//	int p, q, t;
//	p = a > b ? a : b;          //p等于a,b中较大的那一个 
//	q = a > b ? b : a;          //q等于a,b中较小的那一个 
//	t = p;
//	while (1)
//	{
//		if (p % q == 0)
//			break;
//		p += t;
//	}
//	return p;                    //返回p的值 
//}
//int main()
//{
//	int x, y;
//	scanf_s("%d%d", &x, &y);
//	printf("%d", f(x, y));         //调用函数f,值为返回的p 
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf_s("%d %d", &a, &b);
//    int x = a >= b ? a : b;
//    int i;
//    for (i = a*b;i>x;i--)
//    {
//        if (i% a == 0 && i % b == 0)
//        {
//            printf("%d\n", i);
//            break;
//        }
//
//    }
//    return 0;
//}



//十六.数组
/*
数组:多个同类型数据
定义:类型,数组名[长度]
初始化:在定义的同时赋值
数组长度不可以是变量,但是下标可以是变量
编译器标准不一定一样
如何使用数组元素
[数字]:这个数字在定义时表示数组长度(前面有类型),使用时表示下标(前面没有类型)
输出整个数组:用循环
数组长度公式:sizeof(arr)/sizeof(arr[0])   注意:arr不能说形参
冒泡排序:从头到尾,两两比较,大的往后,小的往前


定义和引用二维数组:
  定义:类型 数组名[行][列];    例如:int brr[3][4];//定义一个int的3行4列二维数组
  初始化:在定义的同时赋值
  访问元素:通过行列坐标访问


字符数组:非常重要,用的多,考的多
  定义:char 数组名[长度]
  字符串:用""包括的字符序列,可以是0个及以上的字符.字符串末尾有隐藏的'\0'作为结尾标记
    有两种形式字符串:1.用""包括
                     2.有'\0'的字符数组
  

使用字符串处理函数
 ------使用时应引用#include<string.h>和#define _CRT_SECURE_NO_WARNINGS
puts:输出一个字符串,并自动加\n        输入函数gets已被废除
fgets(数组名,长度,stdin)---输入函数
scanf_s:读取字符或字符串时后面必须跟大小    如:scanf_s("%s",str,100);表示字符数组最大容量
strcpy:字符串拷贝(赋值)   strcpy(str2,str1)----把str1赋值给str2上
strcat:字符串连接         strcat(str1,str2)  ---结果存入str1中
strcmp:字符串比较         strcmp(str1,str2)  ---输出大于0的数,则str1>str2
strlen:求字符串长度   "abc"->3(不包括'\0')
strlen与sizeof区分:
  sizeof(a):求a占用的字节数

isupper:判断字符是否为大写字母       如:isupper(str[i])表示均为大写
tolower:判断字符是否为小写字母       如:tolower(str[i])表示均为小写
引用头文件:#include<ctype.h>



数组作为参数传递最大的错误   10没有意义
1、sizeof是运算符，strlen是C语言标准库函数。
2、 strlen 测量的是字符串的实际长度，以’\0’ 结束，返回结果不包括’\0’ 。
3、而sizeof 测量的是字符的分配大小，它的参数可以是数组、指针、类型、对象、函数等。
具体而言，当参数分别如下时，sizeof返回的值含义如下：

数组 - 编译时分配的数组空间大小;

指针 - 存储该指针所用的空间大小;

类型 - 该类型所占的空间的大小;

对象 - 对象的实际占用空间大小;

函数 - 函数返回类型所占空间的大小;

例题1：
char* str1 = “absde”;
char str2[] = “absde”;
char str3[8] = { ‘a’, };
int str4[8] = { ‘a’, };
char ss[] = “0123456789”;

输出：

sizeof(str1)； // 4，计算的是指针内存的大小,包括’\0’
sizeof(str2)； // 6 ，计算的是字符串的内存大小，包括’\0’
sizeof(str3)； // 8 ，计算的是char型数组的内存大小
sizeof(str4)； // 32 ，计算的是int型数组的内存大小
sizeof(ss)； // 11 ，计算的是字符串的大小,包括’\0’
strlen(str1)； // 5 ，计算的是字符串长度，不包括‘\0’
strlen(str2); // 5 ，计算的是字符串长度，不包括‘\0’
strlen(str3); // ？ ，因为字符串需要找到’\0’才可结束，要在’a’之后找到’\0’，所以是个随机值
strlen(str4); // ？ ，因为字符串需要找到’\0’才可结束，要在’a’之后找到’\0’，所以是个随机值
strlen(ss); // 10 ，计算的是字符串长度，不包括‘\0’

*/





//#include<stdio.h>
//int main()
//{
//    int a = 10;//定义一个int变量a并存放于数字10
//    int arr[10];//定义一个int数组变量arr,数组长度为10,随机值
//    int brr[10] = { 1,2,3,4,5,6,7,8,9,10 };//初始化
//    int crr[10] = { 1,2,3,4,5 };//{1,2,3,4,5,0,0,0,0,0}
//    int drr[] = { 1,2,3,4,5 };//自动推导长度,能刚好放下所有元素   //drr[5]
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int arr[a];//vs2022里数组长度为变量是错误的,C99里可以是变量
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };      //定义
//              //下标0,1,2,3,4,5,6,7,8,9
//    arr[2] = 10;//把下标为2的赋值为10
//    //int a = 4;
//    //arr[a] = 100;                                 //使用
//    //printf("%d\n", arr);//不正确,输出是arr的地址
//    //printf("%d\n", arr[10]);//不正确,越界
//    ////printf不能直接一次输出整个数组
//    for (int i = 0;i < 10;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//
//}


//逆序输出10个数组元素
//#include<stdio.h>
//int main()
//{
//    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//    for (int  i = 9;i >= 0;i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6 };
//    int i;
//    printf("%lld,%d,%d\n", sizeof(arr),sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]));
//    return 0;
//}



//实现斐波那契数列
//#include<stdio.h>
//int main()
//{
//    int arr[40] = { 1,1 };//保存斐波那契数列前40项的值
//    arr[2] = arr[0] + arr[1];
//    arr[3] = arr[1] + arr[2];
//    arr[4] = arr[2] + arr[3];
//    for (int i = 2;i < sizeof(arr) / sizeof(arr[0]);++i)
//    {
//        arr[i] = arr[i - 2] + arr[i - 1];
//    }
//    for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
//    {
//        printf("%d ", arr[i]);
//        if (i % 10 == 9)
//        {
//            printf("\n");
//        }
//    }
//    return 0;
//}



//十个地区的面积由小到大排列
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 3,7,9,0,1,23,45,6,12,25,68,79,80,55 };
//    int length = sizeof(arr) / sizeof(arr[0]);//数组长度
//    for (int i = 0;i < length - 1;++i)//循环趟数
//    {
//        for (int j = 0;j + 1 < length - i;++j)//每一趟需从头到尾(不包含一句有序的数据)遍历
//        {                                     //冒泡排序-----即让最大的沉到最后
//            if (arr[j] > arr[j + 1])//交换
//            {
//                int tmp;
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0;i < length;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int brr[3][4];//定义一个int的3行4列的二维数组brr
//    int crr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//    int drr[3][4] = { 1,2,3,4,5,6,7,8,9 };//行优先,剩余为0
//    int err[][4] = { 1,2,3,4,5,6,7,8,9,10 };//自动推导
//    crr[1][2] = 100;
//    for (int i = 0;i < 3;i++)
//    {
//        for (int j = 0;j < 4;j++)
//        {
//            printf("%d ", crr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//矩阵逆置:行列互换
//#include<stdio.h>
//int main()
//{
//    int a[2][3] = { 1,2,3,4,5,6 };
//    int b[3][2];
//    int i=0,j=0;
//    for (;;)
//    {
//       
//        if (i >= 2)
//            break;
//
//        for (;;)
//        {
//            if (j >= 3)
//                break;
//
//            b[j][i] = a[i][j];
//            
//            j++;
//
//        } 
//        i++;
//    }
//    for (int i = 0;i < 3;i++)
//    {
//        for (int j = 0;j < 2;j++)
//        {
//            printf("%d", b[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
// 
//}



//二维数组找最大值
//#include<stdio.h>
//int main()
//{
//    int a[3][4] = { 3,6,8,9,5,12,7,34,6,0,13,25 };
//    int max = a[0][0];//最大值
//    int row = 0;//最大值行号
//    int col = 0;//最大值列号
//    for (int i = 0;i < 3;i++)
//    {
//        for (int j = 0;j < 4;j++)
//        {
//            if (a[i][j] > max)
//            {
//                max = a[i][j];
//                row = i;
//                col = j;
//            }
//        }
//    }
//    printf("在%d行,在%d列", row, col);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    char str1[10];//定义长度为10的字符数组
//    /*printf("%s\n", str1);*/   //输出字符串
//    str1[0] = '1';
//    str1[1] = ' ';
//    str1[2] = 'a';
//    char str2[10] = { '1',' ','a','m' };//初始化一部分,剩余为0
//    char str3[10] = "abcde";
//    printf("%s\n", str3);//str3是字符串,str1不是字符串,str2是字符串
//    printf("%s\n", str1);
//    printf("%s\n", str2);
//    printf("%d,%d,%d,%d\n", false, 0, '\0', NULL);//0,0,0,0
//    return 0;
//}
//%m.nf表示连同小数点在内共m位，其中小数部分占n位（不包含小数点）
//%.nf表示保留n位小数
//%5d（省略正号输出一个右对齐的整数，不够的位数用空格代替，补在前面）
//% -5d(输出一个左对齐的整数，不够的位数用空格补，补在后面）
//% c代表单个字符的输出
//% s代表字符串的输出


//#include<stdio.h>
//int  main()
//{
//    char str1[10];                         //字符数组,不是字符串
//    char str2[10] = "abcde";               //字符数组,是字符串
//    char str3[] = "abcde";                 //字符数组,是字符串,长度为6
//    char str4[] = { 'a','b','c','d','e' }; //字符数组,不是字符串,长度为5
//    char str5[10]= { 'a','b','c','d','e' };//字符数组,是字符串
//    const char* str6 = "abcde";//字符串常量,不是字符数组
//    printf("%s\n", str1);
//    printf("%s\n", str2);
//    printf("%s\n", str3);
//    printf("%s\n", str4);
//    printf("%s\n", str5);
//    return 0;
//}


//----不是字符串的字符数组的输出
//#include<stdio.h>
//int main()
//{
//    char str[] = { 'a','b','c','d','e' };//是字符数组,不是字符串
//    //printf("%s\n", str);//错误,%s输出字符串,str不是字符串------应当做数组来处理
//    for (int i = 0;i < sizeof(str) / sizeof(str[0]);++i)
//    {
//        putchar(str[i]);//单个字节输出
//    }
//    return  0;
//}
//----是字符串的字符数组的输出
//#include<stdio.h>
//int main()
//{
//    char c[15] = { 'I',' ','a','m',' ','a',' ','b','o','y','.' };
//    printf("%c\n", c);
//    return 0;
//}


//输出菱形   
// 1.字符数组     
//#include<stdio.h>
//int main()
//{
//    char c[5][5] = { {' ',' ','*',' ',' '},{' ','*',' ','*',' '},{'*',' ',' ',' ','*'},{' ','*',' ','*',' '},{' ',' ','*',' ',' '} };
//    for (int i = 0;i < 5;i++)
//    {
//        for (int j = 0;j < 5;j++)
//            putchar(c[i][j]);//printf("%c",c[i][j]);
//        putchar('\n');
//    }
//    return 0;
//}
//2.字符串
//#include<stdio.h>
//int main()
//{
//    char c[5][6] = { "  *  "," * * ","*   *"," * * ","  *  " };
//    for (int i = 0;i < 5;i++)
//    {
//        printf("%s\n", c[i]);
//    }
//    return 0;
//}


//字符数组的输入输出
//不是字符串
//#include<stdio.h>
//int main()
//{
//    char c[6];
//    for (int i = 0;i < 6;i++)//从键盘读取6个字符
//    {
//        scanf_s("%c", &c[i]);//getchar
//    }
//    for (int i = 0;i < 6;i++)
//    {
//        printf("%c");//putchar
//    }
//    return 0;
//}
//字符串
//#include<stdio.h>
//int main()
//{
//    char c[6];
//    scanf_s("%s", &c);
//    printf("%s\n", c);
//    return 0;
//}





//#include<stdio.h>
//int main()
//{
//    char str[100] = "abcde xyz";
//    puts(str);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    char str[100]="abcde xyz";
//    char str2[100];
//    fgets(str2, 10, stdin);//stdin:标准输入,即键盘
//    //scanf_s("%s",str2);
//    puts(str2);
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int a = 10;
//    int b = a;
//    char str1[] = "abcde";
//    char str2[10];
//    //char str2[10] = str1;-----错误的
//    strcpy(str2, str1);//把str1内容赋值给str2
//    printf("str2=%s\n",str2);
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str1[20]="abcde";
//    char str2[20]="xyz";
//    //str1=str1+str2//"abcdexyz"
//    strcat(str1, str2);         //str1和str2必须都是字符串才可以连接
//    printf("%s\n", str1);
//    return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    char str1[20] = "abcde";
//    char str2[20] = "xyz";        //不可以直接用<或者>连接
//    char str3[20] = "abcde";
//    int n1 = strcmp(str1, str2);
//    if (n1>0)
//    {
//        printf("%s>%s\n", str1, str2);
//    }
//    else if(n1==0)
//    {
//        printf("%s==%s\n", str1, str2);
//    }
//    else
//    {
//        printf("%s<%s\n", str1, str2);
//    }
//    return 0;
//}
//规则:按字典顺序---字母顺序比较,从头到尾依次比较每一组字母
//cpy---复制
//cat---连接
//cmp---比较
//len---求长度



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    int n = strcmp("abcde", "abcfe");
//    printf("%d\n", n);
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    char str[] = "abcde";
//    printf("%d\n", strlen(str));
//    return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    //printf("%d\n", sizeof(1));//4---字节数占用为4
//    //printf("%d\n", strlen(1));//报错,因为括号内只能是字符串
//    char str1[10]="abcde";
//    char str2[] = "abcde";
//    char str3[10] = "abcde\0\nf";
//    char str4[] = "abcde\0\nf";
//    printf("%d,%d\n", strlen(str1), sizeof(str1));//5,10
//    printf("%d,%d\n", strlen(str2), sizeof(str2));//5,6
//    printf("%d,%d\n", strlen(str3), sizeof(str3));//5,10
//    printf("%d,%d\n", strlen(str4), sizeof(str4));//5,9
//    return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//void Mystrlwr(char str[])//自己实现把字符串中所有大写转为小写
//{
//    for (int i = 0;str[i]!='\0';i++)//遍历字符串
//    {
//        //if(str[i]>='A'&&str[i]<='Z')----不专业
//        if (isupper(str[i]))//是大写字母
//        {
//            str[i] = tolower(str[i]);//大写转小写
//        }
//    }
//}
//int main()
//{
//    char str[] = "abCDEF36 dhjFG";
//    Mystrlwr(str);
//    printf("%s\n", str);
//    return 0;
//
//}



////输入一行字符,统计其中单词数,单词之间用分隔符隔开
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//int main()
//{
//    char str[100];
//    fgets(str, 100, stdin); //-----能读取空格
//    //scanf_s("%s", str, 100);//-----不能读取空格
//    //printf("%s\n", str);
//    int n = 0;//统计单词个数
//    for (int i = 0;str[i] != '\0';i++)
//    {                                           //利用isalpha函数判断是否为字母
//        if (isalpha(str[i])&&!isalpha(str[i+1]))//判断单词的标准:当前是字母,下一个不是字母
//            n++;
//    }
//    printf("%d\n", n);
//    return 0;
//}



//找出3个字符串中最大的
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//int main()
//{
//    char str[3][20];//假定每个字符串长度不超过19(20-1'\0')----用二维数组定义三个字符串
//    char max[20]="";   //保存最大的字符串
//    int i;
//    for (i = 0;i < 3;i++)
//    {
//        fgets(str[i], 20, stdin);//依次输入三个字符串
//    }     //这个输入必须换行分割
//    for (i = 0;i < 3;i++)//依次比较大小
//    {
//        if (strcmp(max, str[i])<0);//比较
//        {
//            strcpy(max, str[i]);//复制
//        }
//    }
//    printf("%s\n", max);
//    return 0;
//}



//选择法对10个数排序
//#include<stdio.h>
//int main()
//{
//    int a[10], i, j, tmp;
//    printf("输入10个数：");
//    for (i = 1; i <= 10; i++)
//        scanf_s("%d", &a[i]);
//    for (i = 1; i <= 10; i++)
//        for (j = i; j <= 10; j++)
//        {
//            if (a[i] > a[j])//换位置
//            {
//                tmp = a[i];
//                a[i] = a[j];
//                a[j] = tmp;
//            }
//        }
//    printf("该十个数升序为： ");
//    for (i = 1; i <= 10; i++)
//        printf("%2d", a[i]);
//}
//用冒泡排序对其排列
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//    //char arr[10];
//    //printf("输入十个数: ");
//    //fgets(arr, 10, stdin);//错误,因为char是字节不是整形,不能比较大小
//   int arr[10], i;
//    printf("输入10个数：");//输入数据
//    for (i = 1; i <= 10; i++)
//    {
//        scanf_s("%d", &arr[i]);
//    }
//    int len = 10;
//    int j,k;
//    int tmp;
//    for (j = 0;j <= len;++j)
//    {
//        for (k = 0;k+1 <= len - j;++k)
//        {
//            if (arr[k] >= arr[k + 1])
//            {
//                tmp = arr[k+1];
//                arr[k + 1] = arr[k];
//                arr[k] = tmp;
//            }
//        }
//    }
//    printf("这十个数排列为: ");
//    int m;
//    for (m = 1;m <= 10;m++)
//    {
//        printf("%2d", arr[m]);
//    }
//    return 0;
//}

//int main()
//{
//    char arr[10];
//    fgets(arr, 10, stdin);
//    printf("%s\n", arr);
//
//    return 0;
//
//}



//输出杨辉三角
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//    char arr[10][10];
//    int j;
//    int i;
//    for (i = 0;i < 10;i++)
//    {
//        arr[i][0] = 1;
//        arr[i][i] = 1;
//    }
//    for (i = 0;i < 10;++i)
//    { 
//        for (j = 0;j < 10;++j)
//        {
//            if (j > i)
//            {
//                arr[i][j] = ' ';
//            }
//            else
//            {
//                arr[i + 1][j + 1] = arr[i][j + 1] + arr[i][j];
//            }
//        }
//        
//    }
//    for (i = 0;i < 10;i++)//开始打印 
//    {
//        for (int k = 0;k < 10 - i;k++)//循环逐级递减打空格 
//            printf("  ");
//        for (j = 0;j <= i;j++)
//            printf("%5d", arr[i][j]);//%5d使每个数字占据5列而不紧凑，美观 
//        printf("\n");//每行打印结束换行 
//    }
//    return 0;
//}
//



//#include"stdio.h"
//int main()
//{
//    int i, j, k, a[10][10];
//    for (i = 0;i < 10;i++)
//    {
//        a[i][i] = 1;//从特殊出发，每行的首尾数字均为1 
//        a[i][0] = 1;
//    }
//    for (i = 2;i < 10;i++)
//        for (j = 1;j <= i - 1;j++)//上面已经处理了第0和第1行已经每行的首尾，故从第2行，每行的第1列开始循环（此处说的是数组中的序列而非口头上的第几） 
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//每个数等于其肩上两数之和（将规律抽象为数组中的关系式） 
//    for (i = 0;i < 10;i++)//开始打印 
//    {
//        for (k = 0;k < 10 - i;k++)//循环逐级递减打空格 
//            printf("  ");
//        for (j = 0;j <= i;j++)
//            printf("%5d", a[i][j]);//%5d使每个数字占据5列而不紧凑，美观 
//        printf("\n");//每行打印结束换行 
//    }
//    printf("\n打印完毕！\n");
//    return 0;
//}



//十七.函数模块化设计
/*
库函数:别的公司(微软)已经实现好的,我们直接使用
自定义函数:自己或者同项目组的组员实现的
函数:1.功能更清晰
     2.提取代码的使用率


返回值  函数名(参数列表)
{
函数体
}


函数名:每个函数需要有一个独一无二的名字(标识符)
void:没有,可以修饰返回值或者参数列表(可以省略)       int main()=int main(void)--显式
如果没有返回值则必须写void

函数定义完成之后不可以自动执行,需要调用
调用函数:
返回值:将函数计算结果通过返回值给函数调用者


函数调用没有限制,但函数定义有限制,函数内部不能定义另一个函数


*/


//#include<stdio.h>
//#include<math.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//void Max()
//{
//    int a;
//    int b;
//    scanf_s("%d%d", &a, &b);
//    int c = a >= b ? a : b;
//    printf("%d\n", c);
//}
//int main()
//{
//    Max();        //在主函数中执行
//    return 0;
//}



//#include<stdio.h>
//#include<math.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//void Max0()
//{
//    int a;
//    int b;
//    scanf_s("%d%d", &a, &b);
//    int c = a >= b ? a : b;
//    printf("%d\n", c);
//}
//void Max2(int a,int b)//a,b称为形式参数,形参,它已有数据,不可在通过scanf_s读取
//{
//    int c = a > b ? a : b;//c不用提供,仅提供a,b就行
//    printf("%d\n", c);   //仅仅把结果打印出来了,输出数据不是目的,应该将结果反馈,利用返回值
//}
////返回值使用
//int Max(int a, int b)
//{
//    int c = a >= b ? a : b;
//    return c;             //返回值
//}
////void Max3(int a, int b, int c)
//int Max3(int a,int b,int c)
//{
//    int d = Max(a, b);//int d=void(没有)   void类型不能用于初始化int类型的实体
//    int e = Max(c, d);
//    return e;        //由于要返回整型变量e,所以void需要改为int
//}
//int main()
//{
//    Max0();        //在主函数中执行
//    Max2(10, 20);   //实际的参数----实参
//    int a = 100;
//    int b = 200;
//    Max2(a, b);
//    int x = Max(10, 20);
//    int y = Max(a, b);
//    printf("%d %d", x, y);
//    return 0;
//}
//仅仅是打印---不用return(操作)    若果是继续使用这个值,那么就要有返回值(运算)



//加和输出
//#include<stdio.h>
//#include<math.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//float Add(float a, float b)//返回类型为float所以用float来声明函数
//{
//    return a + b;
//}
//int main()
//{
//    float a = Add(12.5f, 23.5f);//12.5f表示用float输出小数
//    printf("%f\n", a);
//    return 0;
//}
//float 输入用%f
//double 输入用%lf
//输出都用%f即可



//函数的嵌套使用----统计一个数字中1的个数
//#include<stdio.h>
//#include<math.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//int Count(int n)//n:想要统计的数字    返回值:n
//{
//    int sum = 0;//统计1的个数
//    while (n != 0)//当循环递推关系不明确时,或者起始量不明确时用while     本题是对数字本身进行操作
//                  //for是当递推区间十分清晰时使用                        对数字背后反应的关系操作
//    {             
//        if (n % 10 == 1)//得到个位数
//            sum++;
//        n /= 10;//丢弃个位数
//    }
//    return sum;
//}
//int main()
//{
//    printf("%d\n", Count(123));
//    return 0;
//}
/*
数字     得个位      丢个位      统计
121231     1         12123        1
12123      3         1212         1
1212       2         121          1
121        1         12           2
12         2         1            2
1          1         0            3
0
*/



//函数递归调用    直接或间接调用函数本身---递归调用
//#include<stdio.h>
//int Age(int n)
//{
//    int age = 10;
//    for (int i = 1;i < n;i++)     //用循环来实现
//    {
//        age += 2;
//    }
//    return age;
//}
//int main()
//{
//    printf("%d\n", Age(5));
//    return 0;
//}
//#include<stdio.h>
//int Age(int n)//求第n个人的年龄
//{
//    if (n == 1)
//        return 10;
//    else
//        return Age(n - 1) + 2;//用递归来表示
//}
//int main()
//{
//    printf("%d\n", Age(5));
//    return 0;
//}
//递归有三部分:1.边界条件
//             2.前进段
//             3.返回段



//栈:(函数调用)
//为Age(5)创建内存空间    栈帧:函数结束,该函数的栈帧(分配到内存)系统才能回收
//保存数据



//阶乘的递归实现
//#include<stdio.h>
//long long Fac(int n) //Fac(n):求n的阶乘
//{
//    if (n == 0 || n == 1)
//        return 1;
//    return n * Fac(n - 1);
//}
//int main()
//{
//    for (int i = 0;i < 10;i++)
//        printf("%d!=%lld\n", i, Fac(i));
//    return 0;
//}



//汉诺塔
//一定存在一个状态:上面n-1个盘子在B上,最大的在A上没动,然后C是空的
//#include<stdio.h>
//void Hanoi(int n, char a, char b, char c)
//{
//    if (n == 1)//只有一个盘子,直接从A移到C
//        printf("%c->%c\n", a, c);
//    else
//    {
//        Hanoi(n - 1, a, c, b);//把上面n-1个盘子,从a通过c移到b
//        printf("%c->%c\n", a, c);//把最下面的一个从a移到c
//        Hanoi(n - 1, b, a, c);//把上面的n-1个盘子,从b通过a移到c
//    }
//}
//int main()
//{
//   
//    Hanoi(3, 'A', 'B', 'C');
//    return 0;
//}



//数组作为参数的错误应用
// 结论:一定要传数组名和数组长度
//求一个数组中最大值
//#include<stdio.h>
//int Max(int arr[],int len)//arr:数组名    len:数组长度
//{
//    //在Max函数内部不可以使用sizeof(arr)/sizeof(0)
//    //arr不能是形参,arr本质是指针不是数组
//    int tmp = arr[0];//保存最大值
//    for (int i = 1;i < len;i++)
//    {
//        if (tmp < arr[i])
//            tmp = arr[i];
//    }
//    return tmp;
//
//}
//int main()
//{
//    int arr[] = { 1,5,2,7,8,9,10,4,6,3,11,12};
//    int a = Max(arr,sizeof(arr)/sizeof(0));
//    printf("数组最大值为%d\n", a);//10----数组作为参数传递时只传递起始地址
//    return 0;
//}



//一维数组名做函数参数
/*arr:数组名
n:数组长度*/
//#include<stdio.h>
//double Avg(double arr[], int n)//数组名和数组长度都要传
//{
//    double sum = 0;
//    for (int i = 0;i < n;i++)
//    {
//        sum += arr[i];
//    }
//    return sum / n;
//}
//
//int main()
//{
//    /*double arr[] = { 67,24,35,67,89,100,37 };
//    printf("%lf\n", Avg(arr, sizeof(arr) / sizeof(arr[0])));*/
//
//    double score1[5] = { 98.5,97,91.5,60,55 };
//    double score2[10] = { 44,55,77,32,45 };
//    return 0;
//}



//用选择法对十个数排序
//每次从待排序中找到最小值之后和第一个交换
//#include<stdio.h>
//void SelectSort(int arr[], int len)
//{
//    int k;//最小值下标
//    int tmp;
//    for (int i = 0;i < len - 1;i++)//排序趟数
//    {
//        k = i;
//        for (int j = i;j < len;j++)//找最小值
//        {
//            if (arr[j] < arr[k])//找到最小值,要更新数据
//                k = j;
//        }
//        tmp = arr[i];
//        arr[i] = arr[k];
//        arr[k] = tmp;
//    }
//}
//
//void Show(int arr[], int n)//输出长度为n的数组arra的所有元素
//{
//    for (int i = 0;i < n;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int arr[] = { 2,3,6,3,5,6,3,5,8,10 };
//    SelectSort(arr, sizeof(arr) / sizeof(0));
//    Show(arr, sizeof(arr) / sizeof(0));
//    return 0;
//}



//多维数组做函数名
//#include<stdio.h>
//void Show(int arr[][4], int row, int col)//输出函数
//{//行和列都应定义
//    for (int i = 0;i < row;i++)
//    {
//        for (int j = 0;j < col;j++)
//        {
//            printf("%2d", arr[i][j]);
//        }
//        printf("\n");
//    }
//}

//int main()
//{
//    int arr[][4] = { 1,2,3,4,5,6,7,8,9 };
//    Show(arr, 3, 4);
//}



//求3*4二维数组最大值
//#include<stdio.h>
//int Max(int arr[3][4], int row, int col)
//{
//    int tmp = arr[0][0];
//    for (int i = 0;i < row;i++)
//    {
//        for (int j = 0;j < col;j++)
//        {
//            if (arr[i][j] > tmp)
//                tmp = arr[i][j];
//        }
//    }
//    return tmp;
//}
//
//void Show(int arr[][4], int row, int col)//输出函数
//{//行和列都应定义
//    for (int i = 0;i < row;i++)
//    {
//        for (int j = 0;j < col;j++)
//        {
//            printf("%2d", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int arr[][4] = { 1,2,4,4,5,4,6 };
//    Show(arr, 3, 4);
//    printf("%d\n", Max(arr,3,4));
//}



//全局变量和局部变量
//全局变量:定义在函数外部的变量,尽量少用,学习时不适用(不安全)
//局部变量:定义在函数内部的变量,包括形参
//              作用域  生命周期  默认值
//全局变量:从某个定义开始,到整个文件结束,都能使用,程序运行创建,结束时销毁,浪费空间,默认值:0
//局部变量:只在本函数内部使用(优点----防止名字污染)默认值:无效
// static:静态,修饰变量或者函数
// 静态局部变量:在函数内部使用,从第一次进入函数创建,程序结束才销毁,默认值为0
// 普通局部变量:在函数内部使用,进入函数创建,函数结束才销毁,
// 存储类别:auto自动的,statis静态的,register寄存器的,extern外部的
//register:建议编译器对这个变量进行优化,变量多次使用,建议把他从内存加载到寄存器




//#include<stdio.h>
//void Show()
//{
//    int a = 0;
//    ++a;
//    printf("%d\n", a);
//}
//
//int g_a;
//
//void Show2()
//{
//    ++g_a;
//    printf("%d\n", g_a);
//}
//
//void Show3()
//{
//    static int a = 0;//函数结束后不销毁,这一句代码只有第一次进入函数才调用,其他时间不执行
//    ++a;
//    printf("%d\n", a);
//}
//
//int main()
//{
//    Show3();
//    Show3();
//    printf("%d\n", a);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    for (register int i = 0;i < 10;i++)//现在不适用了
//    {
//        printf("%d\n", i);
//    }
//    return 0;
//}


//指针
/*
指针:就是地址
&变量名:获取该变量的地址(指针),&称为取地址符
4&3:按位于
指针变量:保存指针(地址)的变量
  类型*变量名:定义一个类型的指针变量
  在指针变量定义时出现的*用于说明该变量是指针变量
使用指针变量:  *p通过p访问p所指向的内容
*p:解引用/间接访问符

int a=10;//printf("%d\n",a);printf(&a);int*p
&的作用:1.按位与 4&3   2.取地址 例如&a   3.C++的引用
          按位与:   4;100   &相同的位都为1才为1
                    3:011
                 -> 0:000


指针的应用:
总结:一个函数A想通过调用函数B来达到修改A中变量的值,1.必须传指针2.必须解引用


*/
//#define _CRT_SECURE_NO_WARNING_
//#include<stdio.h>
//#include<ctype.h>
//#include<math.h>
//#include<string.h>


//int main()
//{
//    int a = 10;//4字节
//    a = 20;
//    int b = 20;
//    b = a;
//    &a;//获取a的地址
//    &b;//获取b的地址
//    printf("%p,%p\n", &a, &b);//%p:输出地址(指针),以十六进制输出
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b = 20;
//    int*p=&a;    //一个int地址(指针)赋值给一个int指针变量
//    获取a的地址     int*p=&a     
//    *:用于描述p是一个指针类型的变量   没有类型时不用*
//    p = &b;//把b的地址赋值给p
//    char c;
//    double d;
//    char* p1 = &c;
//    double* p2 = &d;
//
//
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b=20;
//    int* p = &a;
//    *p = 100;//a=100;   间接改变a的值
//    p = &b;//保存b的地址
//    *p = 200;//b=200
//    return 0;
//}



//int main()
//{
//    int a = 20;
//    int b = 2;
//    //int* p = &a;
//    int* p = &a;
//    p = &b;
//    printf("%d\n", a);//20
//    //printf("%d\n", *p);//20
//    printf("%p\n", &a);//000000AEEE76F824
//    printf("%d\n", a);//20
//    printf("%d\n", *p);//2
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b = 20;
//    int* p = &a;
//    *p = 100;
//    p = &b;
//    *p = 200;
//    printf("%p,%p\n", &b, p);
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    printf("%d,%d\n", a, &a);//a的值,a的地址,
//    int* p = &a;
//    printf("%d,%d,%d\n", *p, p, &p);//p指向a变量的值,a的地址,p的地址(与a的地址不同)
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("%d\n", a & b);//按位与
//}


//原写法
//int main()
//{
//    int a, b;
//    scanf_s("%d,%d", &a, &b);
//    int tmp = a;
//    a = b;
//    b = tmp;
//    printf("%d,%d\n", a, b);
//    return 0;
//}
//用定义函数
//void Swap_err1(int a,int b)//交换失败---两个不同的函数的地址不同
//{
//    int tmp=a;
//    a = b;
//    b = tmp;
//}
//
//void Swap_err2(int* p1, int* p2)//交换失败---没有使用*  未解引用
//{
//    int* tmp;
//    tmp = p1;
//    p1= p2;
//    p2 = tmp;
//}
//
//void Swap(int* p1, int* p2)
//{
//    int tmp;
//    tmp = *p1;       //解引用
//    *p1 = *p2;
//    *p2 = tmp;
//
//}
//
//int main()
//{
//    int a, b;
//    scanf_s("%d %d", &a, &b);
//    Swap(&a, &b);
//    printf("%d,%d\n", a, b);
//    return 0;
//
//}



//如何返回两个值
//C语言只能返回0或1个值
//解一元二次方程
//假定d=b^2-4ac>0
//void Fun(int a, int b,int c)//只能返回0或1个值
//{
//    int d = b ^ 2 - 4 * a * c;
//    double y1, y2;
//    y1 = (-b + sqrt(d) / (2 * a));
//    y2 = (-b - sqrt(d) / (2 * a));
//
//}
//int Fun2(int a, int b, int c,double*x1,double*x2)
//{
//    int d = b *b - 4 * a * c;
//    *x1 = (-b + sqrt(d)) / (2 * a);
//    *x2 = (-b - sqrt(d)) / (2 * a);//*x1,*x2为输出参数---传指针,内部解引用
//    return 2;
//}
//
//int main()
//{
//    double x1;
//    double x2;
//    Fun2(3, 5, 1, &x1, &x2);
//    printf("%lf,%lf\n", x1, x2);
//    return 0;
//}



//指针
/*
int a=1;
int *p=&a;    *p:整形指针类型  ->  &a:a的地址




*/

//1.指针大小
//#include<stdio.h>
//int main()
//{
//    printf("%lu/n", sizeof(int*));//8
//    printf("%lu/n", sizeof(char*));//8
//    printf("%lu/n", sizeof(double*));//8
//    printf("%lu/n", sizeof(float*));//8
//    printf("%lu/n", sizeof(short*));//8
//    return 0;
//}
//-----在64位操作系统中,指针占8个字节


//2.理解*
/*(1)定义的时候, (前面有类型)表示后面的变量是指针
(2)使用时:表示取值(去指针指向的内存空间的值)
int a = 1;
int* p = &a;
*p = 100;
*p就是变量a//a=100
*/


//3.int*和char*
/*
(1)char ch = 'a';
char* q = &ch;//不应写成int*q,因为其为字符型地址
(2)二者步长不同
*/
//#include<stdio.h>
//int main()
//{
//    int num = 1;
//    int* p = &num;
//    *p = 100;//等价于修改num的值   间接访问num变量
//
//    char ch = 'a';
//    //int* q = ch;   //类型不兼容
//    char* q = &ch;
//    *q = 'x';
//    printf("%c\n", ch);//x
//    printf("%p\n", p);//地址
//    printf("%p\n", q);//地址
//    printf("%p\n", p+1);//地址+4           p指向整形num,占了4个字节
//    printf("%p\n", q+1);//地址+1           q指向字符ch,只占了1个字节
//    return 0;
//}
/*
%后加的字母                   代表的含义

          %d                打印整型十进制数据

          %c                 打印字符格式数据

          %f                 打印float浮点数据

          %p                   打印地址数据

          %x                  打印十六进制数据

          %s                     打印字符串

           %lf                 打印double数据

           %e              以指数形式输出数据

           %g         根据大小自动选f格式或e格式，且不输出无意义的零

           %o                   输出八进制数据

           %u                 输出无符号十进制 数据

           %ld                    输出长整型

*/



//4.指针应用
//典型代码---交换数字
//#include<stdio.h>
//
//void Swap_1(int x, int y)//并不能交换----
//{
//    int tmp=x;
//    x = tmp;
//    tmp = y;      //释放空间之后只交换形参未交换实参
//    //若要交换实参值,只能传地址
//}
//
//
//void Swap(int *x, int* y)
//{
//    int tmp = *x;
//    *x = *y;
//    *y = tmp;
//}
//
//int main()
//{
//    int a = 1, b = 2;
//    Swap(&a, &b);
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}
//形参:定义函数时的参数称之为形参   formal
//实参:调用函数时的参数称之为实参   actual
//之前定义函数的代码可以运行是因为他们类似于操作或者输出,是传回一个值或一些要输出的东西
// 而这个函数不可以是因为他是传输数值,试讲两个原有的值再输出



//5.指针运算
/*
赋值运算:
int a,*pa=&a,*pb;        
pb=pa;                     //可以分为四句:int a;int *pa=&a;int*pb;int*pb=pa;
//pa里面储存的是地址,不加*直接赋值就是把地址赋值进去了,相当于a有两个指针





*/

//例题:
//#include<stdio.h>
//int main()
//{
//    int x = 3, y = 0, * px = &x;
//    // y = *px + 5;      //8
//    //y = ++ * px;       //4
//    //y = *px++;           //3
//    y = (*px)++;
//    printf("%d\n", y);
//    return 0;
//}



//#include<stdio.h>
//void mystrcpy(char* dest, const char* src)//const修饰*src
//{
//    /*
//    while ((*dest++=*src++)!='\0')
//    {
//        *dest++ = *src++;
//    }
//    */   //输出hello5666789
//    while ((*dest++ = *src++) != '\0');//输出hello    一直运行直到遇到\0
//}
//
//int main()
//{
//    char s1[32] = "hello";
//    char s2[32] = "112345666789";
//    mystrcpy(s2, s1);
//    printf("%s\n", s2);
//    return 0;
//}
//
//void f()
//{
//    int num;
//    const int* p1 = &num;//const修饰*p1,即num   const修饰:就近原则
//    //const作用:被修饰变量不能再改变值
//    //(*p1)++;----地址不可以修改
//    p1++;//地址本身可以修改
//    int* const p2 = &num;//const修饰p2
//    (*p2)++;
//    const int* const p3;//均不可修改
//}



//6.野指针和空指针
/*
如何合法的使用指针:
1.系统分配的内存
    int a;
    int*p1=&a;
2.用户申请内存:(堆内存)         头文件:#include<stdlib.h>
    char*str=(char*)malloc(32);      //申请32个字节的内存
    free(str);      //释放内存,如果不释放,内存泄漏
    str=NULL;
*/


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    /*
//    int* p;
//    *p = 100;
//    */          //段错误:访问了不能访问的内存   需要先初始化
//    /*
//    int* p = NULL;       //NULL:空
//    *p = 100;   //仍然是段错误:
//    */
//    int* p = NULL;
//    int a;
//    int* p1 = &a;
//    char* str = (char*)malloc(32);
//    free(str);
//    str = NULL;//防止再变成野指针
//    return 0;
//}



//7.指针指向数组元素
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//    int* p = &arr[0];//第一个元素int的地址   
//    //int*p=arr;        
//    //一维数组的名字表示整个数组只在如下情况:
//    //1.定义数组的同一个函数中求sizeof  例如:int arr[10];sizeof(arr)->40
//    //2.在定义数组同一个函数时,&arr+1,表示家整数个数组的大小,例如:int arr[10],&arr,&arr+1
//    //其他情况都是表示数组首元素的地址
//    printf("%d,%d\n", arr[0], *p);
//    printf("%d\n", sizeof(arr));
//    printf("%d,%d\n", &arr, &arr + 1);//表示整个数组的大小(字节数)   地址加了40---表示加整个数组的大小
//    return 0;
//
//}



//8.指针加法运算
//#include<stdio.h>
//int main()
//{
//    int arr[10];
//    int* p = arr;
//    printf("%d\n", *p);
//    //指针输出访问数组所有元素
//    //for (int i = 0;i < 10;i++, p++)//指针++会使之表示下一个元素  p++是地址变化,*p++是赋的值的变化
//    //{
//    //    printf("%d ", *p);
//    //}
//    for (int i = 0;i < 10;i++)
//    {
//        printf("%d", *(p + i));
//    }
//    return 0;
//}
//指针算术运算:前提是程序保持不越界
//倒着输出:
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//    int* p = &arr[9];
//    /*for (int i = 0;i < 10;i++)
//    {
//        printf("%d ", *p);
//        p--;
//    }*/
//    for (int i = 0;i < 10;i++)
//    {
//        printf("%d ", *p--);
//    }
//    return 0;
//}



//9.输出数组元素的多种方法
//常规写法
//#include<stdio.h>
//int main()
//{
//    int a[10];
//    int i;
//    printf("please enter 10 inteaer numbers:");
//    for (i = 0;i < 10;i++)
//    {
//        scanf_s("%d", &a[i]);
//    }
//    for (i = 0;i < 10;i++)
//    {
//        printf("%d", a[i]);
//    }
//    printf("\n");
//    return 0;
//}

//利用指针的方法
//#include<stdio.h>
//int main()
//{
//    int a[10];
//    int i;
//    int* p = a;
//    for (i = 0;i < 10;i++)
//    {
//        scanf_s("%d", &a[i]);
//    }
//    for (i = 0;i < 10;i++)
//    {
//        printf("%d", *(a + i));
//    }
//    printf("\n");
//    return 0;
//}



//指针的关系运算前提需要在一个数组里
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (int* p = arr;p != &arr[10];p++)//可以使用尾后地址(尾巴后面的指针)
//    {
//        printf("%d", *p);
//    }
//    return 0;
//}



//10.常见的错误
//#include<stdio.h>
//int main()
//{
//    int* p, i, a[10];
//    p = a;
//    for (i = 0;i < 10;i++)
//    {
//        scanf_s("%d", p++);
//    }//p已经到达a的尾后了----指针越界了
//    p = a;
//    for (i = 0;i < 10;i++, p++)
//    {
//        printf("%d", *p);
//    }
//    printf("\n");
//    return 0;
//}



//11.用数组进行参数传递----传输组名+数组长度
//#include<stdio.h>
//void Show(int*p,int n)//p起始地址   n长度
//{
//    for (int i = 0;i < n;i++)
//    {
//        printf("%d", p[i]);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    Show(arr,sizeof(arr)/sizeof(arr[0]));
//    return 0;
//}



//12.对数组反序
//#include<stdio.h>
//void inv(int* x, int n)
//{
//    int tmp;
//    //for (int i = 0, j = n - 1;i < j;i++, j--)//把x当做数组名来操作
//    //{
//    //    tmp = x[i];
//    //    x[i] = x[j];
//    //    x[j] = tmp;
//    //}
//    for (int i = 0, j = n - 1;i < j;i++, j--)//把x当做指针来操做
//    {
//        tmp = *(x + i);
//        *(x + i) = *(x + j);
//        *(x + j) = *(x + i);
//    }
//}
//
//void Show(int* p, int n)//p起始地址   n长度
//{
//    for (int i = 0;i < n;i++)
//    {
//        printf("%d ", p[i]);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int arr[] = { 1,3,5,7,9,11,13,14,16,19 };
//    inv(arr, sizeof(arr) / sizeof(arr[0]));
//    Show(arr, sizeof(arr) / sizeof(arr[0]));
//    return 0;
//}


//13.对数组排序---选择排序法
//选择法排序:
//每次从待排序中找最小值和待排序的第一个值交换,直到全部有序
#include<stdio.h>
void Selectsort1(int* arr, int n)//用下标来表示
{
    int k;//最小值下标
    for (int i = 0;i < n - 1;i++)
    {
        k = i;
        for (int j = i + 1;j < n;j++)
        {
            if (arr[j] < arr[k])//需要更新数据
            {
                k = j;
            }
        }
        if (k != i)//把第一个值与最小值交换
        {
            int tmp;
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
        }
    }
}

void Selectsort(int* arr, int n)//用指针来表示
{
    int k;//最小值下标
    for (int i = 0;i < n - 1;i++)
    {
        k = i;
        for (int j = i + 1;j < n;j++)
        {
            if (*(arr+j)<*(arr+k))//需要更新数据
            {
                k = j;
            }
        }
        if (k != i)//把第一个值与最小值交换
        {
            int tmp;
            tmp = *(arr + i);
            *(arr + i) = *(arr + k);
            *(arr + k) = tmp;
        }
    }
}

void Show(int* p, int n)//p起始地址   n长度
{
    for (int i = 0;i < n;i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 1,3,5,7,9,11,13,12,10,4 };
    Selectsort(arr, sizeof(arr) / sizeof(arr[0]));
    Show(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}












































