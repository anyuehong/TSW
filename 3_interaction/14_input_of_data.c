#include <stdio.h>
int main(){
    /*
    getchar()函数用于从标准输入设备（通常是键盘）读取一个字符，并返回该字符的ASCII码值。该函数会等待用户输入，直到用户按下回车键为止。getchar()函数的返回值是一个整数类型，表示读取到的字符的ASCII码值。如果读取失败，则返回EOF（End Of File，文件结束标志）。  
    scanf("格式化字符串",地址列表)函数用于将键盘输入的数据按规定的格式存储到相应的变量的内存地址中，变量的地址用&操作符获取
    注意：参数的个数、顺序、数据类型要对应
    vs编译器会提供scanf_s函数，不建议使用，会失去跨平台性和可移植性
    若vs中scanf函数报错，可使用代码：#define _CRT_SECURE_NO_WARNINGS 1
    */
    char ch;
    printf("请输入一个字符");
    ch=getchar();
    printf("ch=%c\n",ch);

    int a;
    printf("请输入一个整数");
    scanf("%d",&a);
    printf("a=%d\n",a);

    double d;
    printf("请输入一个小数");
    scanf("%lf",&d);
    printf("d=%.1lf\n",d);
    return 0;
}