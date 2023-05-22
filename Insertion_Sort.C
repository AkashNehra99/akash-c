// Insertion Sort

#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int);
void display(int a[],int);
void main()
{
  int a[5],i;
  int n=5;//=sizeof(a)/sizeof(a[0]);
  clrscr();
  for(i=0;i<5;i++)
    scanf("%d",&a[i]);
  insertionsort(a,n);
  display(a,n);
  getch();
}
void insertionsort(int a[],int n)
{
  int i,key,j;
  for(j=1;j<n;j++)
  {
    key=a[j];
    i=j-1;
    while(i>=0&&a[i]>key)
    {
      a[i+1]=a[i];
      i=i-1;
    }
    a[i+1]=key;
  }
}
void display(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  printf("\n");

}
