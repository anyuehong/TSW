#include <stdio.h>
int main(){
    /*
    *为取值运算符
    &为取地址运算符
    它们都是单目运算符
    */
    int x=10;
    int* p=&x;
    printf("p地址是：0x%p\n",p);
    printf("p地址的值是：%d\n",*p);
    return 0;
}