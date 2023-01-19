// is_prime()
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n;
    void is_prime(int n);   //Declaration
    clrscr();
    printf("Enter a number:\n");
    scanf("%d",&n);
    is_prime(n);
    getch();
}
void is_prime(int n)
{
    int i,flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
      if(n%i==0)
	 flag=1;
	 break;
    }
    if(flag==0)
      {printf("Prime number");}
    else
       printf("Not prime");
}
