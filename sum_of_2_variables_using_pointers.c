//sum of 2 variables using pointers
#include <stdio.h>
int main()
{

	int a=2,*num1=NULL;
	int b=3,*num2=NULL;
	num1=&a;
	num2=&b;
	printf("Enter num1:  ");
	scanf("%d",num1);
	printf("\nEnter num2:  ");
	scanf("%d",num2);
	
	printf("\nsum is %d",*num1+*num2);
}
