#include <stdio.h>
/*
在72~75节中，文件的读写方式都是顺序读写（从头开始）
而从这一节开始，将介绍定位读写
文件的内部有位置指针，实现定位读写的关键是正确地移动位置指针

能移动位置指针的函数是rewind()和fseek()
*/

/*
rewind()：将位置指针移到文件的开头
格式：rewind(文件指针);
*/

/*
fseek()：将位置指针移到任意位置
格式：fseek(文件指针,相对于whence参数的偏移量,whence参数)
解释：whence参数是指针的起始位置，可以是以下值之一：
起始点      常量名      常量值
文件首      SEEK_SET    0
当前位置    SEEK_CUR    1
文件末尾    SEEK_END    2
*/

struct Student
{
    int id;
    char name[20];
    float salary;
};

int main(){
    FILE* f;
    struct Student stu;
    char* filename="76.txt";
    struct Student students[]={
        {0,"Mike",1000.5},
        {1,"Andy",2000.5},
        {2,"May",3000.5},
        {3,"Kevin",4000.5},
        {4,"Max",5000.5}
    };
    int len=sizeof(students)/sizeof(students[0]);
    //写入文件
    f=fopen(filename,"w");
    //写入数据
    for (int i = 1; i < len-1; i++)
    {
        fwrite(&students[i],sizeof(struct Student),1,f);
    }
    //发现少写了第一条，需要将位置指针移至文件开头
    rewind(f);
    fwrite(&students[0],sizeof(struct Student),1,f);
    //发现少写了最后一条，需要将位置指针移至文件末尾
    fseek(f,0,SEEK_END);
    fwrite(&students[4],sizeof(struct Student),1,f);
    //关闭文件
    fclose(f);
    //读取文件
    f=fopen(filename,"r");
    //读取数据
    for (int i = 0; i < len; i++)
    {
        if(fread(&stu,sizeof(struct Student),1,f)!=0){
            printf("id=%d,name=%s,salary=%.1f\n",stu.id,stu.name,stu.salary);
        }
    }
    //关闭文件
    fclose(f);
    
    /*
    输出为：
    id=0,name=Mike,salary=1000.5
    id=2,name=May,salary=3000.5
    id=3,name=Kevin,salary=4000.5
    id=4,name=Max,salary=5000.5

    id=1的一组数据消失了，这是因为移动光标后，不会追加数据，而是覆盖原有数据，所以一般不推荐这么做
    */

    //指定位置读取数据
    printf("指定位置，移动指针后读取：\n");
    f=fopen(filename,"r");
    fseek(f,sizeof(struct Student),SEEK_SET);
    if(fread(&stu,sizeof(struct Student),1,f)!=0){
            printf("id=%d,name=%s,salary=%.1f\n",stu.id,stu.name,stu.salary);
    }
    //关闭文件
    fclose(f);
    return 0;
}
