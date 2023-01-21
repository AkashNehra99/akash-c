// is_armstrong

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    void is_armstrong(int);
    printf("Enter a number to check armstrong: ");
    scanf("%d",&n);
    is_armstrong(n);
    getch();
}
void is_armstrong(int n)
{
  int x,r,s=0;
  x=n;
  while(x!=0)
  {
    r=x%10;
    s=s+r*r*r;
    x=x/10;
  }
  if(n==s)
    printf("Entered number is arsmtrong");
  else
    printf("Entered number is not armstrong");
}
