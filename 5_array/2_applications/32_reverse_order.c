#include <stdio.h>
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr1)/sizeof(arr1[0]);
    printf("原数组的顺序为：");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < length/2; i++)
    {
        int temp=arr1[i];
        arr1[i]=arr1[length-1-i];
        arr1[length-1-i]=temp;
    }
    printf("逆序后数组的顺序为：");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    return 0;
}