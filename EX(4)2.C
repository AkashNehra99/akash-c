// Program to convert decimal to hexadecimal or vice versa.

#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,n;
    clrscr();
    printf("Menu:\n\n");
    printf("Enter your choice:\n 1.to convert decimal to hexadecimal\n 2.To convert hexadecimal to decimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
     printf("Enter a number");
     scanf("%d",&n);
     printf("number in hexadecimal form is %x\n",n);
     break;

    case 2:
     printf("Enter a number");
     scanf("%x",&n);
     printf("number in decimal form is %d\n",n);
     break;

     default: printf("Wrong choice");
    }
    getch();
