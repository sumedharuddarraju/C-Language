//Read and print elements in 1-D array using pointers
#include<stdio.h>
int main()
{
	int A[10],i,n,*ptr=NULL;
	printf("Enter n  ");
	scanf("%d",&n);
	ptr = &A[0];  //ptr=A;
	printf("Enter %d numbers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	printf("\n");
	ptr=&A[0];
	for(i=0;i<n;i++)
	{
		printf("%d   ",*ptr);
		ptr++;
	}
}
