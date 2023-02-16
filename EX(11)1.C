// To calculate the length of the string using own function
#include<stdio.h>
#include<conio.h>
//#include<string.h>
void main()
{
    char a[20];
    void mystrlen(char []);
    printf("Enter a string: ");
    gets(a);
    mystrlen(a);
    getch();
}
void mystrlen(char x[])
{
  int i;
  for(i=0;x[i]!='\0';i++);
  printf("%d",i);
}

