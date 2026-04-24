//Stack using Linklist//
#include<stdio.h>
#include<alloc.h>
#include<conio.h>
struct list
{
	int data;
	struct list*add;
};
typedef struct list LI;
void push(LI**ptr,int item)
{
	LI*temp;
	temp=(LI*)malloc(sizeof(LI));
	if(temp == NULL)
	{
		printf("Stack is Overflow...\n");
	}
	else{
		temp->data=item;
		temp->add=*ptr;
		*ptr=temp;
		printf("%d push it on stack.\n",temp->data);
	}
}
void pop(LI**ptr)
{
	LI*temp;
	if(*ptr == NULL)
	{
		printf("Stack is Underflow...\n");
	}
	else{
		temp=*ptr;
		printf("%d is delete from Stack.\n",temp->data);
		*ptr=temp->add;
		free(temp);
	}
}
void main()
{
	LI*stk;
	int loop=0,ch,x;
	stk=NULL;
	clrscr();
	printf("---This is your Choise---\n");
	printf("Press 1 for Push.\nPress 2 for Pop.\nPress 3 for Display.\nPress 4 for Exit.\n");
	while(loop == 0)
	{
		printf("Enter your Choise:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter a data for Push:");
			scanf("%d",&x);
			push(&stk,x);
			break;
			
			case 2:
			pop(&stk);
			break;
			
			case 3:
			display(&stk);
			break;
			
			case 4:
			printf("Program End...\n");
			loop++;
			break;
			
			default:printf("Invalade choise...\n");
		}
	}getch();
}