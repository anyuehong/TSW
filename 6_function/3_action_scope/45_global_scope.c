#include <stdio.h>

//全局作用域：在整个程序内都能使用

int num1=10; //没有了static约束

void show(){
    printf("num1=%d\n",num1);
}

int main(){
    printf("num1=%d\n",num1);
    show();
    return 0;
}