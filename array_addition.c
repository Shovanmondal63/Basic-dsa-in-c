#include<stdio.h>
void main()
{
    int ar1[100],ar2[100],ar3[100],val1,val2,range1,range2,start;
    printf("Range of your two array:\n");
    scanf("%d %d",&val1,&val2);
    printf("Enter values for 1st array:\n");
    for(start=0;start<val1;start++)
    {
        scanf("%d",&ar1[start]);
    }
    printf("Enter values for 2nd array:\n");
    for(start=0;start<val2;start++)
    {
        scanf("%d",&ar2[start]);
    }
    
    if(val1<val2)
    {
        for(start=0;start<val2;start++)
        {
            ar3[start]=ar1[start]+ar2[start];
        }
        printf("Result is:\n");
        for(start=0;start<val2;start++)
        {
            printf(" %d",ar3[start]);
        }
    }
    else{
        for(start=0;start<val1;start++)
        {
            ar3[start]=ar1[start]+ar2[start];
        }
        printf("Result is:\n");
        for(start=0;start<val1;start++)
        {
            printf(" %d",ar3[start]);
        }
    }
}