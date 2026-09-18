#include <stdio.h>
/* 
指针型函数：函数以一个指针（地址）作为返回值
*/
int* get_num(){
    //指针型函数的定义：数据类型* 函数名(参数)
    static int x=10;//返回静态变量地址，否则函数结束时x就消失，指针会悬空
    return &x;
}

char* get_str(){
    return "hello";
}//输出的是字符串首地址，所以是指针型函数

char* get_name(int n){
    char* week[]={"转化错误","星期一","星期二","星期三","星期四","星期五","星期六","星期七"};
    //这是一个存储字符串的指针数组，week[i]是存储字符串的指针，指针有记忆性，会被保留到程序结束，所以这里不需要static
    return n>=1&&n<=7?week[n]:week[0];
}

int main(){
    int* y;
    y=get_num();
    printf("数值为%d,地址为0x%p\n",*y,y);

    char* str;
    str=get_str();
    printf("字符串为%s\n",str);

    char* tr=get_name(3);
    printf("星期：%s\n",tr);
    return 0;

}