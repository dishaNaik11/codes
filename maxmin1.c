#include<stdio.h>
void read(int[],int);
void display(int[],int);
int max(int[],int);
int min(int[],int);
int main()
{
    int a[100],n,l,s;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    l=max(a,n);
    printf("largest element in an array=%d\n",l);
    s=min(a,n);
    printf("smallest element in an array=%d\n",s);

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
int max(int a[],int n)
{
   int i;
   int maximum;
   maximum=a[0];
   for(i=1;i<n;i++)
    {
      if(a[i]>maximum)
      {
          maximum=a[i];
      }
    }
    return maximum;
}
int min(int a[],int n)
{
   int i;
   int minimum;
   minimum=a[0];
   for(i=1;i<n;i++)
    {
      if(a[i]<minimum)
      {
          minimum=a[i];
      }
    }
    return minimum;
}
