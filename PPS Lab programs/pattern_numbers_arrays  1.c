/*Write a C program to construct a pyramid of numbers as follows:
1
1 2
1 2 3             */


#include<stdio.h>
int main()
{
   int i,j,r;
   printf("Enter number of rows: ");
   scanf("%d",&r);
   for(i=1;i<=r;i++)    
   {
   	for(j=1;j<=i;j++)   
   	{
   		printf("%d ",j);  
	   }
	   printf("\n");
   }
}


