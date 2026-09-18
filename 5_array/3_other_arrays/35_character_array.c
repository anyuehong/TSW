#include <stdio.h>
#include <string.h>//strlen()函数的库
int main(){
    //c语言中没有字符串关键字，因此只能将字符串存储在字符数组中，结尾要加上'\0'（空白字符）
    //初始化：
    //方式一：完全赋值
    char a1[6]={'h','e','l','l','o','\0'};
    printf("a1=%s\n",a1);
    //方式二：写了'\0'，字符串正常结束，空间多的都用空白字符填充
    char a2[10]={'h','e','l','l','o','\0'};
    printf("a2=%s\n",a2);
    //方式三：没写'\0'，空间多的都用空白字符填充
    char a3[10]={'h','e','l','l','o'};
    printf("a3=%s\n",a3);
    //方式四：未指定空间大小，写了'\0'，正常结束，系统自动计算字符串长度
    char a4[]={'h','e','l','l','o','\0'};
    printf("a4=%s\n",a4);
    //方式五：不指定空间大小，直接用""括起的字符串赋值（推荐）
    char a5[]="hello";
    printf("a5=%s\n",a5);

    //错误写法：没写'\0'，空间没多或没有指定空间大小
    char a6[5]={'h','e','l','l','o'};
    printf("a6=%s\n",a6);
    char a7[]={'h','e','l','l','o'};
    printf("a7=%s\n",a7);

    //输出长度：
    printf("a1的长度为：%d\n",sizeof(a1));
    printf("a2的长度为：%d\n",sizeof(a2));
    printf("a3的长度为：%d\n",sizeof(a3));
    printf("a4的长度为：%d\n",sizeof(a4));
    printf("a5的长度为：%d\n",sizeof(a5));
    printf("a6的长度为：%d\n",sizeof(a6));
    printf("a7的长度为：%d\n",sizeof(a7));

    //有效字符长度函数：strlen()
    printf("a5的有效长度为：%d\n",strlen(a5));
    return 0;
}