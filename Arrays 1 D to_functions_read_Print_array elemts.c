/*Arrays to functions
   Read and print array elements*/

#include<stdio.h>
void printArray(int *,int);
int main()
{
	int A[10],i,n;
	printf("\nEnter n ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("\n");
	
	printArray(A,n);  //Address of &A[0],size of array -> n                   
	return 1;
}
void printArray(int *ptr,int n)
{
    int i;
	for(i=0;i<n;i++)	
	printf("%5d",*(ptr+i));
}



