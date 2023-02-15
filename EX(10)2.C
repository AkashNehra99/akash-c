// WAP to get sum of elements of an array using pointers only

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,*b,sum=0;
    int a[5];
    b=&a[0];
    printf("Enter the elements to add: ");
    for(i=0;i<5;i++)
    {
      scanf("%d",b++);
    }
    b=&a[0];
    for(i=0;i<5;i++)
    {
      sum+=*(b++);
    }
    printf("\n%d",sum);
    getch();
}
