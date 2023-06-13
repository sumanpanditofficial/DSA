#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *top = 0;

void push()
{
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &new_node->data);
	new_node->next = 0;
	if (top == NULL)
	{
		top = new_node;
	}
	else
	{
		new_node->next = top;
		top = new_node;
	}
}

void display(struct node *top)
{
	struct node *temp = top;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void pop()
{
	struct node *tmp = top;
	if (top == 0)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("\nThe popped element is %d \n", top->data);
		top = top->next;
		free(tmp);
	}
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
struct node *sort(struct node *top)
{
	struct node *i, *j;
	for (i = top; i != NULL; i = i->next)
	{
		for (j = i->next; j != NULL; j = j->next)
		{
			if (i->data > j->data)
				swap(&i->data, &j->data);
		}
	}
	return top;
}

int main()
{
	int n = 5;
	struct node *top2;
	for (int i = 0; i < n; i++)
	{
		push();
	}
	display(top);
	top2 = sort(top);
	display(top2);
}