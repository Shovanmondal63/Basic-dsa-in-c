//Queue using Linklist//
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct list
{
	int data;
	struct list*add;
};
typedef struct list LI;
void enqueue(LI**ptr,int item)
{
	LI*temp,*current;
	temp=(LI*)malloc(sizeof(LI));
	if(temp == NULL)
	{
		printf("Queue is Overflow...\n");
	}
	else{
		temp->data=item;
		printf("%d insert is Queue.\n",temp->data);
		temp->add=NULL;
		if(*ptr == NULL)
		{
			*ptr=temp;
		}
		else{
			current=*ptr;
			while(current->add != NULL)
			{
				current=current->add;
			}
			current->add=temp;
		}
	}
}
void dequeue(LI**ptr)
{
	LI*temp;
	if(*ptr == NULL)
	{
		printf("Queue is Underflow...\n");
	}
	else{
		temp=*ptr;
		printf("%d delete from Queue...\n",temp->data);
		*ptr=temp->add;
		free(temp);
	}
}
void main()
{
	LI*q;
	int loop=0,ch,x;
	q=NULL;
	clrscr();
	printf("---This is your Choise---\n");
	printf("Press 1 for Insert.\nPress 2 for Delete.\nPress 3 for Display.\nPress 4 Exit.\n");
	while(loop == 0)
	{
		printf("Enter youe choise:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter a data for Insert:");
			scanf("%d",&x);
			enqueue(&q,x);
			break;
			
			case 2:
			dequeue(&q);
			break;
			
			case 3:

			break;
			
			case 4:
			printf("Program end...\n");
			loop++;
			
			default:printf("Invalade Choise...\n");
		}
	}getch();
}