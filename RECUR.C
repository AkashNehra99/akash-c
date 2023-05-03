
#include<stdio.h>
#include<conio.h>
static int i=0;
void main()
{
  int fact(int);
  int fib(int);
  int binarySearch(int [],int, int, int);
  void toh(char, char, char, int);
  int A[10],ch,fa,fi;
  int Lb=0,Ub=10;
  int item,mid,n;
  char a='a',b='b',c='c';
  clrscr();
  printf("1.Factorial  2.Fibonacci  3.Binary Search  4.Tower of Hanoi\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("Enter the number you want the factorial of: ");
	   scanf("%d",&fa);
	   //fact(fa);
	   printf("Factorial is %d\n",fact(fa));
	   break;
   case 2: printf("Enter the number of fibonacci terms you want: ");
	   scanf("%d",&fi);
	   printf("Fibonacci terms are: ",fib(fi));
	   break;
   case 3: printf("Enter the item to search: ");
	   scanf("%d",&item);
	   binarySearch(A,Lb,Ub,item);
	   break;
   case 4: printf("Tower of Hanoi\n");
	   printf("Enter the number of discs: ");
	   scanf("%d",&n);
	   toh(a,b,c,n);
	   printf("Number of times TOH function called is %ld",i);
	   break;
   default: printf("Wrong choice\n");
  }
  getch();

}
int binarySearch(int A[10],int lb,int ub,int item)
{
  int mid;
    mid = (lb+ub)/2;
    if(lb>ub)
    {
      printf("not possible\n");
    }
    else if(A[mid] == item)
    {
      printf("Middle item is %d",item);
    }
  if(A[mid] > item)
    binarySearch(A,lb,mid-1,item);
  else if(A[mid] < item)
    binarySearch(A,mid+1,ub,item);
}
int fact(int n)
{
  if(n==0)
    return 1;
  else
    return n* fact(n-1);
}
int fib(int n)
{
  if(n==1 || n==2)
    return 1;
  else
    return fib(n-1) + fib(n-2);
}
void toh(char a,char b, char c, int n)
{
  i++;
  if(n==1)
  {
    printf("move disc %c to %c\n",a,b);
    return;
  }
  else
  {
    toh(a,c,b,n-1);
    printf("move disc %c to %c\n",a,b);
    toh(c,b,a,n-1);
  }
}
