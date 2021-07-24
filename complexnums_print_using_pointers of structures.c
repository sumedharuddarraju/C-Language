//Read and print a complex number using pointers to structures.
#include<stdio.h>
int main()
{
	struct complex
{
	int real;
	int imaginary;
}c,*sptr;
	
	sptr=&c;
	printf("\n Enter real part :");
	scanf("%d",&sptr->real);
	printf("\n Enter Imaginary part :");
	scanf("%d",&sptr->imaginary);
	
	if(sptr->imaginary < 0)
	printf("\n The complex number is : %d % di",sptr->real,sptr->imaginary);
	else
	printf("\n The complex number is : %d + %di",sptr->real,sptr->imaginary);
	
}

