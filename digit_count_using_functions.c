//C program to find count the digits of a given number using functions 
#include<stdio.h>
int digit_count(int);
int main()
{
	int num,count_digits;
	printf("Enter a number:\n");     
	scanf("%d",&num);
	count_digits=digit_count(num);
	printf("Number of digits in the number is %d",count_digits);
}
int digit_count(int a)
{
    int count=0;
	while(a > 0)  
	{
	 a /= 10;   
	count += 1;   
    }
      return count;
}
