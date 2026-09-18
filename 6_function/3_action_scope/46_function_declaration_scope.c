#include <stdio.h>

void show(int a,int b); //函数声明作用域

int main(){
    show(1,2);
    return 0;
}

void show(int x,int y){
    //声明的变量名可以不一样
    printf("x=%d,y=%d\n",x,y);
}