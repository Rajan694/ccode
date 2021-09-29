#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,flag=0;
char str[10];
clrscr();
printf("\nKaran Kanojia\n1901330100132\n");
printf("Enter a string : ");
scanf("%s",str);
for(i=0;i<strlen(str);i++)
{
if(str[i]=='a')
continue;
else{
flag=1;
}
}
if(flag==0)
printf("String is valid");
else
printf("String is invalid");
getch();
}