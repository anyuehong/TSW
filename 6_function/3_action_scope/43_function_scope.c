#include <stdio.h>
//函数不能使用其他函数内定义的变量

void show(){
    int num2=20;
    printf("num2=%d\n",num2);
    //printf("num1=%d\n",num1); 报错
}

int main(){
    int num1=10;
    printf("num1=%d\n",num1);
    show();
    return 0;
}