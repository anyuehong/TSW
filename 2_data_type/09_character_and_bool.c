#include <stdio.h>
#include <stdbool.h>
/*
这个头文件可以让我们使用bool类型，true和false常量
bool等价于_Bool，true等价于1，false等价于0
这更符合编程习惯
*/
int main(){
    /*
    字符类型：char
    必须放在单引号里
    一个字符使用1个字节存储，对应一个ASCII码值，可以互换
    占位符：%c
    */
    char letter = 'B';//即char letter = 66;
    printf("letter = %c\n", letter);
    /*
    布尔类型：_Bool（C99标准引入）
    只存储0和1，0表示假，1表示真
    _Bool在存储时自动将非零值转换为1，0不变，增强了类型安全性
    应用场景：条件判断、循环控制、状态标记等
    占位符：%d
    */
    _Bool is_true = 1;
    _Bool is_false = 0;
    printf("is_true = %d\n", is_true);
    printf("is_false = %d\n", is_false);

    int flag = 1;
    if(flag){
        printf("flag is true\n");
    }
    flag = 0;
    if(!flag){
        printf("flag is false\n");
    }//!的作用：真假互换
    bool is_active = true;
    bool is_done = false;
    printf("is_active : %d\n", is_active);
    printf("is_done : %d\n", is_done);
    return 0;
}