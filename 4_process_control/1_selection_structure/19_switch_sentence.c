#include <stdio.h>
int main(){
    /*
    switch语句是if else if else语句的简化版
    格式：
    switch(表达式){
        case 值1:
            语句1;
            break;
        case 值1:
            语句1;
            break;
        ...
        default:
            默认语句;
    }

    解释：
    switch后的表达式决定了选择哪个代码块执行
    若表达式的值等于case后的值，则执行该代码块
    break是可选的关键字，用于跳出switch语句，若省略break，会继续执行下一个case中的代码，直到看到break或switch语句结束
    default是可选的关键字，用于处理所有未匹配的情况，类似else的作用

    注意：
    switch语句只支持int、char、short、long以及枚举类型的表达式，不支持浮点数和字符串
    case语句中的值必须是常量表达式，且不能重复
    若case后有多条语句，可以用{}括起来
    各case语句和default语句的顺序可以随意调换，不影响结果
    */
    int n;
    printf("请输入一个整数(1~7):");
    scanf("%d",&n);
    printf("对应的日期是：");
    switch(n){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("输入错误\n");
    }
    return 0;
}