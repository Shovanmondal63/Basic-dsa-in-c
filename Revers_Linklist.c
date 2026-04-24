#include<stdio.h>
#include<alloc.h>
#include<conio.h>
struct list
{
	int data;
	struct list*add;
};
typedef struct list LI;
void main()
{
	LI*start,*temp;
	start=NULL;
	clrscr();
	do{
		temp=(LI*)malloc(sizeof(LI));
		printf("Enter a value:");
		scanf("%d",&temp->data);
		temp->add=start;
		start=temp;
		fflush(stdin);
		printf("Want to continue(y/n):");
	}while(toupper(getchar()) != 'N');
	printf("All data of Revers Linklist: ");
	while(start != NULL)
	{
		printf("%d ",start->data);
		start=start->add;
	}printf("\n");
	getch();
}