#include<stdio.h>
#include<conio.h>
void main()
{
int n,dig,sum=0;
clscr();
while(n>0)
dig=n%10;
sum=sum+dig;
n=n/10;
getch();
}
