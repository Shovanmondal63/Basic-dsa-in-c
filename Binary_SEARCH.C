//Binary Search//
#include<stdio.h>
void bsearch(int ar[],int n)
{
	int mid,left,right,count=0,x;
	printf("Enter data for Searching:");
	scanf("%d",&x);
	left=0;
	right=n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(ar[mid] == x)
		{
			count=mid;
			break;
		}
		else if(ar[mid] > x)
		{
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	if(count == 0)
	{
		printf("%d is not found in this Araay...\n",n);
	}
	else{
		printf("%d found in %d index of this Araay...\n",x,count);
	}
	
}
void main()
{
	int k,end,list[100];
	
	printf("How many data you want:");
	scanf("%d",&end);
	printf("Enter %d data of this array in shorted way:\n",end);
	for(k=0;k<end;k++)
	{
		printf("Data for %d Index:",k);
		scanf("%d",&list[k]);
	}
	bsearch(list,end);
}
