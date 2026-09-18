#include <stdio.h>

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void inverse(int* p,int size){
    for (int i = 0; i < size/2; i++)
    {
        int temp=*(p+i);
        *(p+i)=*(p+size-1-i);
        *(p+size-1-i)=temp;
    }
    
}

int main(){
    /*
    函数的参数可以是指针
    这使得可以在函数内部操作函数外部的数据，并且这些数据不会随着函数的结束而销毁（仅有函数作用域的变量不通过赋值无法用于其他函数；正常来说函数实参和形参在赋值后就无关了，而按地址赋值就会使两者同步）
    */
    int x=10,y=20;
    printf("x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("x=%d,y=%d\n",x,y);

    int nums[]={1,2,3,4,5,6,7,8,9,10};
    printf("逆序前：");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
    inverse(nums,10);
    printf("逆序后：");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
    return 0;
}