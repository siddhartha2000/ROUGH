#include <stdio.h>
#include <stdlib.h>

struct node{
	int val;
	struct node *next;
	};
	
typedef struct node* node;

node get_node();

node ins_front(node first, int val);

void compare(node first, node second);

void display(node first);

node first = NULL;
node second = NULL;

int main(){
	int i, x, y, val1, val2, pos;
	char ch1 = 'y',ch2 = 'y',ch3;
	printf("Enter values for first linked list from the front: \n");
	while(x <= 2){
		printf("\n1: Enter value from front\n");
        	printf("2: Display\n");
        	printf("3: Exit\n");

		scanf("%d", &x);
			switch(x){
			case 1:
				printf("Enter value from front: ");
				scanf("%d", &val1);
				first = ins_front(first, val1);
				break;
            
			case 2:	display(first);
				break;
			default: printf("INVALID CHOICE\n");
				 break;
			}
		}
	printf("Enter choices for second linked list: \n");
	while(y != 3){
		printf("\n1: Enter value from front\n");
        	printf("2: Display\n");
        	printf("3: Exit\n");

		scanf("%d", &y);
			switch(y){
			case 1:
				printf("Enter value from front: ");
				scanf("%d", &val2);
				second = ins_front(second, val2);
				break;
            
			case 2:	display(second);
				break;
			default: printf("INVALID CHOICE\n");
				 break;
			}
		}
	printf("Do you wish to compare ypur linked lists? Enter Y/y for yes and N/n for no ");
	scanf("%c",$ch3);
	if(ch3 == 'Y' || ch3 == 'y')
		compare(first,second);
	}
	
		
node get_node(){
	node temp;
	temp = (node)malloc(sizeof(struct node));
	temp->next = NULL;
	return temp;
	}
	
	
node ins_front(node first, int val){
	node temp;
	if(first == NULL){
		first = get_node();
		first->val = val;
		}
	else{
		temp = get_node();
		temp->val = val;
		temp->next = first;
		first = temp;
		
		}
	return first;	
	}


void display(node first){
	node curr;
	curr = first;
	while(curr != NULL){
		printf("%d ", curr->val);
		curr = curr->next;
		}
	}

void compare(node first, node second)
{
	int count1 = 0 , count2 = 0, flag = 0;
	node curr1 = first, curr2 = second;
	while (curr1->next != NULL)
	{
		count1++;
		curr1 = curr1->next;
	}
	while (curr2->next != NULL)
	{
		count2++;
		curr2 = curr2->next;
	}
	if(count1 != count2)
	{
		printf("Lists are not equal\n");
	}
	else
	{
		curr1 = first;
		curr2 = second;
		while(curr1->next != NULL)
		{ 
			if(curr1->val != curr2->val)
			{
				flag = 1;
				break;
			}
			else
			{
				curr1 = curr1->next;
				curr2 = curr2->next;
			}
		}
		if(flag == 1)
		{
			printf("Lists are not equal\n");
		}
		else
		{
			printf("Lists are equal");
		}
	}
}
