//read and print employee details using pointers to structures
#include<stdio.h>
	struct employee
{
	char name[20];
	int empno;
	float salary;
}emp,*sptr;
int main()
{
	sptr=&emp;
	printf("\n Enter employee name :");
	scanf("%s",&sptr->name);
	printf("\n Enter empno :");
	scanf("%d",&sptr->empno);
	printf("\n Enter salary :");
	scanf("%f",&sptr->salary);
	
	printf("\n name= %s ,empno=%d, salary=%f",sptr->name,sptr->empno,sptr->salary);

}
