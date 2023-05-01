#include<stdio.h>
#include<conio.h>
static int i=0;
void main()
{
  void TOH(char,char,char,int);
  int n,m;
  char a,b,c;
  a='a';
  b='b';
  c='c';
  clrscr();
  printf("Enter the number of discs: ");
  scanf("%d",&n);
  TOH(a,b,c,n);
  printf("Number of times TOH function called is %d",i);
  getch();

}
void TOH(char a,char b, char c, int n)
{
  i++;
  if(n==1)
  {
    printf("move disc %c to %c\n",a,b);
    return;
  }
  else
  {
    fflush(stdin);
    TOH(a,c,b,n-1);
    printf("move disc %c to %c\n",a,b);
    TOH(c,b,a,n-1);
  }
}