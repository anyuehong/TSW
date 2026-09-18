#include <stdio.h>
int main(){
    /*
    双分支：
    if(条件表达式){
        语句/代码块1;
    }else{
        语句/代码块2;
    }
    条件表达式的结果若非0，则为真，运行代码块1后结束，若为0，则为假，运行代码块2后结束
    */

    //双分支
    int num1,num2;
    printf("请输入两个整数：");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("%d更大\n",num1);
    }else{
        printf("%d更大\n",num2);
    }
    //单分支
    int num3,num4;
    printf("请输入两个整数：");
    scanf("%d %d",&num3,&num4);
    int max;
    max=num3;
    if(num3<num4){
        max=num4;
    }
    printf("%d更大\n",max);
    //条件运算符
    int num5,num6;
    printf("请输入两个整数：");
    scanf("%d %d",&num5,&num6);
    int max2=(num5>num6)?num5:num6;
    printf("%d更大\n",max2);
    return 0;
}