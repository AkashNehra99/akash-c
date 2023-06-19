#include<stdio.h>
#include<conio.h>
void MergeSort(int A[],int p,int r)
{
  int q;
  void Merge(int [], int,int,int);
  if(p<r)
  {
  q=(p+r)/2;
  MergeSort(A,p,q);
  MergeSort(A,q+1,r);
  Merge(A,p,q,r);
  }
}

void Merge(int A[],int p,int q,int r)
{
  int i,j,k;
  int n1=q-p+1;
  int n2=r-q;
  int L[20], R[20];
  for(i=1; i<=n1; i++)
      L[i] = A[p+i-1];
  for(j=1; j<=n2; j++)
      R[j] = A[q+j];
  L[n1+1] = 9999;
  R[n2+1] = 9999;
  i=1;
  j=1;
  for(k=p; k<=r; k++)
  {
    if(L[i] <= R[j]){
      A[k] = L[i];
      i = i++;
      }
  else{
    A[k] = R[j];
    j = j++;
   }
  }
  //printArray(int A[],int n);
}

void main()
{
  int i,n,p,r;
  int A[20];
  clrscr();
  printf("Enter the size of the Array: ");
  scanf("%d",&n);
  p=1;
  r=n;
  for(i=1; i<=n; i++)
    scanf("%d",&A[i]);
  printf("Array is: ");
  for(i=1; i<=n; i++)
	printf("%d  ",A[i]);
  printf("\n");
  printf("After merge sort: ");
  MergeSort(A,p,r);
    for(i=1; i<=n; i++)
	printf("%d  ",A[i]);
  getch();
}