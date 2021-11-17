#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];

clrscr();
printf("\nRajan Kumar\n1901330100213\n");
printf("Enter production rules : ");
gets(ch);
if(ch[0]==ch[3])
{  putch(ch[0]);
   printf("->");
   putch(ch[strlen(ch)-1]);
   printf("A'\nA'->");
   printf("%c",ch[4]);
   puts("A'|null");
   }
   else
   puts("No left recursion");

getch();
}