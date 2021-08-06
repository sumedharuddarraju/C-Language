//1.To create initialize and use pointers

#include<stdio.h>
int main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("Address of the pointer is %d",ptr);
	printf("\nThe Value is %d",*ptr);
	printf("\nSize of the pointer is %d bytes",sizeof(ptr));
	
}
