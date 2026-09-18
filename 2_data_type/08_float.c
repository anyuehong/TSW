#include <stdio.h>
int main(){
    /*
    浮点数：有小数点的数值
    声明使用float关键字
    float一般占32位，只能提供7位有效数字精度
    */
    float pi = 3.1415926F;//F表示float类型后缀
    printf("pi = %.7f\n", pi);//%.7f表示输出7位小数
    /*
    double类型：双精度浮点数
    一般占64位，能提供16位有效数字精度
    */
    double e = 2.718281828459045;//没有后缀，默认为double类型
    printf("e = %.16lf\n", e);//%.16lf表示输出16位小数
    /*
    long double类型：长双精度浮点数
    一般占128位，能提供16/19位有效数字精度
    */
    long double golden_ratio = 1.618033988749894848204L;//L表示long double类型后缀
    printf("golden_ratio = %.19Lf\n", golden_ratio);//%.19Lf表示输出19位小数
    //若此处输出0，说明无法使用long double类型，可能是编译器不支持
    /*
    对应的占位符：
    float类型：%f
    double类型：%lf
    long double类型：%Lf
    */
    //浮点数自带符号，没有signed和unsigned之分
    return 0;
}