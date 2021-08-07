/*Fibinocci series  0 1 1 2 3 5 8 13 ....
print nth term in fibinocci series  i.e (if n=4     2)*/

#include<stdio.h>
int fib(int);
int main()
{
	int n,res;
	printf("\nEnter n: ");
	scanf("%d",&n);
	res=fib(n);
    printf("\n nth fibonacci number is %d",res);
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
