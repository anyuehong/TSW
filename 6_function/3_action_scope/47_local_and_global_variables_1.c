#include <stdio.h>

int num3=300;//全局变量，可作用于所有源文件

extern int num4;//引入全局变量

void show(){
    int num2=200;
    printf("num2=%d\n",num2);
    printf("num3=%d\n",num3);
    printf("num4=%d\n",num4);
}
int main(){
    //局部变量：作用范围为当前函数内
    int num1=100;
    printf("num1=%d\n",num1);
    show();
    return 0;
}