//2024.8.26
// 
//һ���ȴ�С
//#include<stdio.h>
//int main()
//{
//	int a = 123;//�������ͱ�������ֵΪa
//	int b = 456;
//	int sum = a + b;//����int ����sum����ֵΪa+b
//	printf("%d\n", sum);//%d��ʽ����,�������
//	return 0;
//
//}



//��.�Ӽ��̶�ȡ����
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d",&a);
//	printf("%d\n",a);
//	return 0;
//}



//��.�ȴ�С
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d", &a, &b);//scanf_s����
//	if (a >= b)
//		c = a;
//	else
//		c = b;
//	printf("�������%d\n", c);
//
//	return 0;
//}


//���
//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	scanf_s("%d %d", &a, &b);
//	c =a>=b? a : b;//?Ϊ��:Ϊ��
//	printf("%d\n", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int max(int x, int y);//max(int x,int y)��һ��������ĺ���,����int
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



//��.�۳�
//#include <stdio.h>
//int main()
//{
//	int a = 1 * 2 * 3 * 4 * 5;
//	printf("%d\n", a);
//	return 0;
//}


//��ѭ���İ취
//#include<stdio.h>
//int main()
//{
//	int a = 1;//����int����a����ʼ��Ϊ1
//	for (int i = 1;i <= 5;++i)//ѭ��   ++i--i��ֵ����1
//		//���ʽ1:��ʼ��ѭ������,����ִ��һ��
//		//���ʽ2:�ж�,Ϊ�����,Ϊ��ѭ������
//		//���ʽ3:�޸�ѭ�����ӵ�ֵ
//		a = a * i;
//	printf("%d\n", a);
//	return 0;
//}



//��.�ж�����   ���2000�굽2500��֮�������
/*#include<stdio.h>
int main()
{
	for (int year = 2000;year <= 2500;++year);
	{
		//���ʽ1/���ʽ2:�õ���.����10/2Ϊ5   ע����������---���Ϊ����С��������
		//���ʽ1%���ʽ2:ȡ����.�ж�����ʱ����ʹ��
	}
	return 0;
}
*/
//#include<stdio.h>
//int main()
//{
//	double a = 10 / 3;//���Ϊ����,����С��
//	double b = 10.0 / 3;//�ƻ�����������,���Ϊ��С��
//	printf("%lf\n%lf\n", a, b);
//	return 0;
//}



//���ʽ1/���ʽ2:�õ���.����10/2Ϊ5   ע����������---���Ϊ����С��������
//���ʽ1%���ʽ2:ȡ����.�ж�����ʱ����ʹ��
//==�Ⱥ�,�ж������Ƿ����
//=��ֵ
//&&��
//||��
//!=���Ⱥ�




//2024.8.27
//#include<stdio.h>
//int main()
//{
//	for (int year = 2000;year <= 2500;++year)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("%d������\n", year);
//	}//2100�겻������
//	return 0;
//}


//��.��������
/*��������:(�ֽ���,���ݷ�Χ)       1�ֽ�Ϊ8λ
* �ַ�:char(1)------���ڱ�ʾӢ��(8)----�ַ�,���ܴ�����,�ɱ�ʾ2^8��
* ����:short(2),int(4),long(4),long long-----short:2^16=65536��     int:2^32=4294967296��
* С��:float(4),double(8,Ĭ��)��Ч���ָ��෶Χ����
* 
* //sizeof:���ֽ���
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


//��.�����
/*
()������������ֵ
�߼�ν��:
!:����,��
��:��0,C99 true
��:0,C99   false 
&&:��    ��Ϊ���Ϊ��
||:��    һ��Ϊ���Ϊ��
<:С��   ע�ⲻ����ʹ�������Ƚ�
++i:i��ֵ����1                         �ȼ�1,�����ֵ
i++       ����ʹ��������               �������ǰֵ�ټ�1
--i  i--  Ҳ����ǰ�úͺ���
*ָ�����:��ӷ��ʷ�,������
(����)����:�ѱ���ǿ��ת��Ϊ()�е���ʽ
sizeof:���ֽ���
%ȡ��,�������     Ӧ��:1.�ж�����2.���Ʒ�Χ
/n:���з�
���ʽ1?���ʽ2:���ʽ3      ������ʽ1Ϊ��,��ִ�б��ʽ2,����ִ�б��ʽ3
=��ֵ�����
��������ʹ�÷��ϸ�ֵ��    a+=10//a=a+10     a-=b//a=a-b   a*=2//a=a*2  /=    %=




*/

//#include<stdio.h>
//int main()
//{
//	//if (0)
//	//if("hgl")
//	if(!1)         //��
//		printf("��\n");
//	else
//		printf("��\n");
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 5;
//	//if (0 < n < 10) (����)    //(0<n)<10->��(1)<10   �����������������ֱȽϴ�С
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
//	if (++a || ++b)   //��·
//		printf("��");
//	else
//		printf("��");
//	printf("%d %d\n", a, b);//\n���Ի���
//	return 0;//���Ϊ11,20------��·����
//	//���ʽ1&&���ʽ2    ������ʽ1Ϊ��,���ʽ2������
//	//���ʽ1||���ʽ2    ������ʽ1Ϊ��,���ʽ2������
//}


//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int j = ++i;
//	printf("i=%d,j=%d", i, j);//i=11,j=11    ǰ��
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int j = i++;
//	printf("i=%d,j=%d", i, j);//i=11,j=10     ����++:һ���ټ�
//	//�Ȱ�i��ֵ��j,Ȼ���ٶ�i++
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
//	int c = (10, 20);//�������ź������ֵ
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
//	t = x++ || ++y;//y=2-----��Ϊ����·    t=1-----�߼����ʽ,Ϊ��
//	printf("%d,%d\n", t, y);//1,2
//	return 0;
//}


//��.���������Ż�
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);//scanf_sʱӦ����&
//	for (int i = 2;i < n;++i)
//	{
//		if (n % i == 0)
//		{
//			printf("%d��������\n", n);
//			return 0;//����ѭ��
//		}
//	}
//	printf("%d������\n", n);//ѭ��֮��ʼ��û�н���ѭ��,�������Ϊ�����Ľ���
//	return 0;
//}



//�����Ż�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long n;
//	scanf_s("%lld", &n);
//	for (long long i = 2;i <= sqrt(n);++i)
//		//^Ϊ�˷�     //sqrtΪ����,������Ҫ����<math.h>
//	{
//		printf("%lld��������\n", n);
//		return 0;
//	}
//	printf("%lld������\n",n);
//	return 0;
//}







