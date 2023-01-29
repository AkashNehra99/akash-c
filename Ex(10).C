// program for is_alphabet() function

#include<stdio.h>
void main()
{
    void is_alphabet(char);
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    is_alphabet(c);
}
void is_alphabet(char c)
{
    if((c>=65 && c<=90) || (c>=97&&c<=122))
        printf("Entered character is alphabet");
    else 
        printf("Entered character is not alphabet");
}
