// Write a menu driven program to check whether a given number is prime and Armstrong using switch and functions
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,a;
	int prime(int);
	int arm(int);
	clrscr();
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("2.Prime\n 1.Armstrong\n\n");
	printf("Enter your choice:\n");
	scanf("%d",&a);
	switch(a)
	{
       case 1: if(arm(n))
	      {
		printf("Number is armstrong\n");
	      }
		else
	      {
		printf("Number is not armstrong\n");
	      }
		break;
	case 2: if(prime(n))
		{
		printf("Number is prime");
		}
		else
		{
		printf("Number is not prime");
		}
		break;
	default: printf("Invalid choice");
	}
	getch();
}
int prime(int n)
{
    int i;
    for(i=2;i<sqrt(n);i++)
    {
      if(n%i==0)
      return 0;
    else
      return 1;
    }
}

int arm(int n)
{
   int n1,s,r,x;
   for(n1=1;n1<=1000;n1++)
    {
	s=0;
	x=n1;
	while(x!=0)
	{
	  r=n1%10;
	  s=s+r*r*r;
	  x=x/10;
	}
	if(s==n1)
	    return s;
    }
}