#include<stdio.h>
int n,l;
int *a;
int createe()
{
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
        
    }
}

void display(int a[])
{
    printf("The array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

void insert()
{ 
    int e,p;
    printf("Enter the element to be inserted and the position\n");
    scanf("%d%d",&e,&p);
    a[p]=e;
}

void deletee()
{
    int p;
    printf("Enter the position\n");
    scanf("%d",&p);
    a[p]=0;
}

void search()
{
    int s;
    printf("Enter the element to be searched\n");
    scanf("%d",&s);
    int st=a[0];
    int ed=a[n];
    
    while(st<=ed)
    {
        int mid=(st+ed)/2;
        if(a[mid]==s)
        {
            printf("Found=%d\n",mid+1);
            break;
        }
        else if(a[mid]>s)
        {
            ed=mid;
        }
        else if(a[mid]<s)
        {
            st=mid;
        }
    }
    printf("Element not found\n");
}

void largestAndsmallest()
{
    int largest=a[0],smallest=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];
        if(a[i]<smallest)
            smallest=a[i];
    }
    printf("Largest element=%d\n",largest);
    printf("Smalllest element=%d\n",smallest);
}

void sort()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array\n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
}




int main()
{
    
    int s;
    do
    {
        int choice;
        printf("Enter 1 to create an array\n"
               "Enter 2 to display an array\n"
               "Enter 3 to insert an element at a given position\n"
               "Enter 4 to delete an element from a given position\n"
               "Enter 5 to search an element\n"
               "Enter 6 to dispaly largest and smallest elemnts\n"
               "Enter 7 to sort an array\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                a[n]=createe();
                break;
            case 2:
                display(a);
                break;
            case 3:
                insert();
                break;
            case 4:
                deletee();
                break;
            case 5:
                search();
                break;
            case 6:
                largestAndsmallest();
                break;
            case 7:
                sort();
                break;
            default:
                printf("Enter a valid input\n");
                break;
        }
        
        printf("Enter 1 to continue and anything else to exit\n");
        scanf("%d",&s);
        
                
    }while(s==1);
    
    return 0;
}