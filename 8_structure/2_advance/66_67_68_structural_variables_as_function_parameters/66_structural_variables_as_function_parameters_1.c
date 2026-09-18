#include <stdio.h>
#include <string.h>
//将结构体变量作为实参传给另一个函数有三种方式

/*
方式一：整体值传递
形参是同类型的结构体变量，将结构体变量所占的内存单元的内容全部按顺序传递给形参
但是，函数调用期间形参也要独占一份内存单元，这就导致了内存空间的浪费，一般少用这种方法
*/

/*
方式二：地址传递
用指向结构体变量的指针作为实参，将结构体变量（或数组）的地址传给形参
*/

/*
方式三：成员值传递
用结构体变量的成员作为实参，将值传递给类型相同的形参
*/


//方式一演示：

struct Student
{
    int num;
    char name[20];
    float score[3];
};

void print(struct Student stu){
    printf(
        "%d %s %.1f %.1f %.1f\n",
        stu.num,
        stu.name,
        stu.score[0],
        stu.score[1],
        stu.score[2]
    );
    stu.num=2001;
    strcpy(stu.name,"Mary");
    stu.score[0]=100.0;
}

int main(){
    struct Student stu={1001,"Mike",{77.0,88.0,99.0}};
    print(stu);
    printf(
        "%d %s %.1f %.1f %.1f\n",
        stu.num,
        stu.name,
        stu.score[0],
        stu.score[1],
        stu.score[2]
    );
    //结构体变量直接传递给函数，作为实参，只传递值，形参被改变后，不会影响实参
    return 0;
}