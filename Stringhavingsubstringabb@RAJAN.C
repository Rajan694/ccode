#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,k,flag=0;
char str[10];
clrscr();
printf("\nRajan Kumar\n1901330100213\n");
printf("Enter a string : ");
scanf("%s",str);
for(i=0;i<strlen(str);i++)
{
if(str[i]=='a'){
if(str[i+1]=='b'){
if(str[i+2]=='b'){
flag=1;
}
else
continue;
}
}
}
if(flag==1)
printf("Valid string");
else
printf("Invalid string");
getch();
}
