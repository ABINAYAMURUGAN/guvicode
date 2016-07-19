#include<stdio.h>
void main()
{
int n=179,flag=0,i;
for(i=2;i<n;i++)
{
if(n%i==0)
flag=1;
}
if(flag==0)
printf("Prime");
else if(flag==1)
printf("Not prime");
}
