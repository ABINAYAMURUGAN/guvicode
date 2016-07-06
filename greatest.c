#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a");
scanf("%d",&a);
printf("Enter b");
scanf("%d",&b);
printf("Enter c");
scanf("%d",&c);
if(a>b && a>c)
printf("A is greater");
else if(b>c && b>a)
printf("B is greater");
else
printf("c is greater");
getch();
}
