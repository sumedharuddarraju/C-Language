/*call by address     ,  swapping 2 numbers*/ 

#include<stdio.h>

/*Swap function declaration*/
void swap(int *,int *);
int main()
{
	int num1,num2;
	printf("Enter 2 numbers :  ");
	scanf("%d%d",&num1,&num2);
	/* Print original values of num1 and num2 */
	printf("\nBefore swapping in main ");
	printf("\nValue of num1 = %d \n",num1);  
	printf("Value of num2 = %d \n",num2);
	/*Pass the addresses of num1 and num2 */
	swap(&num1,&num2);
	/* Print the swapped values of num1 and num2*/
	printf("\n\nAfter swapping in main ");
	printf("\nValue of num1 = %d \n",num1);  
	printf("Value of num2 = %d \n",num2);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\n\nAfter swapping in swap function ");
	printf("\nValue of num1 = %d ",*x);  
	printf("\nValue of num2 = %d \n",*y);
}
