/*�ļ�ָ��
C��������һ��ָ�����ָ��һ���ļ�,���ָ���Ϊ�ļ�ָ��

FILE*pfile;
set:�ļ�ͷ
current:��ǰλ��
end:�ļ�β

*/

/*�ļ��Ĵ�
FILE*fp=fopen(�ļ���,������ʽ);
*/

/*�ļ��Ĺر�
fclose(�ļ�ָ��)
*/

/*�ļ�������ʽ
r:  ֻ��(Ϊ�����һ���ı��ļ�)    �ļ��������
w:  ֻд(Ϊ�����һ���ı��ļ�)    ���������,�������򴴽�
a:  ׷��(���ı��ļ�β��������)      �ļ��������
rb: ֻ��(Ϊ�����һ���������ļ�)  �ļ��������
wb: ֻд(Ϊ�����һ���������ļ�)
ab: ׷��(��������ļ�β��������)

���ļ�fopen("·��","r");
�ر��ļ�fclose(fp);

��д�ַ�:char ch=fgetc(fp);
        fputc("����",fp);
��д�ַ���:char ch=fgets(str,sizeof(str),fp);
        fputs("����",fp);
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fileread()//��ȡ�ļ�
{
    FILE*fp=fopen("./touch.txt","r");//��ָ��ģʽ���ļ�,��r(ֻ���ķ�ʽ��,�ļ��������)
    if(fp==NULL)
    {
        perror("open file failed: ");
        return;
    }

    //��ȡһ���ַ�
    char ch=fgetc(fp);
    printf("ch: %c",ch);
/*��ȡ�ļ�
    while(1)
    {
        char ch=fgetc(fp);
        if(ch==EOF)
        {
            break;//�ж��ļ��Ƿ��ȡ���
        }
        printf("%c",ch);
    }
*/

/*ʹ�ú����жϽ�β
    while(1)
    {
        char ch=fgetc(fp);
        if(feof(fp))
        {
            break;
        }
        printf("%c",ch);
    }
*/

    fclose(fp);//�ر��ļ�
}


void filewrite()//д�ļ�
{
    FILE*fp=fopen("./files/hgl.txt","w");
    if(fp==NULL)
    {
        perror("file open failed: ");
        return ;
    }

    //д�ļ�
    // char ch=fputc('y',fp);
    // printf("%c",ch);

    char str[]="12345678";
    for(int i=0;i<strlen(str);i++)
    {
        char ch=fputc(str[i],fp);
        printf("%c",ch);
    }

    fclose(fp);
}

void filereadwrite()//��д�ַ�
{
    FILE*fp=fopen("./files/mile.txt","w+");
    //w��ֻд�ķ�ʽ��,�ļ��������򴴽�,����ֱ�Ӵ�
    //w+�ɶ���д,����ļ�����������ļ�,�����ڵ��򴴽��ļ�

    if(fp==NULL)
    {
        perror("file open failed: ");
        return ;
    }

    //��д�ļ�
    int fpret=fputs("12345678",fp);
    printf("fputs return: %d",fpret);

    //��ȡ�ļ�
    char buf[128]={0};
    char*restr=fgets(buf,sizeof(buf),fp);
    printf("restr:%s, buf:%s\n",restr,buf);

    fclose(fp);

}

// int main()
// {
//     filereadwrite();
//     return 0;
// }

int main()
{
    FILE*fp;
    int n,i;
    int *data;
    int media;
    fp=fopen("mediandata.txt","r");
    fscanf(fp,"%d",&n);                         //
    data=(int *)malloc(n*sizeof(int));          //
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&data[i]);               //
    }
    fclose(fp);
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(data[j]>data[j+1])
            {
                int tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
    }
    if(n%2!=0)
    {
        media=data[n/2];
    }
    else
    {
        media=(data[n/2-1]+data[n/2])/2;
    }
    printf("%d\n",media);
    free(data);
    return 0;
}







