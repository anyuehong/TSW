#include <stdio.h>
int main(){
    /*
    指针p是对应变量的地址
    p地址存储的数据是*p
    指针有自己的地址&p
    指针是存储了内存地址的内存地址
    */
    int a,*p1,**p2;
    a=10;
    p1=&a;
    p2=&p1;
    printf("a=%d,a的地址为0x%p\n",a,&a);
    printf("*p1=%d,*p1指向地址0x%p,p1本身地址0x%p\n",*p1,p1,&p1);
    printf("**p2=%d,*p2指向地址0x%p,p2本身地址0x%p\n",**p2,p2,&p2);//*p2是p1的值，但p1没有值，所以要使用**p2
    return 0;
}