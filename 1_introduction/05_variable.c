#include <stdio.h>

int main(){
    /*
    变量的声明：
    先声明后使用
    语法：类型 变量名 分号
    声明后变量的数据类型一般不可改变
    变量赋值后才能使用
    可以同时进行声明和赋值
    */
    int height;
    height = 180;
    int weight = 60;
    int x=1,y=2;
    printf("小明的身高是%i,体重是%i",height,weight);
    return 0;
}