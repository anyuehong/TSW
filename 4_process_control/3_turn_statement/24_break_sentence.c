#include <stdio.h>
int main(){
    /*
    break：强行退出整个循环
    */
    int sum=0;
    for (int i = 1; i <=100; i++)
    {
        sum+=i;
        if (sum>2000)
        {
            printf("当i是%d时，sum的值超过了2000\n",i);
            break;
        }
        
    }
    printf("sum的值是%d\n",sum);

    int i2=1,sum2=0;
    while (i2<=100)
    {
        sum2+=i2;
        if (sum2>2000)
        {
            printf("当i2是%d时，sum2的值超过了2000\n",i2);
            break;
        }
        i2++;
    }
    printf("sum2的值是%d\n",sum2);

    int i3=0,sum3=0;
    do
    {
        sum3+=i3;
        if (sum3>2000)
        {
            printf("当i3是%d时，sum3的值超过了2000\n",i2);
            break;
        }
        i3++;
    } while (i3<=100);
    printf("sum3的值是%d\n",sum3);
    //不要出现死循环
    return 0;
}