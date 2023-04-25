#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,pos,arr[10],num;
	printf("enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element :%d\n",i+1);
        scanf("%d", &arr[i]);
    }
	printf("enter the number want to insert:");
	scanf("%d",&num);
	printf("enter the position at which number is added:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)	
		arr[i+1]=arr[i];
		arr[pos]=num;
		n++;

	
	printf("enter the elements after insertion");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
	return 0;
	
}