//��.���㷨����
//#include<stdio.h>
//int main()
//{
//	double sum = 0;//��
//	int sign = 1;//����
//	int deno = 1;//��ĸ
//	for (int deno = 1;deno <= 100;deno++)//��ĸ
//	{
//		sum += sign *1.0 / deno;//ע������,��1.0�ƻ�����
//		//�ۼӺͼ��Ϸ��ӳ���ĸ
//		sign *= -1;
//		//����ÿ�γ�-1
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
/*
sign:��ǰ����ֵ����
term:��ǰ���ֵ
sum:��ǰ���ۼӺ�
deno:��ǰ���ĸ
*/




//��ҵ
//�����Ƚϴ�С
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


//��1�ӵ�100
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


//�ж�һ�����ɷ�ͬʱ��3��5����
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d",&a);
//	if (a % 3 == 0 && a % 5 == 0)
//		printf("%d�ܱ�����������\n", a);
//	else
//		printf("%d����ͬʱ��3��5����\n", a);
//	return 0;
//}


//100-200֮���������
//#include<math.h>
//#include<stdio.h>
//int main() {
//	int n;
//	for (int i = 101; i <= 200; i += 2) 
//	{
//		//sqrt:����ƽ����
//		int sqrti = (int)sqrt(i);//�ÿ�ƽ����Ч�ʸ���
//		for (n = 2; n <= i; n++) 
//		{
//			if (i % n == 0) 
//				break;
//		}
//		if (i == n) 
//		{
//			printf("������%d\n", i);
//		}
//	}
//}


//���
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


//ʮ.˳��ṹ���
//���϶�
//#include<stdio.h>
//int main()
//{
//	double f;//�����¶�
//	scanf_s("%lf", &f);//��ȡdouble������%lf,�״�
//	double c = 5.0 / 9 * (f - 32);
//	printf("%lf\n", c);
//	return 0;
//}


//������Ϣ
//#include<stdio.h>
//int main()
//{
//	double p0 = 1000;
//	double r1 = 0.0036;
//	double r2 = 0.0225;
//	double r3 = 0.0198;
//	printf("���ڱ�Ϣ��Ϊ%lf\n", p0 * (1 + r1));
//	printf("һ�걾Ϣ��Ϊ%lf\n", p0 * (1 + r2));
//	printf("0.5���0.5�걾Ϣ��Ϊ%lf\n", p0 * (1 + r3 / 2) * (1 + r3 / 2));
//	return 0;
//}



//ʮһ.���������
/*
����:�����޸ĵ�ֵ
  ���ֳ���,��������:����1;     С��:1.234,       ��ѧ������----123.4=1.234e2
  �ַ�����:�õ����Ű�����һ������.'a'  '0'  'A'   '\0'   '\n'(ת���ַ�)�޸���ԭ����
                                   97   48   65     0     ����
  ת���ַ�:�ı�ԭ����,'\0'�ַ����Ľ�β���;'\n'����;'\\'�����ַ�\(�ļ���·����Ҫʹ��)
  �ַ�������:��""�������ַ�����,������0�����ϵ��ַ�,����""(�մ�),"abc"
  (���ų���)�궨��:#define ���� �滻������    ��C���õö�,C++�в�����   ����ֵ��������Լ�������

  
����:�����޸ĵ�ֵ
  1.�ȶ����ʹ��  ����   ������=��ʼ��ֵ;
  2.��ʶ�������淶:������,������,����
    (1)ֻ������ĸ,����,�»���        a b  a3b_
	(2)���������ֿ�ͷ
	(3)���ִ�Сд
	(4)�ؼ��ֲ���ʹ��


����ת��:
  101.11=1*2^2+0*2^1+1*2^0+1*2^-1+1*2^-2=4+1+0.5+0.25=5.75
  ʮ����ת������
    90 ����ȡ��1010110
    60 ��32,16�� 00111100


��ֵ�ڼ�����ı�ʾ,��׼�涨,���޷��������е�λ������ֵ,
�����з�����,���λ����λ(0��ʾ����,1��ʾ����):
  12(һ�ֽ�(8λ)):00001100
  -12            :10001100
  0              :10011000   ������ƴ���
�������
  12             :00001100
  0              :00000000
  -12            :11110100       ��ʱ12+(-12)Ϊ100000000ֻ��8���ֽ�,������ǰ�˵�1����
  ----------����       ����ֵ�Ķ���������Ȼ���ټ�1


*/

//#include<stdio.h>
//int main()
//{
//	printf("%d %d %d %d %d\n", '0', 'A', 'a', '\0', '\n');//%d����ַ���Ӧ����ֵ
//	printf("%c, %c, %c, %c, %c, %c\n", '0', 'A', 'a', '\0', '\n','B');//%c�����Ӧ���ַ�
//	return 0;
//}


//#define PI 3.14

//�������  ------------һ�ۿ������Ķ�����
//#define DOUBLE(x) x+x
//int main()
//{
//	printf("%d\n", 2 * DOUBLE(10));//������Ϊ30
//	//2*DOLUBLE(10)�滻Ϊ2*10+10,����������
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int b;
//	b = b + 10;
//	printf("%d\n", b);      //����Խ�类����,Ӱ��ԽС
//	return 0;
//}


//ʮ��.����
//��дתСд        �����ַ�����
//#include<stdio.h>
//int main()
//{
//	char ch;//char�������ڱ�ʾ�ַ�����,��ĸ
//	printf("������һ����д��ĸ\n");
//	scanf_s("%c", &ch);
//	if ('A' <= ch && ch <= 'Z')
//		printf("%c\n", ch + ('a' - 'A'));//'a''A'��A��a�ľ���
//
//	return 0;
//}
//'��д'-'Сд'=32



//�����������  ���ж����ݺϷ���
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > 0 && b > 0 && a + b > c && b + c > a && a + c > b)//�ж��������Ƿ����
//	{
//		double s = (a + b + c) / 2.0;//ע������
//		double area = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("%lf", area);
//	}
//	else 
//	{
//		printf("����Ƿ�\n");
//	}
//	return 0;
//}



//����η��̵ĸ�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	int d = b ^ 2 - 4 * a * c;
//	if (d < 0)
//	{
//		printf("��ʵ��\n");
//		return 0;
//	}
//	double x1, x2;
//	x1 = (-b + sqrt(d)) / (2 * a);
//	x2 = (-b - sqrt(d)) / (2 * a);
//	printf("%lf,%lf", x1, x2);
//	return 0;
//
//}


//ʮ��.�����������
//getchar---����һ���ַ�     putchar-----���һ���ַ�
//#include<stdio.h>
//int main()
//{
//	char ch = getchar();//�Ӽ��̻�ȡһ���ַ�,������
//	//putchar(ch);//���һ���ַ�����Ļ
//	while((ch=getchar())!='\n')//��ȡһ���ַ�     �ı�����ֵ˳��,������
//	return  0;
//}


