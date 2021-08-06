//8.To add two matrices using pointers
#include<stdio.h>
int main()
{
	int A[10][10],*ptr1,i,r1,j,c1,B[10][10],*ptr2,r2,c2,C[10][10];
	printf("Enter number of rows,Number of columns of first matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter elements in rows and columns\n");
	ptr1=&A[0][0];
	for(i=0;i<r1;i++)
	{
    	for(j=0;j<c1;j++)
    	{
    		scanf("%d",ptr1);
    		ptr1++;
		}
    }	
    printf("Enter number of rows,Number of columns of second matrix: \n");
	scanf("%d%d",&r2,&c2);
	printf("Enter elements in rows and columns\n");
    
	ptr2=&B[0][0];
	for(i=0;i<r2;i++)
	{
    	for(j=0;j<c2;j++)
    	{
    		scanf("%d",ptr2);
    		ptr2++;
		}
    }
	if(r1==r2 && c1==c2)
	{
		printf("The addition of the given 2 matrices is:\n");
		ptr1=&A[0][0];
		ptr2=&B[0][0];
		for(i=0;i<r1;i++)
	{
    	for(j=0;j<c1;j++)
    	{
    		//C[i][j]=A[i][j]+B[i][j];
    		printf("%4d",*ptr1+*ptr2);
    		ptr1++;
    		ptr2++;
		}
		printf("\n");
    }
}   
    else
    printf("Not possible to add the given matrices");
}
