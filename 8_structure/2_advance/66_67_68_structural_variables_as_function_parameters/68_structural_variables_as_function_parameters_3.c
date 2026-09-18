#include <stdio.h>
#include <string.h>

//方式三演示：

struct Student
{
    int num;
    char name[20];
    float score[3];
};

void change_num(int id){
    printf("%d\n",id);
    id=2001;
    printf("%d\n",id);
}

void change_name(char* name){
    //（字符型）数组作为参数传递首地址，可用指针接收
    printf("%s\n",name);
    strcpy(name,"May");
    printf("%s\n",name);
}

int main(){
    struct Student stu={1001,"Mike",{77.0,88.0,99.0}};
    change_num(stu.num);
    printf("%d\n",stu.num);
    //结构体变量成员直接传递给函数，作为实参，只传递值，形参被改变后，不会影响实参
    change_name(stu.name);
    printf("%s\n",stu.name);
    //数组传递的是地址，故实参与形参同步改变
    return 0;
}