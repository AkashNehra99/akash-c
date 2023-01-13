// Program to convert ocatal to hexadecimal and vice versa

#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,n;
    printf("MENU:\n\n");
    printf("Enter your choice:\n 1.To convert octal to hexadecimal\n 2.To convert hexadecimal to octal\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1: printf("Enter a number: ");
            scanf("%o",&n);
            printf("Your number in hexadecimal form is %x\n",n);
            break;
    
    case 2: printf("Enter a number: ");
            scanf("%x",&n);
            printf("Your number in octal form is %o\n",n);
            break;
            
    default: printf("Wrong choice");
    }
    getch();
}
