//read and print student details using pointers to structues
#include<stdio.h>
	struct student
{
	int rollno;
	char name[20];
	float marks;
}s,*sptr;
int main()
{
	sptr=&s;
	printf("\n Enter name :");
	scanf("%s",&sptr->name);
	printf("\n Enter roll no :");
	scanf("%d",&sptr->rollno);
	printf("\n Enter marks :");
	scanf("%f",&sptr->marks);
	
	printf("\n name= %s ,rollno=%d, marks=%f",sptr->name,sptr->rollno,sptr->marks);
   
}
