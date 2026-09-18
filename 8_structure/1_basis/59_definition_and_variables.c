#include <stdio.h>
/*
结构体是一种用户自定义的数据类型，允许将不同数据类型的数据组合在一起
结构体可包含多个成员（也称字段或属性），每个成员可以是任意数据类型（包括数组、指针）
结构体类似Python中的类，结构体变量类似Python中的对象
*/

/*
结构体的定义：
struct 结构体名{
    成员1;
    成员2;
    ...
    成员n;
};
*/

//结构体变量的定义：
/*
方法一：先定义结构体，再定义结构体变量
struct 结构体名{
    成员1;
    成员2;
    ...
    成员n;
};
    struct 结构体名 变量名1,变量名2,...,变量名n;
*/

/*
方法二（不常用）：先用宏定义一个符号常量来表示一个结构体变量
#define 常量名 struct 结构体名
struct 结构体名{
    成员1;
    成员2;
    ...
    成员n;
};
常量名 变量名1,变量名2,...,变量名n;
*/

/*
方法三：在定义结构体类型的同时说明结构体变量
struct 结构体名{
    成员1;
    成员2;
    ...
    成员n;
}变量名1,变量名2,...,变量名n;
*/

/*
方法四：匿名说明结构体变量
struct{
    成员1;
    成员2;
    ...
    成员n;
};
常量名 变量名1,变量名2,...,变量名n;
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
}p1,p2;

struct{
    char name[20];
    int age;
    float score;
}u1,u2;

int main(){
    struct Student stu1;
    return 0;
}