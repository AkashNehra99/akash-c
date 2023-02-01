// Factorial(n) using recusrive functions

#include<stdio.h>
// #include<conio.h>
void main()
{
    int fact(int);
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
}
int fact(int n)
{
    if(n==0)
      return 1;
    else 
      return n*fact(n-1);
}
