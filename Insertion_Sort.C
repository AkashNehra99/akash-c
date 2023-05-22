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
  for(i=1;i<n;i++)
  {
    key=a[i];
    j=i-1;
    while(j>=0&&a[j]>key)
    {
      a[j+1]=a[j];
      j=j-1;
    }
    a[j+1]=key;
  }
}
void display(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  printf("\n");

}
