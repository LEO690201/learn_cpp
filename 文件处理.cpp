/*文件指针
C语言中用一个指针变量指向一个文件,这个指针称为文件指针

FILE*pfile;
set:文件头
current:当前位置
end:文件尾

*/

/*文件的打开
FILE*fp=fopen(文件名,操作方式);
*/

/*文件的关闭
fclose(文件指针)
*/

/*文件操作方式
r:  只读(为输入打开一个文本文件)    文件必须存在
w:  只写(为输出打开一个文本文件)    存在则清除,不存在则创建
a:  追加(想文本文件尾增加数据)      文件必须存在
rb: 只读(为输入打开一个二进制文件)  文件必须存在
wb: 只写(为输出打开一个二进制文件)
ab: 追加(向二进制文件尾增加数据)

打开文件fopen("路径","r");
关闭文件fclose(fp);

读写字符:char ch=fgetc(fp);
        fputc("内容",fp);
读写字符串:char ch=fgets(str,sizeof(str),fp);
        fputs("内容",fp);
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fileread()//读取文件
{
    FILE*fp=fopen("./touch.txt","r");//以指定模式打开文件,以r(只读的方式打开,文件必须存在)
    if(fp==NULL)
    {
        perror("open file failed: ");
        return;
    }

    //读取一个字符
    char ch=fgetc(fp);
    printf("ch: %c",ch);
/*读取文件
    while(1)
    {
        char ch=fgetc(fp);
        if(ch==EOF)
        {
            break;//判断文件是否读取完毕
        }
        printf("%c",ch);
    }
*/

/*使用函数判断结尾
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

    fclose(fp);//关闭文件
}


void filewrite()//写文件
{
    FILE*fp=fopen("./files/hgl.txt","w");
    if(fp==NULL)
    {
        perror("file open failed: ");
        return ;
    }

    //写文件
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

void filereadwrite()//读写字符
{
    FILE*fp=fopen("./files/mile.txt","w+");
    //w以只写的方式打开,文件不存在则创建,否则直接打开
    //w+可读可写,如果文件存在则清空文件,不存在的则创建文件

    if(fp==NULL)
    {
        perror("file open failed: ");
        return ;
    }

    //先写文件
    int fpret=fputs("12345678",fp);
    printf("fputs return: %d",fpret);

    //读取文件
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