//ʮ��.ѡ��������
/*
1.if���
(1)����֧
if(���ʽ1)
  {
     ���1
  }
  //������ʽ1Ϊ��,ִ�����1
(2)˫��֧
if(���ʽ1)
{
    ���1
}
else
{
    ���2
}
//������ʽ1Ϊ����ִ�����1
(3)���֧
if(���ʽ1)
{
    ���1
}
else if(���ʽ2)
{
    ���2
}
...
else
{
}
*/


//��.��С������������ʵ��
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



//��С���������������
//#include<stdio.h>
//int main()
//{
//	double a, b, c;
//	double tmp;
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	//a������Сֵ,b����ڶ�С��ֵ,c�������ֵ
//	//��aΪa,b����Сֵ,a,c����Сֵ...
//	if (a > b)
//	{
//		//����
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



//�Զ��η�������Ľ�
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
//		printf("û��ʵ��\n");
//	}
//	else if (d == 0)
//	{
//		x1 = x2 = -b / (2.0 * a);
//		printf("�ظ�\n", x1);
//	}
//	else
//	{
//		x1 = (-b + sqrt(d)) / (2.0 * a);
//		x2 = (-b - sqrt(d)) / (2.0 * a);
//		printf("��Ϊ%lf,%lf\n", x1, x2);
//	}
//	return 0;
//}


//�ֶκ���
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
switch(���α��ʽ)------���������������ö�� char int bool long ...
{
case �������ʽ1:
���1
break;
case �������ʽ2:
���2
break;
default:
���n+1
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
//	case 0:             //Ĭ��a==0   ��ǩ   ��ǩ������һ��,����Ψһ
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
//��ν�:�����α��ʽ������һ���������ʽ(��ǩ)��ͬʱ����
//��γ�:������breakʱ��������switch����



//����:
//#include<stdio.h>
//int main()
//{
//	int s;
//	scanf_s("%d", &s);
//	double a = 1;
//	switch (s/250)//��������
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
//	printf("����=%.2lf\n", a);//%.2lfΪ������λС��
//	return 0;
//	*/
//}



//ʮ��.ѭ���ṹ���
/*
for, while, do while, break, continue

1.for (���ʽ1;���ʽ2;���ʽ3)
{
    ���1
}
���ʽ1:ѭ�����ӳ�ʼ��,���类ִ��,����ִ��һ��
���ʽ2;Ϊ��ѭ������,Ϊ��ѭ������
���ʽ3:����,�޸�ѭ�����ӵ�ֵ,������1֮��ִ��
2.whileѭ���ı��
while(���ʽ1)
{
    ���1
}
���ʽ1���Ϊ��,ѭ������,Ϊ�������,����ʡ��
3.do whileѭ��
do
{
    ���1
}
while(���ʽ1);
4.break
����:����һ��ѭ��
5.continue:��ǰ��������ѭ��,��ǰ������һ��ѭ��

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

//��һ�ֱ��
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


//��1�ӵ�100
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


//��һ��д��
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
//    int n;//ÿ�ξ�������
//    int i;
//    for ( i = 1;i <= 1000;++i)//i�������
//    {
//        scanf_s("%d", &n);
//        sum += n;
//        if (sum >= 100000)
//            break;//����һ��ѭ��
//    }
//    printf("����=%d,ƽ������=%.2lf\n", i,(double) sum / i);
//    return 0;
//}


//���100-200���Բ����Ա�3��5����������
//#include<stdio.h>
//int main()
//{
//    for (int i = 100;i < 130;i++)
//    {
//        if (i % 3 == 0)
//            continue;//break:���˳��׽���ѭ��    continue:���ֽ���������һ��
//        printf("%d\n", i);
//    }
//    return 0;
//}



//�������(4*5)
//#include<stdio.h>
//int main()
//{
//    for (int i = 1;i <= 4;i++)//��
//    {
//        for (int j = 1;j <= 5;j++)//��
//        {
//            printf("%-3d", i * j);//%d   :��������;%3d:ÿ��ռ������(�Ҷ���);%-3d:�����
//        }
//        printf("\n");
//    }
//    return 0;
//}


//���
//#include<stdio.h>
//int main()
//{
//    double sum = 0;
//    int sign = 1;//����       fabs�����ֵ
//    
//    for (int i = 1;i < 100000;i += 2)
//    {
//        sum += sign* 1.0 / i;
//        sign *= -1;
//    }//iΪ��ĸ
//    printf("pi=%lf\n", sum * 4);
//    return 0;
//}


//쳲���������
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



//������Լ������С������
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
//int f(int a, int b)      //�¶���һ������ f
//{
//	int p, q, t;
//	p = a > b ? a : b;          //p����a,b�нϴ����һ�� 
//	q = a > b ? b : a;          //q����a,b�н�С����һ�� 
//	t = p;
//	while (1)
//	{
//		if (p % q == 0)
//			break;
//		p += t;
//	}
//	return p;                    //����p��ֵ 
//}
//int main()
//{
//	int x, y;
//	scanf_s("%d%d", &x, &y);
//	printf("%d", f(x, y));         //���ú���f,ֵΪ���ص�p 
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



//ʮ��.����
/*
����:���ͬ��������
����:����,������[����]
��ʼ��:�ڶ����ͬʱ��ֵ
���鳤�Ȳ������Ǳ���,�����±�����Ǳ���
��������׼��һ��һ��
���ʹ������Ԫ��
[����]:��������ڶ���ʱ��ʾ���鳤��(ǰ��������),ʹ��ʱ��ʾ�±�(ǰ��û������)
�����������:��ѭ��
���鳤�ȹ�ʽ:sizeof(arr)/sizeof(arr[0])   ע��:arr����˵�β�
ð������:��ͷ��β,�����Ƚ�,�������,С����ǰ


��������ö�ά����:
  ����:���� ������[��][��];    ����:int brr[3][4];//����һ��int��3��4�ж�ά����
  ��ʼ��:�ڶ����ͬʱ��ֵ
  ����Ԫ��:ͨ�������������


�ַ�����:�ǳ���Ҫ,�õĶ�,���Ķ�
  ����:char ������[����]
  �ַ���:��""�������ַ�����,������0�������ϵ��ַ�.�ַ���ĩβ�����ص�'\0'��Ϊ��β���
    ��������ʽ�ַ���:1.��""����
                     2.��'\0'���ַ�����
  

ʹ���ַ���������
 ------ʹ��ʱӦ����#include<string.h>��#define _CRT_SECURE_NO_WARNINGS
puts:���һ���ַ���,���Զ���\n        ���뺯��gets�ѱ��ϳ�
fgets(������,����,stdin)---���뺯��
scanf_s:��ȡ�ַ����ַ���ʱ����������С    ��:scanf_s("%s",str,100);��ʾ�ַ������������
strcpy:�ַ�������(��ֵ)   strcpy(str2,str1)----��str1��ֵ��str2��
strcat:�ַ�������         strcat(str1,str2)  ---�������str1��
strcmp:�ַ����Ƚ�         strcmp(str1,str2)  ---�������0����,��str1>str2
strlen:���ַ�������   "abc"->3(������'\0')
strlen��sizeof����:
  sizeof(a):��aռ�õ��ֽ���

isupper:�ж��ַ��Ƿ�Ϊ��д��ĸ       ��:isupper(str[i])��ʾ��Ϊ��д
tolower:�ж��ַ��Ƿ�ΪСд��ĸ       ��:tolower(str[i])��ʾ��ΪСд
����ͷ�ļ�:#include<ctype.h>



������Ϊ�����������Ĵ���   10û������
1��sizeof���������strlen��C���Ա�׼�⺯����
2�� strlen ���������ַ�����ʵ�ʳ��ȣ��ԡ�\0�� ���������ؽ����������\0�� ��
3����sizeof ���������ַ��ķ����С�����Ĳ������������顢ָ�롢���͡����󡢺����ȡ�
������ԣ��������ֱ�����ʱ��sizeof���ص�ֵ�������£�

���� - ����ʱ���������ռ��С;

ָ�� - �洢��ָ�����õĿռ��С;

���� - ��������ռ�Ŀռ�Ĵ�С;

���� - �����ʵ��ռ�ÿռ��С;

���� - ��������������ռ�ռ�Ĵ�С;

����1��
char* str1 = ��absde��;
char str2[] = ��absde��;
char str3[8] = { ��a��, };
int str4[8] = { ��a��, };
char ss[] = ��0123456789��;

�����

sizeof(str1)�� // 4���������ָ���ڴ�Ĵ�С,������\0��
sizeof(str2)�� // 6 ����������ַ������ڴ��С��������\0��
sizeof(str3)�� // 8 ���������char��������ڴ��С
sizeof(str4)�� // 32 ���������int��������ڴ��С
sizeof(ss)�� // 11 ����������ַ����Ĵ�С,������\0��
strlen(str1)�� // 5 ����������ַ������ȣ���������\0��
strlen(str2); // 5 ����������ַ������ȣ���������\0��
strlen(str3); // �� ����Ϊ�ַ�����Ҫ�ҵ���\0���ſɽ�����Ҫ�ڡ�a��֮���ҵ���\0���������Ǹ����ֵ
strlen(str4); // �� ����Ϊ�ַ�����Ҫ�ҵ���\0���ſɽ�����Ҫ�ڡ�a��֮���ҵ���\0���������Ǹ����ֵ
strlen(ss); // 10 ����������ַ������ȣ���������\0��

*/





//#include<stdio.h>
//int main()
//{
//    int a = 10;//����һ��int����a�����������10
//    int arr[10];//����һ��int�������arr,���鳤��Ϊ10,���ֵ
//    int brr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ʼ��
//    int crr[10] = { 1,2,3,4,5 };//{1,2,3,4,5,0,0,0,0,0}
//    int drr[] = { 1,2,3,4,5 };//�Զ��Ƶ�����,�ܸպ÷�������Ԫ��   //drr[5]
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int arr[a];//vs2022�����鳤��Ϊ�����Ǵ����,C99������Ǳ���
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };      //����
//              //�±�0,1,2,3,4,5,6,7,8,9
//    arr[2] = 10;//���±�Ϊ2�ĸ�ֵΪ10
//    //int a = 4;
//    //arr[a] = 100;                                 //ʹ��
//    //printf("%d\n", arr);//����ȷ,�����arr�ĵ�ַ
//    //printf("%d\n", arr[10]);//����ȷ,Խ��
//    ////printf����ֱ��һ�������������
//    for (int i = 0;i < 10;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//
//}


