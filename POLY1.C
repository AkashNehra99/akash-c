// Polynomial addition program

#include<stdio.h>
#include<conio.h>
typedef struct POLY
{
  int coeff,power;
  struct poly *next;
}poly;
void main()
{
  void insertion(poly**, int,int);
  void traversing(poly*);
  void addition(poly**, poly*, poly*);
  poly *p1,*p2,*p3;
  int t,c,co,po;
  clrscr();

  p1=p2=p3=NULL;
  printf("Enter polynomial one\n");
  printf("how many terms of polynomial p1: ");
  scanf("%d",&t);
  printf("please enter the polynomial in higher order\n");
  for(c=1;c<=t;c++)
  {
   printf("Enter coefficient of term %d: ",c);
   scanf("%d",&co);
   printf("Enter power of term %d: ",c);
   scanf("%d",&po);
   insertion(&p1,co,po);
  }
  traversing(p1);
  printf("\n");
  printf("Enter polynomial second\n");
  printf("how many terms in second polynomial: ");
  scanf("%d",&t);
  printf("please enter the polynomial in higher order\n");
  for(c=1;c<=t;c++)
  {
   printf("Enter coefficient of term %d: ",c);
   scanf("%d",&co);
   printf("Enter power of term %d: ",c);
   scanf("%d",&po);
   insertion(&p2,co,po);
  }
  traversing(p2);
  printf("\n");
  addition(&p3,p1,p2);
  printf("Result after addition: ");
  traversing(p3);
  getch();
}
void insertion(poly **h,int c,int p)
{
  poly *temp;
  temp=(poly*)malloc(sizeof(poly));
  temp->coeff=c;
  temp->power=p;
  temp->next=*h;
  *h=temp;
}
void traversing(poly *head)
{
  printf("\n");
  while(head!=NULL)
  {
   printf("%dx^%d+",head->coeff,head->power);
   head=head->next;
  }
  printf("\b");
}

void addition(poly **h3,poly *h1,poly *h2)
{
  poly *t;
  while((h1!=NULL)&&(h2!=NULL))
  {
   if(h1->power==h2->power)
   {
    insertion(h3,h1->coeff+h2->coeff,h1->power);
    h1=h1->next;
    h2=h2->next;
   }
   else if(h1->power > h2->power)
   {
    insertion(h3,h1->coeff,h1->power);
    h1=h1->next;
   }
   else if(h2->power > h1->power)
   {
    insertion(h3,h2->coeff,h2->power);
    h2=h2->next;
   }
  }

  /*t=*h3;
  while(t->next!=NULL) // traverse resultant polynomial till last node
  {
   t=t->next;
   if(h1==NULL && h2!=NULL)
   {
    t->next=h2; // concatenation second polynomial with resulant polynomial
   }
   else if(h2==NULL && h1!=NULL)
   {
    t->next=h1; // concatenation first polynomial with resultant polynomial
   }
  }
*/
        t=*h3;
        while(t->next!=NULL)
            t=t->next;
        if(h1!=NULL)
            t->next=h1;
        else
            t->next=h2;
}



