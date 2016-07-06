#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter the character");
scanf("%c",&c);
if(isalpha(c))
printf("Alphabet");
else
printf("Not alphabet");
getch();
}
