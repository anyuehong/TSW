#include <stdio.h>

void show_data(){
        printf("data\n");
    }

int max(int a,int b);//函数的声明

int main(){  //主函数
    /*
    函数的主要功能：使程序更模块化，不需要编写大量重复的代码
    
    函数定义的格式：
    返回类型 函数名(参数表){
        函数体
    }
    返回类型：声明函数返回值的类型，若函数不返回任何值，使用void关键字表示
    函数名：用于在调用时识别函数
    参数表：定义了传递给函数的参数的数据类型、顺序和数量，函数可能不需要参数，因此参数列表是可选的
    函数体：调用函数时执行的语句

    函数调用的格式：
    函数名(参数)

    注意：若函数定义在main函数之后，需要在main函数之前声明函数（返回类型 函数名(参数表);）
    */
    show_data();
    int tp=max(6,8);
    printf("%d\n",tp);
    return 0;
}

int max(int a,int b){
    int temp=(a>b)?a:b;
    return temp;
}