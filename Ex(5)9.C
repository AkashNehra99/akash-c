// program for is_digit() function

#include<stdio.h>
void main()
{
    int is_digit(int);
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    is_digit(n);
}
int is_digit(int n)
{
    if(n>=0 && n<=9)
        printf("Entered number is digit");
    else 
        printf("Entered number is not digit");
}
