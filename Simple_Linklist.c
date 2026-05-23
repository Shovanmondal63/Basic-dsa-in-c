//Symple Linklist//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct list
{
	int data;
	struct list*add;
};
typedef struct list LI;
void main()
{
	LI*temp,*current,*start;
	start=NULL;
    char ch;
	
	do{
		temp=(LI*)malloc(sizeof(LI));
		printf("Give a value:");
		scanf("%d",&temp->data);
		if(start == NULL)
		{
			start=current=temp;
		}
		else{
			current->add=temp;
			current=temp;
		}
		fflush(stdin);
		printf("Wnt to continue(y/n):");
        scanf(" %c",&ch);
	} while(toupper(ch) != 'N');
	current->add=NULL;
	printf("All data of Linklist is: ");
	while(start != NULL)
	{
		printf("%d ",start->data);
		start=start->add;
	}printf("\n");
	
}
