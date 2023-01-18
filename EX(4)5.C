// WAP using scanf function to insert space into the string

#include<stdio.h>
#include<conio.h>
void main()
{
    char s[20];
    printf("Enter a string: ");
    scanf("%[^\n]s",s);
   // scanf("%s",s);
    printf("Your entered string is: %s",s);
    getch();
}