//�������10������Ԫ��
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



//ʵ��쳲���������
//#include<stdio.h>
//int main()
//{
//    int arr[40] = { 1,1 };//����쳲���������ǰ40���ֵ
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



//ʮ�������������С��������
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 3,7,9,0,1,23,45,6,12,25,68,79,80,55 };
//    int length = sizeof(arr) / sizeof(arr[0]);//���鳤��
//    for (int i = 0;i < length - 1;++i)//ѭ������
//    {
//        for (int j = 0;j + 1 < length - i;++j)//ÿһ�����ͷ��β(������һ�����������)����
//        {                                     //ð������-----�������ĳ������
//            if (arr[j] > arr[j + 1])//����
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
//    int brr[3][4];//����һ��int��3��4�еĶ�ά����brr
//    int crr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//    int drr[3][4] = { 1,2,3,4,5,6,7,8,9 };//������,ʣ��Ϊ0
//    int err[][4] = { 1,2,3,4,5,6,7,8,9,10 };//�Զ��Ƶ�
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



//��������:���л���
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



//��ά���������ֵ
//#include<stdio.h>
//int main()
//{
//    int a[3][4] = { 3,6,8,9,5,12,7,34,6,0,13,25 };
//    int max = a[0][0];//���ֵ
//    int row = 0;//���ֵ�к�
//    int col = 0;//���ֵ�к�
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
//    printf("��%d��,��%d��", row, col);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    char str1[10];//���峤��Ϊ10���ַ�����
//    /*printf("%s\n", str1);*/   //����ַ���
//    str1[0] = '1';
//    str1[1] = ' ';
//    str1[2] = 'a';
//    char str2[10] = { '1',' ','a','m' };//��ʼ��һ����,ʣ��Ϊ0
//    char str3[10] = "abcde";
//    printf("%s\n", str3);//str3���ַ���,str1�����ַ���,str2���ַ���
//    printf("%s\n", str1);
//    printf("%s\n", str2);
//    printf("%d,%d,%d,%d\n", false, 0, '\0', NULL);//0,0,0,0
//    return 0;
//}
//%m.nf��ʾ��ͬС�������ڹ�mλ������С������ռnλ��������С���㣩
//%.nf��ʾ����nλС��
//%5d��ʡ���������һ���Ҷ����������������λ���ÿո���棬����ǰ�棩
//% -5d(���һ��������������������λ���ÿո񲹣����ں��棩
//% c�������ַ������
//% s�����ַ��������


//#include<stdio.h>
//int  main()
//{
//    char str1[10];                         //�ַ�����,�����ַ���
//    char str2[10] = "abcde";               //�ַ�����,���ַ���
//    char str3[] = "abcde";                 //�ַ�����,���ַ���,����Ϊ6
//    char str4[] = { 'a','b','c','d','e' }; //�ַ�����,�����ַ���,����Ϊ5
//    char str5[10]= { 'a','b','c','d','e' };//�ַ�����,���ַ���
//    const char* str6 = "abcde";//�ַ�������,�����ַ�����
//    printf("%s\n", str1);
//    printf("%s\n", str2);
//    printf("%s\n", str3);
//    printf("%s\n", str4);
//    printf("%s\n", str5);
//    return 0;
//}


