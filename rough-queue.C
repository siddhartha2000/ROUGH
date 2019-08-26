#include<stdio.h>
#include<conio.h>
#define MAX 20

void enqueue(int q[],int *r);
void dequeue(int q[],int *f,int *r);
void display(int q[], int *f, int *r);

void main()
{
	int q[MAX],r=-1,f=0;
	int choice2;
	char choice1='y';
	clrscr();
	while(choice1=='y'||choice1=='Y')
	{
		printf("\n Enter choice of operation on queue: 1.ENQUEUE 2.DEQUEUE 3.DISPLAY:\n");
		scanf("%d",&choice2);
		if(choice2==1)
		{
			enqueue(q[MAX],r);
			display(q[MAX],f,r);
		}
		else if(choice2==2)
		{
			dequeue(q[],f,r);
			display(q[],f,r);
		}
		else if(choice2==3)
		{
			display(q[],f,r);
		}
		else
		printf("\n Wrong input");
		printf("\n WANT TO CONTINUE? yes/no:enter y for yes and n for no:\t");
		fflush(stdin);
		scanf("%s",&choice1);
	}
	getch();
}
void enqueue(int q[],int *r)
{
	int item;
	printf("Enter item \n");
	scanf("%d",&item);
	if(top>=(MAX-1))
	{
		printf("\n Stack Overflow");
	}
	else
	{
		printf("\nEnter element to be pushed:\t");
		scanf("%d",&stack[++top]);
	}
}
void pop()
{
	if(top<0)
	{
		printf("\n Stack Underflow");
	}
	else
	{
		top--;
		printf("\nThe popped element is: %d ",stack[top+1]);
	}
}
void display()
{
	int i=top;
	if(top<0)
	{
		printf("\nSTACK UNDERFLOW");
	}else
	{
		printf("\nTHE STACK HAS:\n");
		while(i>-1)
		{
			printf("\n %d ",stack[i]);
			i--;
		}
	}
}