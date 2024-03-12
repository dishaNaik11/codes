#include<stdio.h>
void Reverse(int);
int main()
{

int n;
printf("enter value of n\n");
scanf("%d",&n);
Reverse(n);
}
void Reverse(int n)
{
int rev=0;
while(n!=0)
    {
rev=(rev*10)+(n%10);
n=n/10;
    }
printf("Reverse of a given number=%d",rev);
}

