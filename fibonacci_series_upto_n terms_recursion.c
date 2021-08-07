/*Fibinocci series  0 1 1 2 3 5 8 13 ....
generate fibinocci series till n terms i.e (if n=4  0 1 1 2)*/

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
