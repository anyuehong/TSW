#include <stdio.h>
/*
函数逻辑的存储是需要内存地址的，而指针可以指向该内存地址，所以指针可以指向函数
函数名是指向函数代码的指针
指针指向函数的作用：动态调用函数，使程序更加灵活
*/

int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}

int add_one(int a){
    return a+1;
}

int multiply(int a){
    return a*2;
}

void apply_operation(int a,int (*func)(int)){
    printf("func:%d\n",func(a));
}

int main(){
    //定义指向函数的指针：返回类型* 指针名(函数参数数据类型列表)
    int (*func)(int,int);
    
    func=add;
    printf("add:%d\n",add(1,2));
    printf("func:%d\n",func(1,2));

    func=subtract;
    printf("substract:%d\n",subtract(3,2));
    printf("func:%d\n",func(3,2));

    apply_operation(3,add_one);
    apply_operation(3,multiply);
    return 0;
}