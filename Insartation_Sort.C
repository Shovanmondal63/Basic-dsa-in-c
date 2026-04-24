//Inseartation Sorting//
#include<stdio.h>
#include<conio.h>
void isort(int ar[],int n)
{
	int index,i,j;
	for(i=1;i<n;i++)
	{
		j=i;
		index=ar[i];
		while((j>0) && (ar[j-1]>index))
		{
			ar[j]=ar[j-1];
			j--;
		}
		ar[j]=index;
	}
	printf("After sorting value is : ");
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
	printf("***Inseartation Short***\n");
	printf("How many data you want:");
	scanf("%d",&b);
	printf("Enter %d element data of this Array:\n",b);
	for(a=0;a<b;a++)
	{
		printf("Data for %d Index:",a);
		scanf("%d",&list[a]);
	}
	printf("Befor sorting value is : ");
	for(a=0;a<b;a++)
	{
		printf("%d ",list[a]);
	}printf("\n");
	isort(list,b);
}