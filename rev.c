#include<stdio.h>
void main()
{
int n,dig,rev=0,temp;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
dig=n%10;
rev=(rev*10)+dig;
n=n/10;
}
if(temp==rev)
printf("Palindrome");
else
printf("Not Palindrome");
}
