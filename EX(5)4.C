#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,Ans;
    int nPr(int,int);
    printf("Enter the vlaue of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    Ans = nPr(n,r);
    printf("%d",Ans);
    getch();
}
int nPr(int n,int r)
{
    int f;
    int factorial(int);
    f=factorial(n)/factorial(n-r);
    return f;
}
int factorial(int x)
{
    int y=1,i;
    for(i=1;i<=x;i++)
    {
      y=y*i;
    }
    return y;
}
