// program to check the given year is leap year or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter a year:\n");
	scanf("%d",&year);
	if(year%400==0||year%100!=0 && year%4==0)
		printf("%d is leap year",year);
	else
		printf("%d is not a leap year",year);
	getch();
}
