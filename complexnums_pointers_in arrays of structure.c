//Using pointers in arrays of structures ,print complex numbers
#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
}*sptr;
int main()
{
	int i,n;
	struct complex C[10];
	sptr= C;
	printf("Enter the number of complex numbers:  ");
	scanf("%d",&n);
	printf("\n Enter real part and imaginary parts of each complex number:  ");
	

	for(i=0;i<n;i++)
   { 
	scanf("%d",&sptr->real);
	scanf("%d",&sptr->imaginary);
	sptr++;
    }   
    sptr=C;
	for(i=0;i<n;i++)
   { 
	if(C[i].imaginary < 0)
	printf("\n The complex number is : %d % di",sptr->real,sptr->imaginary);
	else
	printf("\n The complex number is : %d + %di",sptr->real,sptr->imaginary);
    sptr++;
	}
    
}
