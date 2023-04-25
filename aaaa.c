#include<stdio.h>
int main()
{
    int arr[5],arr1[5];
    printf("enter the elements of an array");
    for(int i=0;i<5;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        arr1[i]=arr[4-i];
        printf("%d\n",arr1[i]);
    }
return 0;
}