#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter the number");
scanf("%d",&num);
if(num>0)
printf("Positive number");
else if(num<0)
printf("Negative num");
else
printf("Zero");
getch();
}
