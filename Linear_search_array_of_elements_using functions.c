//Linear Search 
#include<stdio.h>
void printArray(int [],int);
int LinearSearch(int[],int,int);
int main()
{
	int A[10],i,n,Key,pos,res;
	printf("\nEnter n ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("\n");
	
	printArray(A,n); 
	printf("\nEnter key to search");
	scanf("%d",&Key);    
	pos=LinearSearch(A,n,Key);    
	printf("\n");
	if(pos!=-1)
	printf("Element %d Found at position %d",Key,pos);       
	else
	printf("\nNot Found");
	return 1;
}
void printArray(int num[],int n)
{
    int i;
	for(i=0;i<n;i++)	
	printf("%5d",num[i]);
}
int LinearSearch(int A[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(key==A[i])
		return i+1;	
	}
	return -1;
	
	
	
	
	
	
	
	
	
	
}



