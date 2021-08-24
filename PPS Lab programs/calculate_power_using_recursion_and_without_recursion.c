/*Write C programs that use both recursive and non-recursive functions
   To find x^n */
   
//With recursion   
#include<stdio.h>
int power(int ,int);
int main()
{
	int b,p,res;
	printf("\nEnter base value: ");
	scanf("%d",&b);
	printf("\nEnter power value: ");
	scanf("%d",&p);
	res=power(b,p);
	printf("\nResult=%d",res);
}
int power(int b , int p)
{
	if(p==0)
	    return 1;
	else
	    return  b * power(b,p-1);
}

/*

//with out recursion
#include<stdio.h>
#include<math.h>
int power(int ,int);
int main()
{
	int b,p,res;
	printf("\nEnter base value: ");
	scanf("%d",&b);
	printf("\nEnter power value: ");
	scanf("%d",&p);
	res=power(b,p);
	printf("\nResult=%d",res);
}
int power(int b , int p)
{
	int res;
	res = pow(b,p);
	return res;
}


*/
