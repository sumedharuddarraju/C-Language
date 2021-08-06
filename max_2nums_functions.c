////C program to find maximum of 2 numbers using functions 
#include<stdio.h>
int max_2nums(int , int);
int main()
{
	int num1,num2 ;
    printf("Enter a number ");
	scanf("%d%d",&num1,&num2);
	max_2nums(num1,num2);
}
int max_2nums(int a, int b)
{
if(a > b)
	printf("\n%d is the biggest",a);
	else if(a < b)
	printf("\n%d is the biggest",b);
	else
	printf("\nBoth numbers are equal");
}
