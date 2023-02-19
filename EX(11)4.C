// to compare one string to another
#include<stdio.h>
#include<conio.h>

void main()
{
    char a[20],b[20];
    void mystrcmp(char [],char []);
    printf("Enter string 1: ");
    gets(a);
    printf("Enter string 2: ");
    gets(b);
    mystrcmp(a,b);
    getch();
}
void mystrcmp(char s[],char r[])
{
  int i,x;
  for(i=0;r[i]!='\0';i++)
  {
    x=s[i]-r[i];
  }
  printf("%d",x);
}
