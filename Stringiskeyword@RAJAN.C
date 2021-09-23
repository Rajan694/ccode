#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char ch[20],con[20][30]={"int","printf","getch","char","main","void","private","public","float","char","double","long","if","while","else"};
int i,a=0;
clrscr();
printf("Rajan Kumar\n1901330100213\n");
printf("Enter a string :");
scanf("%s",ch);
for(i=0;i<8;i++)
{  if(strcmp(ch,con[i])==0)
   { a=1;
   break;
   }
   else
   continue;
 }
 if(a==1)
 printf("\nString is keyword");
 else
 printf("\nString is not keyword");
getch();
}


