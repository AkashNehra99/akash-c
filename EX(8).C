// Program for sub,sum,transpose of the matrix

#include<stdio.h>
#include<conio.h>
void main()
{
    void input(int [10][10],int);
    void output(int [10][10],int);
    void sum(int [10][10],int [10][10],int [10][10],int);
    void sub(int [10][10],int [10][10],int [10][10],int);
    void trans(int [10][10],int [10][10],int);
    int a[10][10],b[10][10],c[10][10],n;
    printf("Enter size: ");
    scanf("%d",&n);
    input(a,n);
    input(b,n);
    sum(a,b,c,n);
    output(c,n);
    sub(a,b,c,n);
    output(c,n);
    trans(a,c,n);
    output(c,n);
    getch();
}
void input(int x[10][10],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter element %d%d: ",i,j);
      scanf("%d",&x[i][j]);
    }
  }
}

void output(int y[10][10],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",y[i][j]);
    }
    printf("\n");
  }
}
void sum(int a[10][10],int b[10][10],int c[10][10],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      c[i][j]=(a[i][j]+b[i][j]);
    }
  }
  printf("\n Sum is \n ");
}

void sub(int a[10][10],int b[10][10],int c[10][10],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      c[i][j]=(a[i][j]-b[i][j]);
    }
  }
  printf("\n Sub is \n");
}

void trans(int a[10][10],int c[10][10],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      c[i][j]=a[j][i];
    }
  }
  printf("\n Transpose is \n");
}
