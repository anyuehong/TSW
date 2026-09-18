#include <stdio.h>
int main(){
    /*
    字符指针可以指向字符串的首字符，从而访问整个字符串，字符指针可以遍历字符串直到遇到\0为止
    */
    char str[]="hello";
    char* p=str;//字符串数组的首字母地址赋值给指针
    //用地址进行遍历
    while (*p!='\0')
    {
        printf("%c\n",*p);
        p++;
    }
    
    char* p1=str;
    printf("%s\n",p1);//%s需要的是字符串首地址而非字符串的内容

    //直接将字符串常量赋值给指针
    char* p2="hello";
    printf("%s\n",p2);
    return 0;
}