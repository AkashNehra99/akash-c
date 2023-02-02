//fib(n) using recursive function 

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    int fib(int n);
    clrscr();
    printf("which term you want of fibonacci series:\n");
    scanf("%d",&n);
    printf("Fibonacci term is %d",fib(n));
    getch();
}
int fib(int n)
{
    if(n==1)
      return 1;
    else if(n==2)
      return 1;
    else
      return (fib(n-1)+fib(n-2));
}
