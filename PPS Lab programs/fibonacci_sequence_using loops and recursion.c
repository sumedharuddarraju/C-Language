/*A Fibonacci sequence is defined as follows: the first and second terms in the
sequence are 0 and 1. Subsequent terms are found by adding the preceding two 
terms in the sequence. Write a C program to generate the first n terms of the 
sequence. */
#include<stdio.h>
int main()
{
	int n;
	int a=-1,b=1,c=0,i;
	printf("Enter n:  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{       
	        c=a+b;
			a=b;
			b=c;
		printf("%d  ",c);
	}
}

/*
 Using recursion

#include<stdio.h>
int fib(int);
int main()
{
	int n,i,res;
	printf("\nEnter n: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		res=fib(i);
		printf("%4d",res);
	}
	return 0;
}
int fib(int n)
{
	if(n==1)
	    return 0;
	else if(n==2)
	    return 1;
	else
	    return fib(n-1) + fib(n-2);
}
*/
