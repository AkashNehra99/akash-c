#include<stdio.h>
#include<conio.h>
void QuickSort(int A[],int p,int r)
{
  int q;
  if(p<r)
  {
    q=partition(A,p,r);
    QuickSort(A,p,q-1);
    QuickSort(A,q+1,r);
  }
}
int partition(int A[],int p,int r)
{
  int temp,i,j,x,t;
  x=A[r];
  i=p-1;
  for(j=p; j<=r-1; j++)
  {
    if(A[j]<=x)
    {
      i=i+1;
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
  }
  t=A[i+1];
  A[i+1]=A[r];
  A[r]=t;
  return i+1;
}
void printArray(int A[],int n)
{
  int i;
  for(i=0; i<n; i++)
  {
    printf("%d\t",A[i]);
  }
}
void main()
{
  int A[20];
  int i,n,p,r;
  clrscr();
  p=0;
  printf("Enter the size of Array: ");
  scanf("%d",&n);
  r=n-1;
  printf("Enter array elements:\n");
  for(i=0; i<n; i++)
  {
    scanf("%d",&A[i]);
  }
  QuickSort(A,p,r);
 // partition(A,p,r);
  printArray(A,n);
  getch();
}
