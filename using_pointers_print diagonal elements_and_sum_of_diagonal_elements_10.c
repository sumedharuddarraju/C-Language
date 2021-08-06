//10.To print diagonal elements and sum of diagonal elements using pointers
#include<stdio.h>
int main()
{
int A[10][10],i,r,j,c,*ptr,sum=0;
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
    printf("The principle diagonal elements are  ");
		for(i=0;i<r;i++)
	{
    	    for(j=0;j<c;j++)
    	    {
    		    if(i==j)    
    		    {  
    		        printf("%d    ",*ptr);
    		    	sum += *ptr; 
				}
    		    ptr++;
		    }
    }
    printf("\nsum is %d",sum);
}

