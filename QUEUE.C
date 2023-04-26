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
  int isoverflow(QUEUE q);
  int isunderflow(QUEUE q);
  QUEUE q;
  int ch,item;
  clrscr();
  q.front=q.rear=-1;
  while(1)
  {
    printf("1.Insert element in queue  2.Delete element  3.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1: if(isoverflow(q))
		printf("Queue is empty\n");
	     else{
	     printf("Enter the element to insert: ");
	     scanf("%d",&item);
	     enqueue(&q,item);
	     }
	     break;
     case 2: if(isunderflow(q))
		printf("Queue is empty\n");
	     else
		printf("The dequeued element is %d\n",dequeue(&q));
	     break;
     case 3: exit(1);
     default: printf("Wrong choice\n");
    }
  }
}
void enqueue(QUEUE *q,int item)
{
  if(q->front==-1)
  {
   q->front=0;
   q->rear=0;
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
int isoverflow(QUEUE q)
{
  if(q.a[q.rear]==MAX-1)
    return 1;
  else
    return 0;
}
int isunderflow(QUEUE q)
{
  if(q.rear==-1)
    return 1;
  else
    return 0;
}

