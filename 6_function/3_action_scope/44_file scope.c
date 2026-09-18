#include <stdio.h>

//文件作用域：在整个文件内都能使用

static int num1=10;

void show(){
    printf("num1=%d\n",num1);
}

int main(){
    printf("num1=%d\n",num1);
    show();
    return 0;
}