#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,n;
    clrscr();
    printf("Menu:\n\n");
    printf("Enter your choice:\n 1.to convert decimal to octal\n 2.To convert octal to decimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
     printf("Enter a number");
     scanf("%d",&n);
     printf("number in octal form is %o\n",n);
     break;

    case 2:
     printf("Enter a number");
     scanf("%o",&n);
     printf("number in decimal form is %d\n",n);
     break;

     default: printf("Wrong choice");
    }
    getch();
}