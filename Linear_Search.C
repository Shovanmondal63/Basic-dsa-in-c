//Linear Search//
#include<stdio.h>
#include<conio.h>
void lsearch(int ar[],int n)
{
	int i,s,count=0;
	printf("Which data you want:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(ar[i] == s)
		{
			count=i;
		}
	}
	if(count == 0)
	{
		printf("%d not found in this Array...\n",s);
	}
	else{
		printf("%d not found in %d Index...\n",s,count);
	}
	getch();
}
void main()
{
	int k,end,list[100];
	clrscr();
	printf("How many data you want:");
	scanf("%d",&end);
	printf("Enter %d data of this Array:\n",end);
	for(k=0;k<end;k++)
	{
		printf("Data for %d Index:",k);
		scanf("%d",&list[k]);
	}
	lsearch(list,end);
}