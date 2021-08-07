//Program using malloc()
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr;
	ptr=(int *)malloc(8);
	*ptr = 30;
	printf("%d",*ptr);
}
