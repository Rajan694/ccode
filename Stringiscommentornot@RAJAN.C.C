#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
clrscr();
printf("Rajan Kumar  1901330100213\n");
printf("Enter string : ");
scanf("%s",str);
if(str[0]=='/'&& (str[1]=='/' || str[1]=='*'))
printf("String is comment");
else
printf("String isn't comment");
getch();
}
