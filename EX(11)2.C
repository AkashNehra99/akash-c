// to get reverse of one string using own string function

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20];
    void myrevstr(char []);
    printf("Enter a string: ");
    gets(a);
    myrevstr(a);
    getch();
}
void myrevstr(char s[])
{
  int l,i,k;
  char c;
  l=strlen(s);
  for(i=0;i<l/2;i++)
  {
    k=l-i-1;
    c=s[k];
    s[k]=s[i];
    s[i]=c;
  }
  printf("%s",s);
}
