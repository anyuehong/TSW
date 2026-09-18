#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Student
{
    int id;
    char name[20];
    struct Date birthday;
};

int main(){
    struct Student stu1={1001,"Mike",{2007,9,16}};
    printf("id=%d,name=%s,birthday=%d-%d-%d\n",stu1.id,stu1.name,stu1.birthday.year,stu1.birthday.month,stu1.birthday.day);
    return 0;
}