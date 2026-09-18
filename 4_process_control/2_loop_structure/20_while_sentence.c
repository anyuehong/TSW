#include <stdio.h>
int main(){
    /*
    while语句结构：
    while(条件表达式){
        语句/代码块;
    }
    条件表达式的结果若为0，则为假，程序直接结束，若非0，则为真，再次运行代码块
    若{}中只有一行代码，则可以省略{}
    条件表达式不能输出常量，否则会出现死循环
    */
    int a=1,sum=0;
    while (a<=100)sum+=a++;
    printf("%d",sum);
    return 0;
}