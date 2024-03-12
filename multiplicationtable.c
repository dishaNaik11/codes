#include<stdio.h>
void mult_table(int);
int main()
{

int n;
printf("enter value of n\n");
scanf("%d",&n);
mult_table(n);
}
void mult_table(int n)
{
int i;
printf("%d multiplication table is...\n",n);
for(i=1;i<=10;i++)
   {
printf("%d*%d=%d\n",n,i,n*i);
   }
}
