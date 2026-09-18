#include <stdio.h>
/*
数据块读写函数：fread()和fwrite()
数据块即一组数据，如一个数组元素、一个结构体变量的值等

fread()：从文件中读取二进制数据
格式：fread(指向用于存储数据的内存块的指针,要读取的每个数据项的字节大小,要读取的数据项的数量,文件指针);
返回值：读取成功是返回实际读取的元素数目，读取失败时返回0

fwrite()：向文件中写入二进制数据
格式：fwrite(指向用于存储数据的内存块的指针,要写入的每个数据项的字节大小,要写入的数据项的数量,文件指针);
返回值：写入成功是返回实际读取的元素数目
*/

struct Student
{
    int id;
    char name[20];
    float score;
};


int main(){
    struct Student stu1={1001,"Mike",96.5},stu2;
    FILE* f;
    //写入文件
    f=fopen("74.txt","w");
    //写入数据
    fwrite(&stu1,sizeof(struct Student),1,f);
    //关闭文件
    fclose(f);
    //读取文件
    f=fopen("74.txt","r");
    //读取数据
    fread(&stu2,sizeof(struct Student),1,f);
    //关闭文件
    fclose(f);
    printf("学号:%d,姓名:%s,分数:%.1f\n",stu2.id,stu2.name,stu2.score);
    return 0;
}
/*
二进制文件：
字节没有字符编码规则约束，可以是任意0~255 数值，字节代表颜色、指令、音频采样等，不是文字
大量存在 0x00、0x01 等不可打印字节（空字节是典型特征）
VSCode 扫描到大量不可打印字节 → 弹出你截图的警告：判定为二进制文件
例子：.png .jpg .exe .zip .bin .pdf
*/