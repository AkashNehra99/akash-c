// to_upper() -> to convert given character into upper case

#include<stdio.h>
#include<conio.h>
void main()
{
    char c,C;
    char to_upper(char);
    clrscr();
    printf("Enter a character in lower case: ");
    scanf("%c",&c);
    C=to_upper(c);
    printf("Your character in upper case will be: %c",C);
    getch();
}
char to_upper(char x)
{
  char y;
  y=x-32;
  return y;
}
