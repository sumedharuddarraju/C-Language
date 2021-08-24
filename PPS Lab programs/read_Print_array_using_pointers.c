/*Write a program for reading elements using pointer into array and display the
values using array.*/

#include<stdio.h>
int main()
{
	int A[10],i,n,*ptr=NULL;
	printf("Enter n  ");
	scanf("%d",&n);
	ptr = &A[0];  //ptr=A;
	printf("Enter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d   ",A[i]);
		ptr++;
	}
}
