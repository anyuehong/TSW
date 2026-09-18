#include <stdio.h>
int main(){
    /*
    do while语句结构：
    do{
        语句/代码块;
    }while(条件表达式);
    执行顺序：先执行一次语句/代码块，再进入while循环，因此do while语句中的代码块至少要执行一次
    do while本身是一条语句，需要在最后加;
    */
    int i=1,sum=0;
    do
    {
        sum+=i++;
    } while (i<=100);
    printf("%d",sum);
    return 0;
}