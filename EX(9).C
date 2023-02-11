// WAP to multiply two matrix
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,r2,c1,c2;
    void input(int [10][10],int,int);
    void output(int [10][10],int,int);
    void mul(int [10][10],int [10][10],int [10][10],int,int,int);
    clrscr();
    printf("Enter rows of matrix 1: ");
    scanf("%d",&r1);
    printf("Enter column of matrix 1: ");
    scanf("%d",&c1);
    printf("Enter rows of matrix 2: ");
    scanf("%d",&r2);
    printf("Enter column of matrix 2: ");
    scanf("%d",&c2);
    input(a,r1,c1);
    input(b,r2,c2);
    mul(a,b,c,r1,c1,c2);
    output(c,r1,c2);
    getch();
}
void input(int x[10][10],int r1,int c1)
{
   int i,j;
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
       printf("Enter value %d%d ",i,j);
       scanf("%d",&x[i][j]);
     }
   }
}
void output(int y[10][10],int r1,int c2)
{
   int i,j;
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c2;j++)
     {
       printf("%d\t",y[i][j]);
     }
     printf("\n");
   }
}
void mul(int a[10][10],int b[10][10],int c[10][10],int r1,int c1,int c2)
{
   int i,j,k;
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c2;j++)
     {
       c[i][j]=0;
       for(k=0;k<c1;k++)
       {
	 c[i][j]+=a[i][k]*b[k][j];
       }
     }
   }
   printf("\nMultiplication of matrix is: \n");
}