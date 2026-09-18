#include <stdio.h>
#include <string.h>

//方式二演示：

struct Student
{
    int num;
    char name[20];
    float score[3];
};

void print(struct Student* p){
    printf(
        "%d %s %.1f %.1f %.1f\n",
        p->num,
        p->name,
        p->score[0],
        (*p).score[1],
        (*p).score[2]
    );
    p->num=2001;
    strcpy(p->name,"May");
    p->score[0]=100.0;
}

int main(){
    struct Student stu={1001,"Mike",{77.0,88.0,99.0}};
    struct Student* ps=&stu;
    print(ps);
    printf(
        "%d %s %.1f %.1f %.1f\n",
        stu.num,
        stu.name,
        stu.score[0],
        stu.score[1],
        stu.score[2]
    );
    //结构体变量指针作为参数时，形参修改值后会影响实参
    return 0;
}