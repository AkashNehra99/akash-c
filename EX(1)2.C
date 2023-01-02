// WAP to check whether the given number is even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num%2==0)
	printf("Number is even\n");
	else
	printf("Number is odd\n");
	getch();
}