//Buble shorting//
#include<stdio.h>
#include<conio.h>
void bsort(int ar[],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("After Shorting value is: ");
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
	printf("***Buble Shorting***\n");
	printf("How many data you want:");
	scanf("%d",&b);
	printf("Enter %d element data of this Array:\n",b);
	for(a=0;a<b;a++)
	{
		printf("Data for %d Index:",a);
		scanf("%d",&list[a]);
	}
	printf("Before sorting value is: ");
	for(a=0;a<b;a++)
	{
		printf("%d ",list[a]);
	}printf("\n");
	bsort(list,b);
}