#include <stdio.h>
int main(){
    int arr[100]={1,2,3,4};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("length=%d\n",length);
    return 0;
}