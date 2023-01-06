// Menu driven program using switch case 
// Program for Factorial,power(), sum of digits using functions 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,b,p,f,N,op;
	int fact(int);
	int power(int,int);
	int sumofdigit(int);
	clrscr();
	printf("Menu:\n\n");
	printf("1.Factorial\n 2.Power(x,y)\n 3.Addition of digits of a number\n\n");
	printf("Enter your choice of operation:\n");
	scanf("%d",&op);
	switch(op)
	{
	case 1: printf("Enter a number:\n");
		scanf("%d",&n);
		f=fact(n);
		printf("Factorial of %d is %d",n,f);
		break;
	case 2: printf("Enter the base :\n");
		scanf("%d",&b);
		printf("Enter the power :\n");
		scanf("%d",&p);
		printf("%d to the power %d is %d",b,p,power(b,p));
		break;
	case 3: printf("Enter a number:\n");
		scanf("%d",&N);
		printf("The addition of the digits is %d",sumofdigit(N));
		break;
	}
	getch();
}
int fact(int n)
{
  int y=1,i;
  for(i=1;i<=n;i++)
  {
   y=y*i;
  }
  return y;
}

int power(int b,int p)
{
  int i,ans=1;
  for(i=1;i<=p;i++)
  {
  ans=ans*b;
  }
  return ans;
}

int sumofdigit(int N)
{
  int a,sum=0;
  while(N!=0)
  {
   a=N%10;
   sum=sum+a;
   N=N/10;
  }
  return sum;
}
