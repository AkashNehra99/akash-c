// AKASH NEHRA
// WAP to calculate the insurance based upon the given condition
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	int age;
	float amount,disc=0,addl=0,final_amount;
	char gender,smoker;
	clrscr();
	printf("Enter your age: \n");
	scanf("%d",&age);
	printf("Enter your gender:\n");
	fflush(stdin);
	scanf("%c",&gender);
	printf("Press y if you are smoker and n if you don't smoke\n");
	fflush(stdin);
	scanf("%c",&smoker);
	if(age>=21&&age<=30)
	{
	  amount=10000;
	}
	else if(age>=31&&age<=40)
	{
	  amount=15000;
	}
	else if(age>=41&&age<=50)
	{
	  amount=20000;
	}
	else if(age>=51&&age<=60)
	{
	  amount=40000;
	}
	else
	{
	  printf("No insurance\n");
	  getch();
	  exit(1);
	}
	if(gender=='f')
	{
	  disc=amount*10/100;
	}
	if(smoker=='y')
	{
	  addl=amount*10/100;
	}
	final_amount=amount-disc+addl;
	printf("final amount %f",final_amount);
	getch();
}































