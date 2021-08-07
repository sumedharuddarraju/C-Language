//Non-void function without parameter
#include<stdio.h>
int factorial();
void main()
{
	int res;
	res=factorial();
	printf("factorial is %d",res);	
} 
int factorial()
 {
 	int fact=1,i,x;
 	printf("\n\n Hello I'm in function factorial");
 	printf("\n\nEnter n:");
 	scanf("%d",&x);
	for(i=1;i<=x;i++)
 	fact = fact * i;
 	return fact;
 }
