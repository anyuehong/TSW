#include <stdio.h>
int main(){
    int arr1[]={1,5,3,7,9,4,6,8};
    int length=sizeof(arr1)/sizeof(arr1[0]);
    int min=arr1[0];
    for (int i = 1; i < length; i++)
    {
        if (min>arr1[i])
        {
            min=arr1[i];
        }
    }
    printf("min{arr1}=%d\n",min);
    return 0;
}