//swapping 2 numbers using temporary variables 
#include<stdio.h>
int main()
{
	int num1,num2,t;
	int *a=NULL, *b=NULL;
	a = &num1;
	b = &num2;
	
	printf("Enter num1:  ");
	scanf("%d",a);
	printf("\nEnter num2:  ");
	scanf("%d",b);
	printf("\n Before swapping num1 = %d  and num2 = %d",num1,num2);
	t = *a;
	*a=*b;
	*b=t;
	printf("\n After  swapping num1 = %d  and num2 = %d",num1,num2);
}
