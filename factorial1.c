#include<stdio.h>
#include<math.h>
void factorial(int);
int main()
{
int n;
printf("enter number\n");
scanf("%d",&n);
factorial(n);
}
void factorial(int m)
{
int fact=1;
int i=1;
if(m>=0)
    {
for(i=1;i<=m;i++)
    {
fact=fact*i;

    }
printf("%d!=%d",m,fact);
    }
else
printf("invalid input value\n");

}
