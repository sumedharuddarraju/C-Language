//finding factorial Using Recursion
#include<stdio.h>
int factorial(int n);
void main()
{
	int n,res;
	printf("\n\nEnter n:");
 	scanf("%d",&n);
	res=factorial(n);   //call
	printf("\nfactorial of %d is %d",n,res);	
} 
int factorial(int x)
 {
	if(x==1)
	    return 1;
	else
	    return x * factorial(x-1);
 }
