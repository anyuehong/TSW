#include <stdio.h>
int main(){
    //子代码块中的变量不能在父代码块中使用，但父代码块中的变量可在子代码块中使用
    int num1=10;
    printf("num1=%d\n",num1);
    {
        int num2=20;
        printf("num2=%d\n",num2);
        printf("num1=%d\n",num1); //可运行
    }
    //printf("num2=%d\n",num2); 报错，超出了代码块的范围

    if (1)
    {
        int num3=30;
        printf("num3=%d\n",num3);
    }
    
    for (int i = 0; i < 2; i++)
    {
        int num4=40;
        printf("num4=%d\n",num4);
    }
    
    return 0;
}