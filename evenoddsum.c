#include<stdio.h>
void read(int[],int);
void display(int[],int);
void even(int[],int);
void odd(int[],int);
int main()
{
    int a[100],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    even(a,n);
    odd(a,n);
}
void read(int a[],int n)
{
    int i;
    printf("Reading all array elements...\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    printf("Displaying all array elements...\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
void even(int a[],int n)
{
    int i,es=0;
    printf("even numbers in an array...\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("a[%d] is even\n",i);
            es=es+a[i];
        }
    }
    printf("Even sum=%d\n",es);
}
void odd(int a[],int n)
{
    int i,os=0;
    printf("odd numbers in an array...\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("a[%d] is odd\n",i);
            os=os+a[i];
        }
    }
    printf("Odd sum=%d\n",os);
}
