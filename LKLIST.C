#include<stdio.h>
#include<conio.h>
#include<process.h>
typedef struct lklist
{
  int info;
  struct lklist *next;
}node;
void main()
{
  void insert_at_beg(node **,int);
  void insert_at_end(node **,int);
  void traverse(node *);
  void delete_at_beg(node **);
  int choice,item;
  node *head=NULL;
  clrscr();
  while(1)
  {
    printf("1.Insert at beginning ");
    printf("2.Insert at end ");
    printf("3.Traverse ");
    printf("4.Delete at beginning ");
    printf("5.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: printf("Enter item: ");
	      scanf("%d",&item);
	      insert_at_beg(&head,item);
	      break;
      case 2: printf("Enter item");
	      scanf("%d",&item);
	      insert_at_end(&head,item);
	      break;
      case 3: if(head==NULL)
		{ printf("List is empty");}
	      else
		{ traverse(head); }
		 break;
      case 4: if(head==NULL)
	       { printf("List is empty"); }
	      else
	       { delete_at_beg(&head); }
	       break;
      case 5: exit(1);

      default: printf("Invalid choice");
    }
      getch();
  }
}
void insert_at_beg(node **start,int item)
{
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->info=item;
  if(*start==NULL)
  {
    temp->next=NULL;
  }
  else
  {
    temp->next=*start;
  }
  *start=temp;
}
void insert_at_end(node **start,int item)
{
  node *temp,*loc;
  temp=(node*)malloc(sizeof(node));
  temp->info=item;
  temp->next=NULL;
  if(*start==NULL)
  {
    *start = temp;
  }
  else
  {
    loc=*start;
    while(loc->next!=NULL)
    {
      loc=loc->next;
    }
    loc->next=temp;
  }
}
void traverse(node *start)
{
  while(start!=NULL)
  {
    printf("%d",start->info);
    start=start->next;
  }
}
void delete_at_beg(node **start)
{
  node *temp;
  temp=*start;
  *start=(*start)->next;
  free(temp);
}


