// Program to implement multi-dimensional arrays in c language

#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,sub,sum;
  int *x,*y;
  a=4;
  b=10;
  x=&a;
  y=&b;
  x=x+1;
  y=y-1;
  sum= *x + *y;
  sub= *x - *y;
  printf("%d",x);
  printf("%d",y);
  printf("%d",sum);
  printf("%d",sub);
}
  
