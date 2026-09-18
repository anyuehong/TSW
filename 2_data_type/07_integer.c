//c语言中没有bool类型，而是使用0表示伪，用所有非零值表示真；c99标准使用0表示伪，使用1表示真
#include <stdio.h>
int main(){
    /*
    整型：
    声明使用int关键字
    占位符为%d
    在32位或64为系统中int通常占32位，取值范围为-2147483648~2147483647
    */
    printf("int:bytes %d;bit %d\n",sizeof(int),sizeof(int)*8);// -> int:bytes 4;bit 32（说明系统中int占32位）

    /*
    短整型：
    声明使用short关键字
    占位符为%hd
    取值范围为-32768~32767
    */
    printf("short:bytes %d;bit %d\n",sizeof(short),sizeof(short)*8);// -> short:bytes 2;bit 16（说明系统中short占16位）
    
    /*
    长整型：
    声明使用long关键字
    占位符为%ld
    取值范围为-2147483648~2147483647
    */
    printf("long:bytes %d;bit %d\n",sizeof(long),sizeof(long)*8);// -> long:bytes 4;bit 32（说明系统中long占32位）

    /*
    长长整型：
    声明使用long long关键字
    占位符为%lld
    取值范围为-9223372036854775808~9223372036854775807
    常被用于科学计算
    */
    printf("long long:bytes %d;bit %d\n",sizeof(long long),sizeof(long long)*8);// -> long long:bytes 8;bit 64（说明系统中long long占64位）

    
    /*
    signed关键字：表示类型带有正负号
    unsigned关键字：表示类型无正负号，即零和正数
    int类型默认带有正负号，即int = signed int
    使用unsigned的好处：正数的最大值增加到两倍（unsigned int：0~4294967295，unsigned long long：0~18446744073709551615）
    */

    /*
    占位符
    %d（整数都行，最常用）
    int %i %u
    short %hd
    long %ld %lu
    long long %lld %llu
    十六进制 %x
    八进制 %o
    */
    return 0;
}