//----�����ַ������ַ���������
//#include<stdio.h>
//int main()
//{
//    char str[] = { 'a','b','c','d','e' };//���ַ�����,�����ַ���
//    //printf("%s\n", str);//����,%s����ַ���,str�����ַ���------Ӧ��������������
//    for (int i = 0;i < sizeof(str) / sizeof(str[0]);++i)
//    {
//        putchar(str[i]);//�����ֽ����
//    }
//    return  0;
//}
//----���ַ������ַ���������
//#include<stdio.h>
//int main()
//{
//    char c[15] = { 'I',' ','a','m',' ','a',' ','b','o','y','.' };
//    printf("%c\n", c);
//    return 0;
//}


//�������   
// 1.�ַ�����     
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
//2.�ַ���
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


//�ַ�������������
//�����ַ���
//#include<stdio.h>
//int main()
//{
//    char c[6];
//    for (int i = 0;i < 6;i++)//�Ӽ��̶�ȡ6���ַ�
//    {
//        scanf_s("%c", &c[i]);//getchar
//    }
//    for (int i = 0;i < 6;i++)
//    {
//        printf("%c");//putchar
//    }
//    return 0;
//}
//�ַ���
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
//    fgets(str2, 10, stdin);//stdin:��׼����,������
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
//    //char str2[10] = str1;-----�����
//    strcpy(str2, str1);//��str1���ݸ�ֵ��str2
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
//    strcat(str1, str2);         //str1��str2���붼���ַ����ſ�������
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
//    char str2[20] = "xyz";        //������ֱ����<����>����
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
//����:���ֵ�˳��---��ĸ˳��Ƚ�,��ͷ��β���αȽ�ÿһ����ĸ
//cpy---����
//cat---����
//cmp---�Ƚ�
//len---�󳤶�



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
//    //printf("%d\n", sizeof(1));//4---�ֽ���ռ��Ϊ4
//    //printf("%d\n", strlen(1));//����,��Ϊ������ֻ�����ַ���
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
//void Mystrlwr(char str[])//�Լ�ʵ�ְ��ַ��������д�дתΪСд
//{
//    for (int i = 0;str[i]!='\0';i++)//�����ַ���
//    {
//        //if(str[i]>='A'&&str[i]<='Z')----��רҵ
//        if (isupper(str[i]))//�Ǵ�д��ĸ
//        {
//            str[i] = tolower(str[i]);//��дתСд
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



////����һ���ַ�,ͳ�����е�����,����֮���÷ָ�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//int main()
//{
//    char str[100];
//    fgets(str, 100, stdin); //-----�ܶ�ȡ�ո�
//    //scanf_s("%s", str, 100);//-----���ܶ�ȡ�ո�
//    //printf("%s\n", str);
//    int n = 0;//ͳ�Ƶ��ʸ���
//    for (int i = 0;str[i] != '\0';i++)
//    {                                           //����isalpha�����ж��Ƿ�Ϊ��ĸ
//        if (isalpha(str[i])&&!isalpha(str[i+1]))//�жϵ��ʵı�׼:��ǰ����ĸ,��һ��������ĸ
//            n++;
//    }
//    printf("%d\n", n);
//    return 0;
//}



//�ҳ�3���ַ���������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//int main()
//{
//    char str[3][20];//�ٶ�ÿ���ַ������Ȳ�����19(20-1'\0')----�ö�ά���鶨�������ַ���
//    char max[20]="";   //���������ַ���
//    int i;
//    for (i = 0;i < 3;i++)
//    {
//        fgets(str[i], 20, stdin);//�������������ַ���
//    }     //���������뻻�зָ�
//    for (i = 0;i < 3;i++)//���αȽϴ�С
//    {
//        if (strcmp(max, str[i])<0);//�Ƚ�
//        {
//            strcpy(max, str[i]);//����
//        }
//    }
//    printf("%s\n", max);
//    return 0;
//}



//ѡ�񷨶�10��������
//#include<stdio.h>
//int main()
//{
//    int a[10], i, j, tmp;
//    printf("����10������");
//    for (i = 1; i <= 10; i++)
//        scanf_s("%d", &a[i]);
//    for (i = 1; i <= 10; i++)
//        for (j = i; j <= 10; j++)
//        {
//            if (a[i] > a[j])//��λ��
//            {
//                tmp = a[i];
//                a[i] = a[j];
//                a[j] = tmp;
//            }
//        }
//    printf("��ʮ��������Ϊ�� ");
//    for (i = 1; i <= 10; i++)
//        printf("%2d", a[i]);
//}
//��ð�������������
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//    //char arr[10];
//    //printf("����ʮ����: ");
//    //fgets(arr, 10, stdin);//����,��Ϊchar���ֽڲ�������,���ܱȽϴ�С
//   int arr[10], i;
//    printf("����10������");//��������
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
//    printf("��ʮ��������Ϊ: ");
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



//����������
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
//    for (i = 0;i < 10;i++)//��ʼ��ӡ 
//    {
//        for (int k = 0;k < 10 - i;k++)//ѭ���𼶵ݼ���ո� 
//            printf("  ");
//        for (j = 0;j <= i;j++)
//            printf("%5d", arr[i][j]);//%5dʹÿ������ռ��5�ж������գ����� 
//        printf("\n");//ÿ�д�ӡ�������� 
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
//        a[i][i] = 1;//�����������ÿ�е���β���־�Ϊ1 
//        a[i][0] = 1;
//    }
//    for (i = 2;i < 10;i++)
//        for (j = 1;j <= i - 1;j++)//�����Ѿ������˵�0�͵�1���Ѿ�ÿ�е���β���ʴӵ�2�У�ÿ�еĵ�1�п�ʼѭ�����˴�˵���������е����ж��ǿ�ͷ�ϵĵڼ��� 
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//ÿ�����������������֮�ͣ������ɳ���Ϊ�����еĹ�ϵʽ�� 
//    for (i = 0;i < 10;i++)//��ʼ��ӡ 
//    {
//        for (k = 0;k < 10 - i;k++)//ѭ���𼶵ݼ���ո� 
//            printf("  ");
//        for (j = 0;j <= i;j++)
//            printf("%5d", a[i][j]);//%5dʹÿ������ռ��5�ж������գ����� 
//        printf("\n");//ÿ�д�ӡ�������� 
//    }
//    printf("\n��ӡ��ϣ�\n");
//    return 0;
//}



