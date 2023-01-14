// Program to get addition of digits of a number

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,r,s=0;
    clrscr();
    printf("Enter the number you want the digits addition of: ");
    scanf("%d",&n);
    while(n!=0)
    {
      r=n%10;
      s=s+r;
      n=n/10;
    }
    printf("Addition of the entered digits of a number is %d",s);
    getch();
}
