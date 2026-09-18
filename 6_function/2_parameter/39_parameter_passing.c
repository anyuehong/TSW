#include <stdio.h>

void swap1(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

void swap2(int* a,int* b){
    //实际上这里的a、b是存入int类型数据的指针
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    /*
    值传递(y=x)：赋值后实参与形参不再有关联
    按地址传递(y=&x)：传递内存地址，实参与形参同步改变，需要在形参前加*，在实参前加&
    */
    
    int x=10,y=20;
    swap1(x,y);
    printf("（值传递下的）swap1函数作用后x=%d，y=%d\n",x,y);
    swap2(&x,&y);
    printf("（按地址传递下的）swap2函数作用后x=%d，y=%d\n",x,y);
    return 0;
}