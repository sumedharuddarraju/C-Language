/*Write a program for display values reverse order from array using pointer.*/
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
	ptr=&A[n-1];
	for(i=n-1;i>=0;i--)
	{
		printf("%d   ",*ptr);
		ptr--;
	}
}
