// Counting Sort

#include<stdio.h>
#include<conio.h>
#include<process.h>
void insert_Array(int a[],int n)
{
  int i;
  printf("Enter the elements of array:\n ");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
}
void countingSort(int a[],int k,int b[],int length)
{
  int c[20],i,j;
  for(i=0;i<=k;i++)
  {
    c[i]=0;
  }
  for(j=1;j<=length;j++)
  {
    c[a[j]] = c[a[j]]+1; // c array if frequency of all element of array
  }
  for(i=1;i<=k;i++)
  {
    c[i] = c[i]+c[i-1]; // commulative frequency
  }
  for(j=length;j>=1;j--)
  {
    b[c[a[j]]] = a[j];
    c[a[j]] = c[a[j]]-1;
  }
}
void display(int a[],int n)
{
  int i;
  printf("Array elements are:\n");
  for(i=1;i<=n;i++)
  {
    printf("%d\t",a[i]);
  }
}

void main()
{
  int a[10],b[10];
  int k,num;
  clrscr();
  printf("Enter the size of array:\n ");
  scanf("%d",&num);
  printf("Enter the range of element:\n ");
  scanf("%d",&k);
  insert_Array(a,num);
  countingSort(a,k,b,num);
  display(b,num);
  getch();
}

