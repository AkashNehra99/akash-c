// program to read a single dimension array and print using functions
// findminimum(),findmaximum(),findsumofarray()
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],size;
    void inputarray(int[],int);
    void findminimum(int a[],int size);
    void findmaximum(int a[],int size);
    void findsumofarray(int a[],int size);
    clrscr();
    printf("Enter the size of array: ");
    scanf("%d",&size);
    inputarray(a,size);
    findminimum(a,size);
    findmaximum(a,size);
    findsumofarray(a,size);
    getch();
}
void inputarray(int a[],int n)
{
  int i;
  printf("Enter elements of array;\n");
  for(i=0;i<n;i++)
  {
    printf("Enter value %d ",i+1);
    scanf("%d",&a[i]);
  }
}
void findminimum(int a[],int n)
{
  int min,i;
  min=a[0];
  for(i=0;i<n;i++)
  {
    if(min>a[i])
    min=a[i];
  }
  printf("Minimum = %d\n",min);
}
void findmaximum(int a[],int n)
{
  int max,i;
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(max<a[i])
    max=a[i];
  }
  printf("Maximum = %d\n",max);
}
void findsumofarray(int a[],int n)
{
  int sum=0,i;
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  printf("Sum = %d",sum);
}
