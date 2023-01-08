// Program to print the Fibonacci Series using loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,c;
    int a=1,b=0;
    clrscr();
    printf("Enter how many elements you want in the Fibonacci Series\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      c=a+b;
      printf("%d  ",c);
      a=b;
      b=c;
    }
    getch();
}