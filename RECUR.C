#include<stdio.h>
#include<conio.h>
void main()
{
    int num,s;
    int sum(int);
    clrscr();
    printf("Enter a number:\n");
    scanf("%d",&num);
    s=sum(num);
    printf("The sum of %d numbers is %d",num,s);
    getch();
}
    int sum(int n)
    {
      if(n==0)
	  return 0;
      else if(n==1)
	  return 1;
      else
	  return sum(n-1)+n;
    }

