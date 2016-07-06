#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("Enter the year");
scanf("%c",&yr);
if(yr%4==0)
printf("Leap year");
else
printf("Not leap year");
getch();
}
