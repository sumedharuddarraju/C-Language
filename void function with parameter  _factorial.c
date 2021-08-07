//void function with parameter
#include<stdio.h>
void factorial(int n);
void main()
{
	factorial(5);	
 } 
void factorial(int x)
 {
 	int fact=1,i;
	for(i=1;i<=x;i++)
 	fact = fact * i;
 	printf("factorial is %d",fact);
 }
