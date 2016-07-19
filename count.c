#include<stdio.h>
void main()
{
int n,count=0,temp;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
count++;
n=n/10;
}
printf("The count is:",count);
}
