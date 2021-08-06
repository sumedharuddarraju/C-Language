//C program to find maximum of 3 numbers using functions 

#include<stdio.h>
int max_3nums(int ,int, int);
int main()
{
	int num1, num2, num3,max;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
    max=max_3nums(num1,num2,num3);
    printf("Maximum of %d ,  %d  and  %d   is    %d",num1,num2,num3,max);
}

int max_3nums(int a ,int b, int c)
{
	int maximum;
	if ((a > b) && (a > c))
	maximum=a;
	else if (b > c )
	maximum=b;
	else
	maximum = c;
	return maximum;
}
