//需求：创建学生结构体，创建结构体数组变量，手动输入信息，并输出学号最大的学生的信息
#include <stdio.h>
#include <string.h>

struct Student{
    char id[20];
    char name[20];
    int age;
    char gender[20];
};

void out_put(struct Student stu[3]){
    struct Student max_stu=stu[0];
    for (int i = 1; i < 3; i++)
    {
        max_stu=(strcmp(max_stu.id,stu[i].id)<0)?stu[i]:max_stu;
        //strcmp函数：输入两个数字形式的字符串，可将其按ASCII码比较，若前者大于后者，输出正数，若两者相等，输出0，若前者小于后者，输出负数，从第一个符号开始比较，遇到不同符号或某一方出现\0结束
        //如"99">"100"
    }
    printf(
        "id=%s,name=%s,age=%d,gender=%s\n",
        max_stu.id,
        max_stu.name,
        max_stu.age,
        max_stu.gender
    );
}

int main(){
    struct Student stu[3];
    for (int  i = 0; i < 3; i++)
    {
        printf("请依次输入第%d个学生的id、姓名、年龄、性别(用空格分开)\n",i+1);
        scanf(
            "%s %s %d %s",
            &stu[i].id,
            &stu[i].name,
            &stu[i].age,
            &stu[i].gender
        );
    }
    out_put(stu);
    return 0;
}