//ʮ��.����ģ�黯���
/*
�⺯��:��Ĺ�˾(΢��)�Ѿ�ʵ�ֺõ�,����ֱ��ʹ��
�Զ��庯��:�Լ�����ͬ��Ŀ�����Աʵ�ֵ�
����:1.���ܸ�����
     2.��ȡ�����ʹ����


����ֵ  ������(�����б�)
{
������
}


������:ÿ��������Ҫ��һ����һ�޶�������(��ʶ��)
void:û��,�������η���ֵ���߲����б�(����ʡ��)       int main()=int main(void)--��ʽ
���û�з���ֵ�����дvoid

�����������֮�󲻿����Զ�ִ��,��Ҫ����
���ú���:
����ֵ:������������ͨ������ֵ������������


��������û������,����������������,�����ڲ����ܶ�����һ������


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
//    Max();        //����������ִ��
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
//void Max2(int a,int b)//a,b��Ϊ��ʽ����,�β�,����������,������ͨ��scanf_s��ȡ
//{
//    int c = a > b ? a : b;//c�����ṩ,���ṩa,b����
//    printf("%d\n", c);   //�����ѽ����ӡ������,������ݲ���Ŀ��,Ӧ�ý��������,���÷���ֵ
//}
////����ֵʹ��
//int Max(int a, int b)
//{
//    int c = a >= b ? a : b;
//    return c;             //����ֵ
//}
////void Max3(int a, int b, int c)
//int Max3(int a,int b,int c)
//{
//    int d = Max(a, b);//int d=void(û��)   void���Ͳ������ڳ�ʼ��int���͵�ʵ��
//    int e = Max(c, d);
//    return e;        //����Ҫ�������ͱ���e,����void��Ҫ��Ϊint
//}
//int main()
//{
//    Max0();        //����������ִ��
//    Max2(10, 20);   //ʵ�ʵĲ���----ʵ��
//    int a = 100;
//    int b = 200;
//    Max2(a, b);
//    int x = Max(10, 20);
//    int y = Max(a, b);
//    printf("%d %d", x, y);
//    return 0;
//}
//�����Ǵ�ӡ---����return(����)    �����Ǽ���ʹ�����ֵ,��ô��Ҫ�з���ֵ(����)



//�Ӻ����
//#include<stdio.h>
//#include<math.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//float Add(float a, float b)//��������Ϊfloat������float����������
//{
//    return a + b;
//}
//int main()
//{
//    float a = Add(12.5f, 23.5f);//12.5f��ʾ��float���С��
//    printf("%f\n", a);
//    return 0;
//}
//float ������%f
//double ������%lf
//�������%f����



//������Ƕ��ʹ��----ͳ��һ��������1�ĸ���
//#include<stdio.h>
//#include<math.h>
//#include<ctype.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//int Count(int n)//n:��Ҫͳ�Ƶ�����    ����ֵ:n
//{
//    int sum = 0;//ͳ��1�ĸ���
//    while (n != 0)//��ѭ�����ƹ�ϵ����ȷʱ,������ʼ������ȷʱ��while     �����Ƕ����ֱ�����в���
//                  //for�ǵ���������ʮ������ʱʹ��                        �����ֱ���Ӧ�Ĺ�ϵ����
//    {             
//        if (n % 10 == 1)//�õ���λ��
//            sum++;
//        n /= 10;//������λ��
//    }
//    return sum;
//}
//int main()
//{
//    printf("%d\n", Count(123));
//    return 0;
//}
/*
����     �ø�λ      ����λ      ͳ��
121231     1         12123        1
12123      3         1212         1
1212       2         121          1
121        1         12           2
12         2         1            2
1          1         0            3
0
*/



//�����ݹ����    ֱ�ӻ��ӵ��ú�������---�ݹ����
//#include<stdio.h>
//int Age(int n)
//{
//    int age = 10;
//    for (int i = 1;i < n;i++)     //��ѭ����ʵ��
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
//int Age(int n)//���n���˵�����
//{
//    if (n == 1)
//        return 10;
//    else
//        return Age(n - 1) + 2;//�õݹ�����ʾ
//}
//int main()
//{
//    printf("%d\n", Age(5));
//    return 0;
//}
//�ݹ���������:1.�߽�����
//             2.ǰ����
//             3.���ض�



//ջ:(��������)
//ΪAge(5)�����ڴ�ռ�    ջ֡:��������,�ú�����ջ֡(���䵽�ڴ�)ϵͳ���ܻ���
//��������



//�׳˵ĵݹ�ʵ��
//#include<stdio.h>
//long long Fac(int n) //Fac(n):��n�Ľ׳�
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



//��ŵ��
//һ������һ��״̬:����n-1��������B��,������A��û��,Ȼ��C�ǿյ�
//#include<stdio.h>
//void Hanoi(int n, char a, char b, char c)
//{
//    if (n == 1)//ֻ��һ������,ֱ�Ӵ�A�Ƶ�C
//        printf("%c->%c\n", a, c);
//    else
//    {
//        Hanoi(n - 1, a, c, b);//������n-1������,��aͨ��c�Ƶ�b
//        printf("%c->%c\n", a, c);//���������һ����a�Ƶ�c
//        Hanoi(n - 1, b, a, c);//�������n-1������,��bͨ��a�Ƶ�c
//    }
//}
//int main()
//{
//   
//    Hanoi(3, 'A', 'B', 'C');
//    return 0;
//}



//������Ϊ�����Ĵ���Ӧ��
// ����:һ��Ҫ�������������鳤��
//��һ�����������ֵ
//#include<stdio.h>
//int Max(int arr[],int len)//arr:������    len:���鳤��
//{
//    //��Max�����ڲ�������ʹ��sizeof(arr)/sizeof(0)
//    //arr�������β�,arr������ָ�벻������
//    int tmp = arr[0];//�������ֵ
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
//    printf("�������ֵΪ%d\n", a);//10----������Ϊ��������ʱֻ������ʼ��ַ
//    return 0;
//}



//һά����������������
/*arr:������
n:���鳤��*/
//#include<stdio.h>
//double Avg(double arr[], int n)//�����������鳤�ȶ�Ҫ��
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



//��ѡ�񷨶�ʮ��������
//ÿ�δӴ��������ҵ���Сֵ֮��͵�һ������
//#include<stdio.h>
//void SelectSort(int arr[], int len)
//{
//    int k;//��Сֵ�±�
//    int tmp;
//    for (int i = 0;i < len - 1;i++)//��������
//    {
//        k = i;
//        for (int j = i;j < len;j++)//����Сֵ
//        {
//            if (arr[j] < arr[k])//�ҵ���Сֵ,Ҫ��������
//                k = j;
//        }
//        tmp = arr[i];
//        arr[i] = arr[k];
//        arr[k] = tmp;
//    }
//}
//
//void Show(int arr[], int n)//�������Ϊn������arra������Ԫ��
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



//��ά������������
//#include<stdio.h>
//void Show(int arr[][4], int row, int col)//�������
//{//�к��ж�Ӧ����
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



//��3*4��ά�������ֵ
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
//void Show(int arr[][4], int row, int col)//�������
//{//�к��ж�Ӧ����
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



