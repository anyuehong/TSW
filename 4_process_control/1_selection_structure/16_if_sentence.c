#include <stdio.h>
int main(){
    /*
    单分支：
    if(条件表达式){
        语句/代码块;
    }
    条件表达式的结果若为0，则为假，程序直接结束，若非0，则为真，运行代码块后结束
    若{}中只有一行代码，则可以省略{}
    */
    int rs;
    printf("请输入一个整数：");
    scanf("%d",&rs);
    if (rs>0 && rs<100)
    {
        printf("这个整数在0和100之间\n");
    }
    printf("程序结束\n");
    return 0;
}