//文件读写函数所在文件：stdio.h
#include <stdio.h>
/*
字符读写函数：fgetc()和fputc()

fgetc():从指定文件中读取一个字符
格式：字符变量名=fgetc(文件指针);
（fgetc()函数按字节读取文件，而中文采用2字节、3字节方式编码，且有GBK和UTF-8编码方式的区别，总之，坑很多，最好读ASCII码中的字符）

fputc()：把一个字符写入指定的文件中
格式：字符变量名=fputc(字符,文件指针);
*/

int main(){
    FILE* f;
    char ch;
    //打开文件
    f=fopen("72.txt","w");
    //写入数据
    fputc('H',f);
    fputc('e',f);
    fputc('l',f);
    fputc('l',f);
    fputc('o',f);
    //关闭文件（这一步是必须的）
    fclose(f);
    //读取文件
    f=fopen("72.txt","r");
    //读取数据
    while ((ch=fgetc(f))!=EOF) 
    //EOF是文件结束标志（end of file）
    //注意：这里ch=fgetc(f)外必须加括号，因为!=的优先级高于=，程序会变成ch=(fgetc(f)!=EOF)，这样的话ch的值就只有0（假）和1（真）两种可能值
    {
        printf("%c",ch);
    }

    //一种更易理解的方式
    /*
    ch=fgetc(f);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(f);
    }
    */

    //关闭文件
    fclose(f);
    return 0;
}