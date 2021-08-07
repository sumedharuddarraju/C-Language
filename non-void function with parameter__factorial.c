//Non-void function with parameter
#include<stdio.h>
int factorial(int n);
void main()
{
	int n,res;
	printf("\n\nEnter n:");
 	scanf("%d",&n);
 	printf("\n\n I'm going to function factorial Bye!");
	res=factorial(n);
	printf("\n I am back! in Function Main");
	printf("\nfactorial of %d is %d",n,res);	
} 
int factorial(int x)
 {
 	int fact=1,i;
 	printf("\n\n Hello I'm in function factorial");
	for(i=1;i<=x;i++)
 	fact = fact * i;
 	return fact;
 }
