#define MAX 10
#include<stdio.h>
#include<conio.h>
typedef struct queuetype
{
  int a[MAX];
  int front,rear;
}QUEUE;
void main()
{
  void enqueue(QUEUE *q,int);
  int dequeue(QUEUE *q);
  //int isoverflow(QUEUE q);
  //int isunderflow(QUEUE q);
  QUEUE q;
  int ch,item;
  clrscr();
  q.front=q.rear=-1;
  while(1)
  {
    printf("1.Insert element at beginning  2.Delete from first\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1: printf("Enter the element to insert: ");
	     scanf("%d",&item);
	     enqueue(&q,item);
     case 2: printf("The dequeued element is %d\n",queue(&q));
     case 3: exit(1);
     default: printf("Wrong choice\n");
    }
  }
}
void enqueue(QUEUE *q,int item)
{
  if(q->front==-1)
  {
   q->front=q->rear=0;
   q->a[q->rear]=item;
  }
  else if(q->rear<MAX-1)
  {
   q->rear=q->rear+1;
   q->a[q->rear]=item;
  }
  else if(q->front>0 && q->rear==MAX-1)
  {
   int i;
   for(i=q->front;i<=q->rear;i++)
   {
    q->a[i-q->front]=q->a[i];
   }
   q->rear=q->rear-q->front;
   q->front=0;
   q->rear=q->rear+1;
   q->a[q->rear]=item;
  }
}
int dequeue(QUEUE *q)
{
  int item;
  item=q->a[q->front];
  if(q->front==q->rear)
    q->front=q->rear=-1;
  else
    q->front=q->front+1;
  return item;
}

