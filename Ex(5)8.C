// is_lower function program

#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    void is_lower(char);
    printf("Enter a character: ");
    scanf("%c",&c);
    is_lower(c);
    getch();
}
void is_lower(char x)
{
    if(x>='a'&&x<='z')
      printf("Character is in lower case");
    else
      printf("Character is not in lower case");
}
