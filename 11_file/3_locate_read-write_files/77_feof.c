#include <stdio.h>
/*
feof()文件检测函数：接收文件指针为参数，用于标识流，当与流相关的文件结束指示器被设置时，该函数返回一个非零值，否则返回0
（简而言之，feof()函数检测有没有读到文件末尾）
格式：feof(文件指针)
*/

int main(){
    FILE* f;
    char ch;
    char* str;
    //以字符方式读取文件
    f=fopen("77.txt","r");
    //读取数据
    while (1)
    {
        ch=fgetc(f);
        if (feof(f))
        {
            break;
        }
        printf("%c",ch);//printf()必须放在这个位置
    }
    printf("\n");
    //关闭文件
    fclose(f);

    //以字符串方式读取文件
    f=fopen("77.txt","r");
    //读取数据
    while (fgets(str,10,f)!=NULL)
    {
        printf("%s",str);
        //break;
    }
    printf("\n");
    if (feof(f))
    {
        printf("已达到文件结尾");
    }else{
        printf("提前结束");
        //若上方的break去掉注释，则该代码块运行
    }
    
    //关闭文件
    fclose(f);
    return 0;
}