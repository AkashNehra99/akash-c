// menu driven program for prime and armstrong number using switch
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int op,n,r,x,s=0,i,flag=0;
	clrscr();
	printf("MENU:\n\n");
	printf("1.Prime\n 2.Armstrong\n\n");
	printf("Enter your choice of operation:\n");
	scanf("%d",&op);
	printf("Enter the number\n");
	scanf("%d",&n);
	switch(op)
	{
	case 1: for(i=2;i<=sqrt(n);i++)
		{
		  if((n%i)==0)
		  {
		      flag=1;
		      break;
		  }
		}
		if(flag==0)
		  {
		    printf("Entered number is prime\n");
		  }
		else
		  {
		    printf("Entered number is not prime\n");
		  }
		break;
	case 2: x=n;
		while(x!=0)
		{
		 r=x%10;
		 s=s+r*r*r;
		 x=x/10;
		}
		if(s==n)
		   { printf("Armstrong number");}
		else
		   { printf("not a armstrong number");}
		break;

	default: printf("Invalid choice");
	}
		getch();
}