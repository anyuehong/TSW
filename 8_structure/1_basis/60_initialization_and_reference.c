#include <stdio.h>
#include <string.h>
/*
结构体变量的初始化：
方法一：已定义结构体，但未定义结构体变量
struct 结构体 变量名={值1,值2,...,值n};

方法二：同时定义了结构体和结构体变量
变量名={值1,值2,...,值n};
*/


/*
结构体变量的引用：定义结构体变量后，可以引用其中的成员（不能将一个结构体变量作为整体进行输入和输出）
结构体变量名.成员名;
*/

struct Student
{
    char name[20];
    int age;
    float score;
};

struct Person
{
    char name[20];
    int age;
    float score;
}p1={"Kevin",17,91.5},p2={"Sandy",18,89.0};

int main(){
    struct Student stu1={"Mike",18,97.0};
    printf("stu1的值为:name=%s,age=%d,score=%.1f\n",stu1.name,stu1.age,stu1.score);
    printf("p1的值为:name=%s,age=%d,score=%.1f\n",p1.name,p1.age,p1.score);

    //单独修改结构体变量的某个成员值
    stu1.score=99.0;
    strcpy(stu1.name,"May");//string.h的函数
    //stu1.name="May"; 是错误的，字符串（数组）不能在初始化后整体赋值
    printf("stu1的值为:name=%s,age=%d,score=%.1f\n",stu1.name,stu1.age,stu1.score);
    return 0;
}