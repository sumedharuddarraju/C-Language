/*Write a program through pointer variable to sum of n elements from array.*/

#include<stdio.h>
int main()
{
	int A[10],i,n,*ptr=NULL,sum=0;
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
	ptr=A;
	for(i=0;i<n;i++)
	{
	sum += *ptr;
	ptr++;
	}
	printf("%d",sum);
}
