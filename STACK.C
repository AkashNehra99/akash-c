#define MAX 10
#include<stdio.h>
#include<conio.h>
typedef struct stacktype
{
  int a[MAX];
  int top;
}STACK;
void main()
{
  int isoverflow(STACK);
  int isunderflow(STACK);
  void push(STACK*,int);
  int pop(STACK*);
  int peep(STACK);
  STACK s;
  int ch,item;
  clrscr();
  s.top=-1;
  while(1)
  {
    printf("Operations: 1.Push  2.Pop  3.Peep  4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1: if (isoverflow(s))
		printf("Stack overflow\n");
	     else{
		printf("Enter item to be pushed: ");
		scanf("%d",&item);
		push(&s,item);
		}
		break;
     case 2: if (isunderflow(s))
	       printf("Stack underflow\n");
	     else{
	     item=pop(&s);
	     printf("Pop item is %d\n",item);
	     }
	     break;
     case 3: item=peep(s);
	     printf("The top of the stack has %d\n",item);
	     break;
     case 4: exit(1);
     default: printf("Wrong choice\n");
    }
  }
}
int isoverflow(STACK s)
{
  if(s.top==MAX-1)
    return 1;
  else
    return 0;
}
int isunderflow(STACK s)
{
  if(s.top==-1)
    return 1;
  else
    return 0;
}
int peep(STACK s)
{
  return s.a[s.top];
}
void push(STACK *stk,int item)
{
  stk->top=stk->top+1;
  stk->a[stk->top]=item;
}
int pop(STACK *stk)
{
  int item;
  item=stk->a[stk->top];
  stk->top=stk->top-1;
  return item;
}

