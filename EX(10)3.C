// WAP to implement swap functions using call by reference
#include<stdio.h>
#include<conio.h>
void main()
{
  void swap(int *,int *);
  int a,b;
  a=4;
  b=10;
  printf("Before swap call a=%d b=%d\n",a,b);
  swap(&a,&b);
  printf("After swap call a=%d b=%d",a,b);
  getch();
}
void swap(int *x,int *y)
{
  int z;
  z=*x;
  *x=*y;
  *y=z;
}