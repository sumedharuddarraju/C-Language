/*Write C programs that use both recursive and non-recursive functions
 To find the GCD (greatest common divisor) of two given integers.*/

//non recursive functions
#include<stdio.h>
int gcd(int ,int);
int main()
{
	int num1,num2,i=1;
	printf("Enter 2 numbers:");
	scanf("%d%d",&num1,&num2);
	printf("\n GCD of %d and %d is %d",num1,num2,gcd(num1,num2));
}
int gcd(int a, int b)
{
	int i=1,res;
	while(i<a && i<b )
	{
	    if(a%i==0 && b%i==0)
	   {
	      	res=i;
	   }  
    i++;
	}
	return res;
}


// Using recursion
/*
#include<stdio.h>
int gcd(int , int);
int main()
{
	int num1,num2;
	printf("Enter 2 numbers:");
	scanf("%d%d",&num1,&num2);
	printf("\n GCD is %d",gcd(num1,num2));
}
int gcd(int a,int b)
{
	if(a==0)
	return b;
	else if(b==0)
	return a;
	else
	gcd(b,a%b);
}
*/









