#include <stdio.h>
int main(){
    /*
    continue：直接进入下一次循环（进行循环变量更新->进行循环条件判断->循环体）
    */
    for(int i=100,count=0;i<=150;i++){
        if (i%3==0)
        {
            continue;
        }
        printf("%d ",i);
        count++;
        if (count%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}