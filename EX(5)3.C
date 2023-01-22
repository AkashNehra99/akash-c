#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,Ans;
    int nCr(int,int);
    printf("Enter the vlaue of n\n");
    scanf("%d",&n);
    printf("Enter the value of r\n");
    scanf("%d",&r);
    Ans=nCr(int n,int r);
    printf("%d",Ans);
    getch();
}
int nCr(int n,int r)
{
    int f;
    int factorial(int);
    f=factorial(n)/(factorial(r)*factorial(n-r));
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
