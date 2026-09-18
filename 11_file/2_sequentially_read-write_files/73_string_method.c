#include <stdio.h>
/*
字符串读写函数：fgets()和fputs()

fgets()：从指定文件中读取一个字符串（一行文本）到字符数组中
格式：fgets(用来接收的字符串指针,字符串长度,文件指针);
当达到文件末尾时，fgets()返回NULL（而不是EOF）
若读取时发生了错误，fgets()也返回NULL

关键特性
1.读到换行符\n就停止，\n会被一并存入数组
2.最多读字符串长度-1字节，最后一位预留\0
3.自动追加字符串结束符\0
4.按字节读取，可以读中文

fputs()：向指定的文件写入一个字符串
格式：fputs(要输入的字符串,文件指针);

关键特性
不会自动追加换行符\n，fputs只把\0之前的内容写进去，不自带换行
*/

int main(){
    FILE* f;
    char str[100];
    //打开文件
    f=fopen("73.txt","w");
    //写入数据
    fputs("测试",f);
    //关闭文件
    fclose(f);
    //读取文件
    f=fopen("73.txt","r");
    //读取数据
    while (fgets(str,100,f)!=NULL)
    {
        printf("%s",str);
    }
    //关闭文件
    fclose(f);
    return 0;
}
