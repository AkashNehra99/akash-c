// is_upper function program

#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    void is_upper(char);
    printf("Enter a character: ");
    scanf("%c",&c);
    is_upper(c);
    getch();
}
void is_upper(char x)
{
    if(x>='A'&&x<='Z')
      printf("Character is in upper case");
    else
      printf("Character is not in upper case");
}
