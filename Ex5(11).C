// power(x,y) x to the power y

#include<stdio.h>
void main()
{
  int b,p;
  int power(int,int);
  printf("Enter the base: ");
  scanf("%d",&b);
  printf("Enter the power: ");
  scanf("%d",&p);
  printf("%d",power(b,p));
}
int power(int x,int y)
{
  int i,ans=1;
  for(i=1;i<=y;i++)
  {
    ans*=x;
  }
return ans;
}
