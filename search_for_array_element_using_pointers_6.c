//6.To search for an Element using Pointers
#include<stdio.h>
int main()
{
	int A[100],*ptr,n,i,ele,output=0;
	
	printf("Enter no.of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter an array element to be searched: ");
    scanf("%d",&ele);
	ptr=A;
	for(i=0;i<n;i++)
	{
	    printf("Enter a number:   ");
	    scanf("%d",ptr);
	    ptr++;
	    printf("\n");
	}
	ptr=A;
	for(i=0;i<n;i++)
	{
	    if (*ptr == ele)
	    {
	        output =1;
	        break;	
	    }
	    ptr++;
    }
	if (output==1)
	    printf("The given element %d is in the array",ele);
	else
	    printf("The given element %d is not in the array",ele);
	return 1;
}
