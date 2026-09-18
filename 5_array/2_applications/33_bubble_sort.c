#include <stdio.h>
int main(){
    int arr1[]={2,1,3,8,5,10,6,9,8,4};
    int length=sizeof(arr1)/sizeof(arr1[0]);
    printf("原数组的顺序为：");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < length-1; i++)
    {
        for (int j = 0; j < length-1-i; j++)//有没有-i其实无所谓，但运算量会增加
        {
            if (arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
                //若前一个数据比后一个大，就交换位置
                //会现将最大的数移到最后，该数不再参与比较，然后将第二大的数移到最后，以此类推
            }
            
        }
        
    }
    printf("排序后数组的顺序为：");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    return 0;
}