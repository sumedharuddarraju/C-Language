//Program using malloc(),realloc(),free() functions
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	a=(int *)malloc(sizeof(int));      //malloc()
	*a = 50;
	printf("\n a=%d",*a);
	
	a = (int*)realloc(a,5*sizeof(int));   //realloc()
	*a=100;
	printf("\n a=%d",*a);
	printf("\n Reallocated to 5*4 bytes");
	
	free(a);                              //free()
	printf("\n a=%d",*a);
	return 0;
}
