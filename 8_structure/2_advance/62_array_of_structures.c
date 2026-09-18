#include <stdio.h>
/*
结构体数组：以结构体为元素的数组

结构体数组的定义：
struct 结构体名 数组名[数组长度];

结构体数组的初始化：
方法一：已定义结构体，未定义结构体变量
struct 结构体 变量名[n]={{值1,值2,...,值n},{值1,值2,...,值n},...,{值1,值2,...,值n}}
方法二：已定义结构体变量
变量名[n]={{值1,值2,...,值n},{值1,值2,...,值n},...,{值1,值2,...,值n}}
*/

struct Student
{
    int id;
    char name[20];//必须规定字符串数组的大小上限
    char gender[20];
};

int main(){
    struct Student stu[3]={
        {1001,"Mike","male"},
        {1002,"Alex","male"},
        {1003,"Sandy","female"}
    };
    //其内存空间为id name gender id name gender id name gender
    for (int i = 0; i < 3; i++)
    {
        printf(
            "id=%d,name=%s,gender=%s\n",
            stu[i].id,
            stu[i].name,
            stu[i].gender
        );
    }
    return 0;
}