// factorial(n) function program to calculate factorial of n

#include<stdio.h>
void main()
{
    int factorial(int);
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of a number is: %d",factorial(n));
}
int factorial(int x)
{
   int i,y=1;
   for(i=1;i<=x;i++)
   {
       y=y*i;
   }
   return y;
}
