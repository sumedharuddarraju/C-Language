/*Deletion of an element from a specific position in an array*/
#include<stdio.h>
main()
{
	int A[10],i,pos,n;
	printf("Enter no. of elements in the array:  ");
	scanf("%d",&n);
	printf("\nEnter array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&A[i]);
    }
    printf("Enter position (Index)");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		A[i]=A[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%4d",A[i]);
	}	
}
