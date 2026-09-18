#include <stdio.h>
int main(){
    /*
    元素长度内存地址=数字内存地址+元素长度*元素索引 （16进制）
    数组元素的赋值与访问可以通过索引实现，索引从0开始
    初始化之后不能再对数组中多个元素同时赋值（如arr={1,2,3}是不允许的）
    */
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[3]=30;
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}