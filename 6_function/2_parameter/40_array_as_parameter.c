#include <stdio.h>

int max(int a,int b){
    return (a>b)?a:b;
}

void add(int a[5]){
    //这里不可以用int len=sizeof(a)/sizeof(a[0]);，因为传入的a是地址而非数组，不能正确计算出数组的长度
    for (int i = 0; i < 5; i++)
    {
        a[i]+=1;
    }
}

int main(){
    /*
    数组不能作为形参，只能作为实参
    数组元素作为参数与之前的情况基本一致
    数组名作为实参向形参赋值时，自动转化为第一个元素的首地址（并不是整个数组的地址），根据偏移量获得数组的每一个元素，这意味着实参数组与形参数组有相同的地址和内存空间，同步改变
    */
    int a[5];
    printf("请输入五个整数：\n");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int max_rs=a[0];
    for (int i = 1; i < 5; i++)
    {
        max_rs=max(max_rs,a[i]);
    }
    printf("数组中最大的值为：%d",max_rs);

    printf("对数组中的每个元素加1\n");
    add(a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}