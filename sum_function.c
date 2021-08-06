////C program to find sum of 2 numbers using functions 
#include<stdio.h>

int add(int , int);
int main()
{
	int sum,num1,num2;
	
	printf("Enter 2 numbers : ");
	scanf("%d%d",&num1,&num2);
	
	sum = add(num1,num2);
	printf("Sum of %d and %d is %d",num1,num2,sum);
}
int add(int x, int y)
{
	return x+y;	
}

