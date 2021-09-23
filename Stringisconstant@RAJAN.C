#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i,a=0;
char ch[20];
clrscr();
printf("Rajan Kumar\n1901330100213");
printf("Enter a string :");
scanf("%s",&ch);
for(i=0;i<strlen(ch);i++)
{
if(isalpha(ch[i]))
{a=1;
break;}
else
continue;
}
if(a==0)
printf("\nString is constant") ;
else
printf("\nString is not constant");
getch();
}



