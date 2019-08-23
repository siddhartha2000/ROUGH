#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define MAX 40

void push(char a);
void pop();
void display();
int precedence(char c);
void infixtopostfix(char b);
char operators[MAX];
int top=-1;

void main()
{
	char exp[20];
	int i,n;
	printf("Enter the no. of elememts");	
	scanf("%d",&n);
	printf("Enter the infix expression:");
	for(i=0;i<n;i++)
	{
		scanf("%c",&exp[i]);
		infixtopostfix(exp[i]);
	}
	getch();
	
}
void push(char a)
{
	if(top>=(MAX-1))
	{
		printf("\n Stack Overflow");
	}
	else
	{
		operators[++top]=a;
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
			printf("\n %c ",operators[i]);
			i--;
		}
	}
}
int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
void infixtopostfix(char b)
{
	int temp1,temp2;
	char c;
	if(isalpha(b))
		{
		printf("%c",b);
		}
		else if(b=='(')
		{
			push(b);
		}
		else if(b == '+' || b == '-' || b == '*' || b == '/' || b == '^')
		{
			temp1=precedence(b);
			temp2=precedence(operators[top]);
			if(temp1>temp2)
			{
				push(b);
			}
			else
			{
				while(operators[top]!='(' || operators[top]!=')' || temp1<=temp2)
				{
					printf("%c",operators[top]);
					pop();
					temp2=precedence(operators[top]);		
				}
				push(b);
			}
		}
		else if(b==')')	
		{
			c=operators[top];
			while(c=='(')
			{
				pop();
				c=operators[top];
			}
		}
		
	if(top>-1)
	{
		printf("%c",operators[top]);
		pop();
	}
}
		
					
		
			
			
			
