//Queue using Array//
#include<stdio.h>
#include<conio.h>
#define size 5
int font=-1,rear=-1,queue[size];
void enqueue(int item)
{
	if(rear == size-1)
	{
		printf("Queue is Overflow...\n");
	}
	else{
		rear++;
		queue[rear]=item;
		printf("%d is Insert is Queue.\n",queue[rear]);
	}
}
void dequeue()
{
	if(rear == -1)
	{
		printf("Queue is Undarflow...\n");
	}
	else{
		font++;
		printf("%d delete in Queue.\n",queue[font]);
		queue[font]=NULL;
	}
}
void display()
{
	int i,n=rear;
	if(rear == -1)
	{
		printf("Queue is Undarflow...\n");
	}
	else{
		printf("All data from Queue: ");
		for(i=font+1;i<=n;i++)
		{
			printf("%d ",queue[i]);
		}printf("\n");
	}
}
void main()
{
	int loop=0,i,ch;
	clrscr();
	printf("***Queue using Array***\n");
	printf("Your choises is:\n");
	printf("Press 1 for Enqueue.\nPress 2 for Dequeue.\nPress 3 for display.\nPress 4 for Exit.\n");
	while(loop == 0)
	{
		printf("Enter your Choise:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter a data for Insert:");
			scanf("%d",&i);
			enqueue(i);
			break;
			
			case 2:
			dequeue();
			break;
			
			case 3:
			display();
			break;
			
			case 4:
			printf("Program end...\n");
			loop++;
			break;
			
			default:printf("Invalade Choise...\n");
		}
	}getch();
}