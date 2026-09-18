#include <stdio.h>
#include <stdlib.h>//malloc、free函数所在的库

int* create_array(int size){
    //malloc函数：动态分配内存，参数为字节数
    int* array=(int*)malloc(size*sizeof(int));//(int*)将malloc的输出强制转换为int类型指针
    return array;
}

int main(){
    int* array=create_array(5);//给指针array分配5*4个字节大小的内存
    for (int i = 0; i < 5; i++)
    {
        array[i]=i*2;//给每块内存空间赋值
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    free(array);//释放内存
    return 0;
}