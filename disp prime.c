#include<stdio.h>
void main()
{
int n1,n2,i,j,flag=0;
for(i=n1;i<n2;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
flag=1;
}
if(flag==0)
printf("%d",i);
}
}
