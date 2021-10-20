#include<stdio.h>
#include<conio.h>
#include<conio.h>
void main()
{
int i=0,j=0,k=0;
char str[20],id[30],op[30];
clrscr();
printf("Enter string : ");
gets(str);
while(str[i]!='\0')
{ if(isalnum(str[i]))
  {  id[j]=str[i];
     j++;
  }
   else
     { op[k]=str[i];
       op[k+1]=',';
       id[j]=',';
       j++;
       k+=2;
     }
     i++;
}
id[j-1]='\0';
op[k-1]='\0';
printf("Identifiers re : ");
puts(id);
printf("Opertors re : ");
puts(op);
getch();
}