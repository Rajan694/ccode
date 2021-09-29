#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char ch[10];
int i=0,j;
clrscr();
printf("\nRajan Kumar\n1901330100213\n");
printf("Enter a string : ");
scanf("%s",&ch);
if(isalpha(ch[0])||ch[0]=='_')
i=1;
for(j=1;j<strlen(ch);j++)
{
if(ch[j]==' ' ||(!isalpha(ch[j])&&!isdigit(ch[j])))
{
i=0;
break;
}}
if(i==1)
printf("String is identifier");
else
printf("Not an identifier");
getch();
}
