#include<stdio.h>
void palindrome(int);
int main()
{

int n;
printf("enter value of n\n");
scanf("%d",&n);
palindrome(n);
}
void palindrome(int n)
{
int temp,s=0,r,rev=0;
temp=n;
while(n!=0)
    {
      r=n%10;
      s=(s*10)+r;
n/=10;
    }
if(temp==s)
printf("given number is palindrome");
else
printf("Given number is not a palindrome");
return 0;
}
