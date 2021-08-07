//Program using calloc()
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n=5,i;
	ptr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	    printf("%4d",*(ptr+i));    //default  calloc() is zero
	printf("\n Enter 5 elements: \n");
	for(i=0;i<n;i++)     //reading
	scanf("%d",(ptr+i));
	for(i=0;i<n;i++)      //printing
	printf("%4d",*(ptr+i));
}
