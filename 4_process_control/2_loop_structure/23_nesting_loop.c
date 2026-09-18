#include <stdio.h>
int main(){
    /*
    嵌套循环一般最多有两层
    */
    for(int i=1;i<=5;i++){
        for (int j= 1; j <=5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

    for(int i=1;i<=9;i++){
        for (int j = 1; j <=i; j++)
        {
            printf("%d*%d=%d ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}