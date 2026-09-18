#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    int age;
};

/*
指向结构体数组的首地址：
struct 结构体名 数组名[数组长度];
struct 结构体名* 变量名;
变量名=数组名;
结构体数组名和数组名、字符串数组名一样，可以直接传递地址

指向结构体数组某个元素的地址：
struct 结构体名 数组名[数组长度];
struct 结构体名* 变量名;
变量名=&数组名[i];
*/

int main(){
    struct Student stu[3]={
        {1001,"Mike",18},
        {1002,"Kevin",17},
        {1003,"Sandy",18}
    };

    //指针指向数组的首地址
    struct Student* p_stu1;
    p_stu1=stu;
    for (; p_stu1<(stu+3);p_stu1++)
    {
        printf(
            "id:%d,姓名:%s,年龄:%d\n",
            p_stu1->id,
            p_stu1->name,
            p_stu1->age
        );
    }
    

    //指针指向数组某个元素的地址
    struct Student* p_stu2;
    p_stu2=&stu[1];
    printf(
        "id:%d,姓名:%s,年龄:%d\n",
        p_stu2->id,
        p_stu2->name,
        p_stu2->age
    );
    return 0;
}