// Write a menu driven program to implement basic arithmetic functions
// Using Switch-case and Functions

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,mul,div,op;
	int addition(int,int);
	int subtraction(int,int);
	int multiplication(int,int);
	int division(int,int);
	clrscr();
	printf("Menu of Operations:\n\n");
	printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n\n");
	printf("Enter your choice of opertion:\n");
	scanf("%d",&op);
	printf("Enter operand 1 \n");
	scanf("%d",&a);
	printf("Enter operand 2 \n");
	scanf("%d",&b);
	switch(op)
	{
	  case 1: add=addition(a,b);
		  printf("%d + %d is %d",a,b,add);
		  break;

	  case 2: sub=subtraction(a,b);
		  printf("%d - %d is %d",a,b,sub);
		  break;

	  case 3: mul=multiplication(a,b);
		  printf("%d * %d is %d",a,b,mul);
		  break;

	  case 4: div=division(a,b);
		  printf("%d / %d is %d",a,b,div);
		  break;

	  default: printf("Invalid choice");
	}
	getch();
}
int addition(int a,int b)
{
	return a+b;
}
int subtraction(int a,int b)
{
	return a-b;
}
int multiplication(int a,int b)
{
	return a*b;
}
int division(int a,int b)
{
	return a/b;
}














