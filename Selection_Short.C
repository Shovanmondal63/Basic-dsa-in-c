//Selection Short//
#include<stdio.h>
#include<conio.h>
void ssort(int ar[],int n)
{
	int min,i,j,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(ar[min]>ar[j])
			{
				min=j;
			}
		}
		temp=ar[i];
		ar[i]=ar[min];
		ar[min]=temp;
	}
	printf("After sorting value is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}printf("\n");
	getch();
}
void main()
{
	int a,b,list[100];
	clrscr();
	printf("***Selection Shorting***\n");
	printf("How many data you want:");
	scanf("%d",&b);
	printf("Enter %d data of this Array:\n",b);
	for(a=0;a<b;a++)
	{
		printf("Data for %d Index:",a);
		scanf("%d",&list[a]);
	}
	printf("Before shorting value is: ");
	for(a=0;a<b;a++)
	{
		printf("%d ",list[a]);
	}printf("\n");
	ssort(list,b);
}