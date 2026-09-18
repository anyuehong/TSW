#include <stdio.h>

int max(int a,int b){
    return (a>b)?a:b;
}

int sum(int a,int b){
    return a+b;
}

int get_num(int a,int b,int c){
    return sum(max(a,b),max(b,c));
}

int main(){
    /*
    函数调用的内部逻辑：
    main函数->调用A()函数->保存下一条指令地址，保存当前现场->A()函数开始运行->A()函数结束运行->恢复主调程序现场，取出下一条指令地址->执行下一条指令
    */
    /*
    函数嵌套调用的内部逻辑：
    main函数->调用A()函数->保存下一条指令地址，保存当前现场->A()函数开始运行->调用B()函数->保存下一条指令地址，保存当前现场->B()函数开始运行->B()函数结束运行->恢复主调程序现场，取出下一条指令地址->A()函数结束运行->恢复主调程序现场，取出下一条指令地址->执行下一条指令
    */
    int x=1,y=2,z=3;
    int rs=get_num(x,y,z);
    printf("%d\n",rs);
    return 0;
}