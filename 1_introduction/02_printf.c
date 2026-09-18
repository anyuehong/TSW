/*
printf函数不会自动换行
换行符：\n
占位符：%
整数占位符：%i
字符串占位符：%s
浮点数占位符：%f
保留2位小数：%.2f
宽度最小值至少为5位：%5d（不满5位前方用空格补齐）
*/
#include <stdio.h>
int main(){
    printf("Hello\nWorld\n");
    printf("There are %i apples.\n",4);
    printf("%s says it is %i o'clock.\n","He",10);
    printf("%5d\n",123);
    printf("Number is %.2f\n",0.5);
    return 0;
}