//ȫ�ֱ����;ֲ�����
//ȫ�ֱ���:�����ں����ⲿ�ı���,��������,ѧϰʱ������(����ȫ)
//�ֲ�����:�����ں����ڲ��ı���,�����β�
//              ������  ��������  Ĭ��ֵ
//ȫ�ֱ���:��ĳ�����忪ʼ,�������ļ�����,����ʹ��,�������д���,����ʱ����,�˷ѿռ�,Ĭ��ֵ:0
//�ֲ�����:ֻ�ڱ������ڲ�ʹ��(�ŵ�----��ֹ������Ⱦ)Ĭ��ֵ:��Ч
// static:��̬,���α������ߺ���
// ��̬�ֲ�����:�ں����ڲ�ʹ��,�ӵ�һ�ν��뺯������,�������������,Ĭ��ֵΪ0
// ��ͨ�ֲ�����:�ں����ڲ�ʹ��,���뺯������,��������������,
// �洢���:auto�Զ���,statis��̬��,register�Ĵ�����,extern�ⲿ��
//register:�����������������������Ż�,�������ʹ��,����������ڴ���ص��Ĵ���




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
//    static int a = 0;//��������������,��һ�����ֻ�е�һ�ν��뺯���ŵ���,����ʱ�䲻ִ��
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
//    for (register int i = 0;i < 10;i++)//���ڲ�������
//    {
//        printf("%d\n", i);
//    }
//    return 0;
//}


//ָ��
/*
ָ��:���ǵ�ַ
&������:��ȡ�ñ����ĵ�ַ(ָ��),&��Ϊȡ��ַ��
4&3:��λ��
ָ�����:����ָ��(��ַ)�ı���
  ����*������:����һ�����͵�ָ�����
  ��ָ���������ʱ���ֵ�*����˵���ñ�����ָ�����
ʹ��ָ�����:  *pͨ��p����p��ָ�������
*p:������/��ӷ��ʷ�

int a=10;//printf("%d\n",a);printf(&a);int*p
&������:1.��λ�� 4&3   2.ȡ��ַ ����&a   3.C++������
          ��λ��:   4;100   &��ͬ��λ��Ϊ1��Ϊ1
                    3:011
                 -> 0:000


ָ���Ӧ��:
�ܽ�:һ������A��ͨ�����ú���B���ﵽ�޸�A�б�����ֵ,1.���봫ָ��2.���������


*/
//#define _CRT_SECURE_NO_WARNING_
//#include<stdio.h>
//#include<ctype.h>
//#include<math.h>
//#include<string.h>


//int main()
//{
//    int a = 10;//4�ֽ�
//    a = 20;
//    int b = 20;
//    b = a;
//    &a;//��ȡa�ĵ�ַ
//    &b;//��ȡb�ĵ�ַ
//    printf("%p,%p\n", &a, &b);//%p:�����ַ(ָ��),��ʮ���������
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b = 20;
//    int*p=&a;    //һ��int��ַ(ָ��)��ֵ��һ��intָ�����
//    ��ȡa�ĵ�ַ     int*p=&a     
//    *:��������p��һ��ָ�����͵ı���   û������ʱ����*
//    p = &b;//��b�ĵ�ַ��ֵ��p
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
//    *p = 100;//a=100;   ��Ӹı�a��ֵ
//    p = &b;//����b�ĵ�ַ
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
//    printf("%d,%d\n", a, &a);//a��ֵ,a�ĵ�ַ,
//    int* p = &a;
//    printf("%d,%d,%d\n", *p, p, &p);//pָ��a������ֵ,a�ĵ�ַ,p�ĵ�ַ(��a�ĵ�ַ��ͬ)
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("%d\n", a & b);//��λ��
//}


//ԭд��
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
//�ö��庯��
//void Swap_err1(int a,int b)//����ʧ��---������ͬ�ĺ����ĵ�ַ��ͬ
//{
//    int tmp=a;
//    a = b;
//    b = tmp;
//}
//
//void Swap_err2(int* p1, int* p2)//����ʧ��---û��ʹ��*  δ������
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
//    tmp = *p1;       //������
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



//��η�������ֵ
//C����ֻ�ܷ���0��1��ֵ
//��һԪ���η���
//�ٶ�d=b^2-4ac>0
//void Fun(int a, int b,int c)//ֻ�ܷ���0��1��ֵ
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
//    *x2 = (-b - sqrt(d)) / (2 * a);//*x1,*x2Ϊ�������---��ָ��,�ڲ�������
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



//ָ��
/*
int a=1;
int *p=&a;    *p:����ָ������  ->  &a:a�ĵ�ַ




*/

//1.ָ���С
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
//-----��64λ����ϵͳ��,ָ��ռ8���ֽ�


//2.���*
/*(1)�����ʱ��, (ǰ��������)��ʾ����ı�����ָ��
(2)ʹ��ʱ:��ʾȡֵ(ȥָ��ָ����ڴ�ռ��ֵ)
int a = 1;
int* p = &a;
*p = 100;
*p���Ǳ���a//a=100
*/


//3.int*��char*
/*
(1)char ch = 'a';
char* q = &ch;//��Ӧд��int*q,��Ϊ��Ϊ�ַ��͵�ַ
(2)���߲�����ͬ
*/
//#include<stdio.h>
//int main()
//{
//    int num = 1;
//    int* p = &num;
//    *p = 100;//�ȼ����޸�num��ֵ   ��ӷ���num����
//
//    char ch = 'a';
//    //int* q = ch;   //���Ͳ�����
//    char* q = &ch;
//    *q = 'x';
//    printf("%c\n", ch);//x
//    printf("%p\n", p);//��ַ
//    printf("%p\n", q);//��ַ
//    printf("%p\n", p+1);//��ַ+4           pָ������num,ռ��4���ֽ�
//    printf("%p\n", q+1);//��ַ+1           qָ���ַ�ch,ֻռ��1���ֽ�
//    return 0;
//}
/*
%��ӵ���ĸ                   ����ĺ���

          %d                ��ӡ����ʮ��������

          %c                 ��ӡ�ַ���ʽ����

          %f                 ��ӡfloat��������

          %p                   ��ӡ��ַ����

          %x                  ��ӡʮ����������

          %s                     ��ӡ�ַ���

           %lf                 ��ӡdouble����

           %e              ��ָ����ʽ�������

           %g         ���ݴ�С�Զ�ѡf��ʽ��e��ʽ���Ҳ�������������

           %o                   ����˽�������

           %u                 ����޷���ʮ���� ����

           %ld                    ���������

*/



//4.ָ��Ӧ��
//���ʹ���---��������
//#include<stdio.h>
//
//void Swap_1(int x, int y)//�����ܽ���----
//{
//    int tmp=x;
//    x = tmp;
//    tmp = y;      //�ͷſռ�֮��ֻ�����β�δ����ʵ��
//    //��Ҫ����ʵ��ֵ,ֻ�ܴ���ַ
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
//�β�:���庯��ʱ�Ĳ�����֮Ϊ�β�   formal
//ʵ��:���ú���ʱ�Ĳ�����֮Ϊʵ��   actual
//֮ǰ���庯���Ĵ��������������Ϊ���������ڲ����������,�Ǵ���һ��ֵ��һЩҪ����Ķ���
// �������������������Ϊ���Ǵ�����ֵ,�Խ�����ԭ�е�ֵ�����



