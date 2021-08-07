//void function without parameter
#include<stdio.h>
void factorial();
void main()
{
	factorial();	
 } 
void factorial()
 {
 	int fact=1,i,x;
 	printf("\n\nEnter n:");
 	scanf("%d",&x);
	for(i=1;i<=x;i++)
 	fact = fact * i;
 	printf("factorial is %d",fact);
 }
