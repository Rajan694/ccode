#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[10];
clrscr();
printf("\nRajan Kumar\n1901330100213\n");
printf("Enter a string : ");
scanf("%s",str);
if(str[0]=='a'&&str[(strlen(str)-1)]=='b')
printf("Valid string");
else
printf("Invalid string");
getch();
}