//5.ָ������
/*
��ֵ����:
int a,*pa=&a,*pb;        
pb=pa;                     //���Է�Ϊ�ľ�:int a;int *pa=&a;int*pb;int*pb=pa;
//pa���洢����ǵ�ַ,����*ֱ�Ӹ�ֵ���ǰѵ�ַ��ֵ��ȥ��,�൱��a������ָ��





*/

//����:
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
//void mystrcpy(char* dest, const char* src)//const����*src
//{
//    /*
//    while ((*dest++=*src++)!='\0')
//    {
//        *dest++ = *src++;
//    }
//    */   //���hello5666789
//    while ((*dest++ = *src++) != '\0');//���hello    һֱ����ֱ������\0
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
//    const int* p1 = &num;//const����*p1,��num   const����:�ͽ�ԭ��
//    //const����:�����α��������ٸı�ֵ
//    //(*p1)++;----��ַ�������޸�
//    p1++;//��ַ��������޸�
//    int* const p2 = &num;//const����p2
//    (*p2)++;
//    const int* const p3;//�������޸�
//}



//6.Ұָ��Ϳ�ָ��
/*
��κϷ���ʹ��ָ��:
1.ϵͳ������ڴ�
    int a;
    int*p1=&a;
2.�û������ڴ�:(���ڴ�)         ͷ�ļ�:#include<stdlib.h>
    char*str=(char*)malloc(32);      //����32���ֽڵ��ڴ�
    free(str);      //�ͷ��ڴ�,������ͷ�,�ڴ�й©
    str=NULL;
*/


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    /*
//    int* p;
//    *p = 100;
//    */          //�δ���:�����˲��ܷ��ʵ��ڴ�   ��Ҫ�ȳ�ʼ��
//    /*
//    int* p = NULL;       //NULL:��
//    *p = 100;   //��Ȼ�Ƕδ���:
//    */
//    int* p = NULL;
//    int a;
//    int* p1 = &a;
//    char* str = (char*)malloc(32);
//    free(str);
//    str = NULL;//��ֹ�ٱ��Ұָ��
//    return 0;
//}



//7.ָ��ָ������Ԫ��
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//    int* p = &arr[0];//��һ��Ԫ��int�ĵ�ַ   
//    //int*p=arr;        
//    //һά��������ֱ�ʾ��������ֻ���������:
//    //1.���������ͬһ����������sizeof  ����:int arr[10];sizeof(arr)->40
//    //2.�ڶ�������ͬһ������ʱ,&arr+1,��ʾ������������Ĵ�С,����:int arr[10],&arr,&arr+1
//    //����������Ǳ�ʾ������Ԫ�صĵ�ַ
//    printf("%d,%d\n", arr[0], *p);
//    printf("%d\n", sizeof(arr));
//    printf("%d,%d\n", &arr, &arr + 1);//��ʾ��������Ĵ�С(�ֽ���)   ��ַ����40---��ʾ����������Ĵ�С
//    return 0;
//
//}



//8.ָ��ӷ�����
//#include<stdio.h>
//int main()
//{
//    int arr[10];
//    int* p = arr;
//    printf("%d\n", *p);
//    //ָ�����������������Ԫ��
//    //for (int i = 0;i < 10;i++, p++)//ָ��++��ʹ֮��ʾ��һ��Ԫ��  p++�ǵ�ַ�仯,*p++�Ǹ���ֵ�ı仯
//    //{
//    //    printf("%d ", *p);
//    //}
//    for (int i = 0;i < 10;i++)
//    {
//        printf("%d", *(p + i));
//    }
//    return 0;
//}
//ָ����������:ǰ���ǳ��򱣳ֲ�Խ��
//�������:
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



//9.�������Ԫ�صĶ��ַ���
//����д��
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

//����ָ��ķ���
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



//ָ��Ĺ�ϵ����ǰ����Ҫ��һ��������
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (int* p = arr;p != &arr[10];p++)//����ʹ��β���ַ(β�ͺ����ָ��)
//    {
//        printf("%d", *p);
//    }
//    return 0;
//}



//10.�����Ĵ���
//#include<stdio.h>
//int main()
//{
//    int* p, i, a[10];
//    p = a;
//    for (i = 0;i < 10;i++)
//    {
//        scanf_s("%d", p++);
//    }//p�Ѿ�����a��β����----ָ��Խ����
//    p = a;
//    for (i = 0;i < 10;i++, p++)
//    {
//        printf("%d", *p);
//    }
//    printf("\n");
//    return 0;
//}



//11.��������в�������----��������+���鳤��
//#include<stdio.h>
//void Show(int*p,int n)//p��ʼ��ַ   n����
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



//12.�����鷴��
//#include<stdio.h>
//void inv(int* x, int n)
//{
//    int tmp;
//    //for (int i = 0, j = n - 1;i < j;i++, j--)//��x����������������
//    //{
//    //    tmp = x[i];
//    //    x[i] = x[j];
//    //    x[j] = tmp;
//    //}
//    for (int i = 0, j = n - 1;i < j;i++, j--)//��x����ָ��������
//    {
//        tmp = *(x + i);
//        *(x + i) = *(x + j);
//        *(x + j) = *(x + i);
//    }
//}
//
//void Show(int* p, int n)//p��ʼ��ַ   n����
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


//13.����������---ѡ������
//ѡ������:
//ÿ�δӴ�����������Сֵ�ʹ�����ĵ�һ��ֵ����,ֱ��ȫ������
#include<stdio.h>
void Selectsort1(int* arr, int n)//���±�����ʾ
{
    int k;//��Сֵ�±�
    for (int i = 0;i < n - 1;i++)
    {
        k = i;
        for (int j = i + 1;j < n;j++)
        {
            if (arr[j] < arr[k])//��Ҫ��������
            {
                k = j;
            }
        }
        if (k != i)//�ѵ�һ��ֵ����Сֵ����
        {
            int tmp;
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
        }
    }
}

void Selectsort(int* arr, int n)//��ָ������ʾ
{
    int k;//��Сֵ�±�
    for (int i = 0;i < n - 1;i++)
    {
        k = i;
        for (int j = i + 1;j < n;j++)
        {
            if (*(arr+j)<*(arr+k))//��Ҫ��������
            {
                k = j;
            }
        }
        if (k != i)//�ѵ�һ��ֵ����Сֵ����
        {
            int tmp;
            tmp = *(arr + i);
            *(arr + i) = *(arr + k);
            *(arr + k) = tmp;
        }
    }
}

void Show(int* p, int n)//p��ʼ��ַ   n����
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












































