
/* d)Write C programs that use both recursive and non-recursive functions
 i)To find the factorial of a given integer. */

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
 
 /*
 //With out using recursion
 
 #include<stdio.h>
 int factorial(int );
 int main()
 {
 	int n;
 	printf("Enter n :");
 	scanf("%d",&n);
	 printf("\nfactorial of %d is %d",n,factorial(n));
 }
 int factorial(int n )
 {
 	int i,res=1;
 	for(i=1;i<=n;i++)
 	{
 		res=res*i;
	 }
	 return res;	
 }
 */
