#include <stdio.h>
int main(){
    /*
    变量的数据类型是可以转换的
    分为隐式（自动）类型转换和显示（强制）类型转换
    */

    /*
    在数据运算时，编译系统自动将数据类型统一转换为更大范围的数据类型，以保证数据的精度不降低，如int转换为long，这种转换称为隐式类型转换
    所有浮点数运算都要使用double类型，float类型的浮点数在运算时会自动转换为double类型，这种转换也是隐式类型转换
    char类型的变量在运算时会自动转换为int类型，这种转换也是隐式类型转换
    若赋值号右侧的表达式类型比左侧的变量类型范围大，则发生类型转换时，可能会造成数据精度的损失，丢失的部分四舍五入
    */

    //转换方式总结：char/short->int->unsigned int->long/float->double->long double（低级转高级）
    float pi = 3.14159f;
    int s,r=5;
    s = pi * r * r;//pi被自动转换为double类型，r被自动转换为double类型，运算结果为double类型，赋值给int类型的s时发生了数据精度的损失，舍去了小数部分
    printf("s=%d\n",s);
    return 0;
}