#include<stdio.h>
void fibonacci(int range)
{
	int a=0,b=1,next,i;
	for(i=0;i<range;i++)
	{
		printf("%d ",a);
		next=a+b;
		a=b;
		b=next;
	}printf("\n");
	getch();
}
void main()
{
	int n;
	clrscr();
	printf("---Fibonacci Sequence---\n");
	printf("Enter a range: ");
	scanf("%d",&n);
	fibonacci(n);
}