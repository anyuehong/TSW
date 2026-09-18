#include <stdio.h>
int main(){
    /*
    多分支：
    if(条件表达式1){
        语句/代码块1;
    }else if(条件表达式2){
        语句/代码块2;
    } ... else if(){
        语句/代码块n-1;
    }else{
        语句/代码块n;
    }
    最后一个else可以省略
    只要有一个条件成立，剩下的就不判断了
    */
    char ch;
    printf("请输入一个字符：");
    ch=getchar();
    if(ch<32){
        printf("输入的是控制字符\n");
    }else if(ch>='0'&&ch<='9'){
        printf("输入的是数字字符\n");
    }else if(ch>='a'&&ch<='z'){
        printf("输入的是小写字母\n");
    }else if(ch>='A'&&ch<='Z'){
        printf("输入的是大写字母\n");
    }else{
        printf("输入的是其他字符\n");
    }
    return 0;
}