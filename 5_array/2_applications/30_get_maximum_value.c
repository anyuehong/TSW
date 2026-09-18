#include <stdio.h>
int main(){
    int arr1[]={1,5,3,7,9,4,6,8};
    int length=sizeof(arr1)/sizeof(arr1[0]);
    int max=arr1[0];
    for (int i = 1; i < length; i++)
    {
        if (max<arr1[i])
        {
            max=arr1[i];
        }
    }
    printf("max{arr1}=%d\n",max);
    return 0;
}