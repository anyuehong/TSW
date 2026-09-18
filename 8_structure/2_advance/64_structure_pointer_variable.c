#include <stdio.h>
/*
结构体指针变量是指指向结构体变量的指针变量
结构体指针变量指向的是结构体变量的首地址

结构体指针变量的定义：
struct 结构体名* 变量名;

指针访问结构体变量成员：
方法一：使用点运算符
(*结构体指针变量).成员名;
注：一定要加括号，点运算符的优先级高于*运算符

方法二：使用指向运算符
结构体指针变量->成员名;
*/

struct Student
{
    int id;
    char name[20];
    int age;
};


int main(){
    struct Student stu1={1001,"Mike",18};
    struct Student* p_stu=&stu1;
    //结构体变量与整型变量等变量相似，变量名无法像数组名、字符串名一样直接传递地址，所以要加&输出地址
    printf("id:%d\n",(*p_stu).id);
    printf("姓名:%s\n",p_stu->name);
    printf("年龄:%d\n",p_stu->age);
    return 0;
}