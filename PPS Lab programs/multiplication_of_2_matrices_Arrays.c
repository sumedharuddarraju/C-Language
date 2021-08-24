/*Multiplication of Two Matrices*/
#include<stdio.h>
#define N 50
int main()
{
	int A[N][N], B[N][N],C[N][N] , i,j,k,sum=0,m,n,p,q;
	printf("Enter number of rows,Number of columns of first matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter elements in rows and columns\n");
	
	//Reading elements in 1st matrix
	for(i=0;i<m;i++)
	{
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&A[i][j]);
		}
    }	
    printf("Enter number of rows,Number of columns of second matrix: \n");
	scanf("%d%d",&p,&q);
	//Reading elements in 2nd matrix
	printf("Enter elements in rows and columns\n");
    for(i=0;i<p;i++)
	{
    	for(j=0;j<q;j++)
    	{
    		
    		scanf("%d",&B[i][j]);
		}
    }
	//printing 1st matrix
	printf("\nThe first matrix is : \n");
     for(i=0;i<m;i++)
	{
    	    for(j=0;j<n;j++)
    	    {
    		    printf("%4d",A[i][j]);
		    }
		printf("\n");
    } 
	//printing 2nd matrix
	printf("\nThe second matrix is : \n");
	for(i=0;i<p;i++)
	{
    	    for(j=0;j<q;j++)
    	    {
    		    printf("%d\t",B[i][j]);
		    }
		printf("\n");
    }    
    
    	if(n!=p)
	{
    printf("Not possible to multiply the given matrices\n");
    
    }
    else
    {
    	for(i=0;i<m;i++)
	{
    	    for(j=0;j<q;j++)
    	    {    
    	        sum=0;
    	    	for(k=0;k<m;k++)
    	    	{
				sum = sum + (A[i][k]*B[k][j]);
		        }
		        C[i][j]=sum;
    }    
	}

printf("\nThe multiplication is :\n");
for(i=0;i<m;i++)
	{
    	    for(j=0;j<q;j++)
    	    {    
    	        printf("%d",C[i][j]);
            }
    printf("\n") ;   
	}
}
}
