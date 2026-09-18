#include <stdio.h>
/*
格式化读写函数：fscanf()和fprintf()

fscanf()：从文件中读取格式化的输入
格式：fscanf(文件指针,格式化字符串,用于接收值的指针列表);

fprintf()：向文件中写入格式化的输出
格式：fprintf(文件指针,格式化字符串,用于输出的值或变量);
*/

int main(){
    FILE* f;
    char name[20];
    int age;
    //写入文件
    f=fopen("75.txt","w");
    //写入数据
    fprintf(f,"name:%s\nage:%d\n","Mike",18);
    //关闭文件
    fclose(f);
    //读取文件
    f=fopen("75.txt","r");
    //读取数据
    fscanf(f,"name:%s\nage:%d\n",name,&age);
    //关闭文件
    fclose(f);
    printf("name:%s\nage:%d\n",name,age);
    return 0;
}