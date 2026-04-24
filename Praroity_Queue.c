//Praroity Queue//
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 100
struct records
{
	int roll;
	char name[20];
};
typedef struct records RD;
struct pqueue
{
	RD info[max];
	int rear,front;
};
typedef struct pqueue PQ;
void enqueue(PQ*ptr,RD item)
{
	int i;
	if(max-1 == ptr->rear)
	{
		printf("Priroti queue is overflow...\n");
	}
	else{
		for(i=ptr->rear;i>ptr->front;i--)
		{
			if(item.roll>ptr->info[i].name)
			{
				ptr->info[i+1]=ptr->info[i];
			}
			else{
				break;
			}
		}
		ptr->info[i+1]=item;
		printf("Student data insert in Queue...\n");
		ptr->rear++;
	}
}
void main()
{
	PQ pq;
	RD rec;
	int ch,loop=0;
	pq.rear=-1;
	pq.front=-1;
	clrscr();
	while(loop == 0)
	{
		printf("Your choises is:\nPress 1 for Insert.\nPress 2 for Delete.\nPress 3 for Exit.\n");
		printf("Enter your choise:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter your roll:");
			scanf("%d",&rec.roll);
			fflush(stdin);
			printf("Enter your name:");
			gets(rec.name);
			enqueue(&pq,rec);
			break;
			
			case 2:
			break;
			
			case 3:
			printf("Program end.\n");
			loop++;
			
			default:printf("Invalade Choise...\n");
		}
	}
	getch();
}