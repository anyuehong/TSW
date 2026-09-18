#include <stdio.h>
int main(){
    /*
    显示（强制）类型转换语法：
    (数据类型)变量
    (数据类型)(表达式)
    */

    //数据类型转换只是临时改变数据长度，变量中储存的数据本身并没有改变
    float pi = 3.141592f;//不加f的话，3.141592会被当作double类型处理，float类型的pi会被提升为double类型
    printf("pi的size大小是:%zu\n",sizeof(pi));//sizeof是用来计算数据类型大小的运算符，%zu是输出size_t类型的占位符（比如sizeof函数的输出）
    printf("(int)pi=%d,pi=%f\n",(int)pi,pi);
    int a = 10;
    double d=a+pi;//a会被提升为double类型，pi也被提升为double类型，所以a+pi的结果是double类型
    printf("a+pi=%f\n",d);
    printf("d的size大小是:%zu\n",sizeof(d));
    int i;
    i=(int)d;//d被强制转换为int类型，d的值是13.141592，所以i的值是13
    printf("i=%d\n",i);
    return 0;
}