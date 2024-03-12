#include<stdio.h>
void pattern(int);
main()
{
int n;
printf("enter the value of n\n");
scanf("%d",&n);
pattern(n);
}
void pattern(int m)
{
int i,j;
for(i=1;i<=m;i++)
    {
for(j=0;j<i;j++)
        {
printf("%d",i);
        }
printf("\n");
    }
}
