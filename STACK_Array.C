//Stack using Array//
#include<stdio.h>
#include<conio.h>
#define size 10
int top=-1,stack[size];
void push(int item)
{
	if(top == size-1)
	{
		printf("Stack is Overflow...\n");
	}
	else{
		top++;
		stack[top]=item;
		printf("%d push it on Stack.\n",stack[top]);
	}
}
void pop()
{
	if(top == -1)
	{
		printf("Stack is Underflow...\n");
	}
	else{
		printf("%d delete from stack.\n",stack[top]);
		stack[top]=NULL;
		top--;
	}
}
void display()
{
	int i;
	if(top == -1)
	{
		printf("Stack is Underflow...\n");
	}
	else{
		printf("All data of Stack is: ");
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}printf("\n");
	}
}
void main()
{
	int loop=0,ch,x;
	clrscr();
	printf("***Stack using Array***\n");
	printf("Enter your Choise is:\n");
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
			push(x);
			break;
			
			case 2:
			pop();
			break;
			
			case 3:
			display();
			break;
			
			case 4:
			printf("Program End...\n");
			loop++;
			break;
			
			default:printf("Invalade choise...\n");
		}
	}getch();
}