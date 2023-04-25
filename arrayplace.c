#include<stdio.h>
int main()
{
    int A[100],temp=0,counter=0;
    int n,i=0,j=1;
    char choice;
    printf("enter the size of array");
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("You Entered an odd number,should i 1 to it??press Y ");
        scanf("%s\n",&choice);
        if(choice=='y'||choice=='y')
        {
        n+1;
        }
        else 
        return 0;
    }
    for(i=0;i<n;i++)
    {
        printf("enter no %d for array",i+1);
        scanf("%d",&A[i]);
    }
    i=0;
while(1)
{
    while(i%2==0&&A[i]%2!=0)
    {
    //printf("Positions at which Even numbers are wrongly placed %d\n",i+1); 
    i=i+2;
    }

    while(j%2!=0&&A[j]%2==0)
    {
    //printf("Positions at which Odd numbers are wrongly placed %d\n",j+1);
    j=j+2;
    }
    if(j<n&&i<n)
    {
  temp=A[j];
  A[j]=A[i];
  A[i]=temp;
    }
else 
break;
}
for(i=0;i<n;i++)
{
    printf("%d \n",A[i]);
}
}