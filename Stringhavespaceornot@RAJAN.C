#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
char ch[10];
int flag,count=0,i;
clrscr();
printf("\nRajan Kumar\n1901330100213\n");
printf("Enter a string : ");
gets(ch);
for (i=0;ch[i]!='\0';i++)
{ if( ch[i]==' ')
  count++;
}
if(count>0)
printf("String has spaces.\nNo. of spaces are = %d",count);
else
printf("Spaces are not present");
getch();
}
