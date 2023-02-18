// to copy of one string to another
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    void mystrcpy(char [],char []);
    printf("Enter string 1: ");
    gets(a);
    printf("Enter string 2: ");
    gets(b);
    mystrcpy(a,b);
    getch();
}
void mystrcpy(char r[],char s[])
{
  int i;
  for(i=0;s[i]!='\0';i++)
  {
    r[i]=s[i];
  }
  r[i]='\0';
  printf("%s",r);
}

