// to_lower() -> to convert given character into upper case

#include<stdio.h>
#include<conio.h>
void main()
{
    char c,C;
    char to_lower(char);
    clrscr();
    printf("Enter a character in upper case: ");
    scanf("%c",&c);
    C=to_lower(c);
    printf("Your character in lower case will be: %c",C);
    getch();
}
char to_lower(char x)
{
  char y;
  y=x+32;
  return y;
}
