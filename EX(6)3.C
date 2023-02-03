// Ackerman Recursive function

#include<stdio.h>
void main()
{
    int m,n;
    int A(int,int);
    clrscr();
    printf("Enter number 1:\n");
    scanf("%d",&m);
    printf("Enter number 2:\n");
    scanf("%d",&n);
    printf("output: %d",A(m,n));
    getch();
}
int A(int m,int n)
{
    if(m==0)
      return n+1;
    else if(n==0)
      return A(m-1,1);
    else
      return A(m-1,A(m,n-1));
}
