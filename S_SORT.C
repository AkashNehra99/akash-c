// Selection Sort
#include<stdio.h>
#include<conio.h>
# define n 5
void main()
{
  void SelectionSort(int []);
  int a[n],i;
  clrscr();
  printf("Enter array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Array is: ");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\n");
  printf("Array in ascending order:\n");
  SelectionSort(a);
  getch();
}
void SelectionSort(int a[])
{
  int min,minindex,i,j,temp;
  for(i=0;i<n-1;i++)
  {
    min=a[i];
    minindex=i;
    for(j=i+1;j<n;j++)
    {
      if(min>a[j])
      {
	min=a[j];
	minindex=j;
      }
    }
      if(i!=minindex)
      {
	temp = a[i];
	a[i] = a[minindex];
	a[minindex] = temp;
      }
    }

  printf("Now array is:\t");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}


