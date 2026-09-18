#include <stdio.h>
/*
枚举是一种用户自定义的数据类型，用于定义一组命名的整数常量
枚举允许将有意义的名称赋予整数值，还可增加整数范围的约束性，使程序更易读、更易维护
*/

/*
枚举的定义：

方式一：默认值（从0开始编码）
enum 枚举名{值1,值2,...,值n};

方式二：自定义值
enum 枚举名{值1=数1,值2=数2,...,值n=数n};
*/

//定义枚举
enum Weekday{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum Season{
    Spring,
    Summer,
    Autumn,
    Winter
};

enum Color{
    red=1,
    green=2,
    blue=4
};

int main(){
    //定义枚举变量
    enum Weekday day;
    enum Season season;
    enum Color color;
    
    //枚举变量赋值
    day=Sunday;
    season=Spring;
    color=red;
    printf("day=%d\n",day);
    printf("season=%d\n",season);
    printf("color=%d\n",color);
    printf("sizeof(day)=%zu\n",sizeof(day));
    day=6;
    printf("day=%d\n",day);
    //day=66; 不报错，但不这么用
    return 0;
}