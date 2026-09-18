#include <stdio.h>
int main(){
    /*
    void类型指针通常用于需要各种类型数据的地方或者我们并不关心数据的具体类型
    使用时要强行转换数据类型
    */
    int x=10;
    float y=10.5;
    char z='A';

    void* p1=&x;
    void* p2=&y;
    void* p3=&z;

    //printf("%d\n",*p1); 报错，void类型指针不能直接使用

    printf("%d\n",*(int*)p1);
    printf("%f\n",*(float*)p2);
    printf("%c\n",*(char*)p3);
    
    return 0;
}