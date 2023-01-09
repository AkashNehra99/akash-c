// Program to calculate factorial using loops concept

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    int y=1;
    clrscr();
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      y=y*i;
    }
    printf("Factorial of %d is %d",n,y);
    getch();
}

