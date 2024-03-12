#include<stdio.h>
void read(int[],int);
void display(int[],int);
void Lin_Search(int[],int);
int main()
{
    int a[100],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    Lin_Search(a,n);
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
void Lin_Search(int a[],int n)
{
    int i,key,count=0;
    printf("enter key element..\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            count++;
        }
    }
    if(count>0)
        printf("searching key element is found...\n");
    else
        printf("searching key element is not found...\n");

}
