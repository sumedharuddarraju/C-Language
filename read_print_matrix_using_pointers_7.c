//7.To read and print a Matrix using Pointers
#include<stdio.h>
int main()
{
	int A[10][10],i,r,j,c,*ptr;
	printf("Enter number of rows,Number of columns of first matrix:\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements in rows and columns\n");
ptr=&A[0][0]; 
	for(i=0;i<r;i++)
	{
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",ptr);
		    ptr++;
		}
		
    }	
    ptr=&A[0][0];
		for(i=0;i<r;i++)
	{
    	    for(j=0;j<c;j++)
    	    {
    		    printf("%4d",*ptr);
                 ptr++;		   
		    }
		    
		printf("\n");
    }
}
