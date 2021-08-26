/*Write a C program to merge two files into a third file (i.e., the contents of the firs t
file followed by those of the second are put in the third file).*/
#include<stdio.h>
void main()
{
	FILE *fptr1,*fptr2,*fptr3;
	char ch;
	fptr1=fopen("File1.txt","w");
	if(fptr1)
	printf("\nFile1 opened successfully\n");
	printf("\n Input Data\n");
	while((ch=getchar())!='$')
	{
		fputc(ch,fptr1);
	}
	fclose(fptr1);
	
	printf("\n Input Data\n");
	fptr2=fopen("File2.txt","w");
	while((ch=getchar())!='$')
	{
		fputc(ch,fptr2);
	}
	fclose(fptr2);
	
	fptr1=fopen("File1.txt","r");
	fptr3=fopen("File3.txt","w");
	while((ch=fgetc(fptr1))!=EOF)
	{
		fputc(ch,fptr3);
	}
	fclose(fptr3);
	fclose(fptr1);
	
	fptr2=fopen("File2.txt","r");
	fptr3=fopen("File3.txt","a");
	while((ch=fgetc(fptr2))!=EOF)
	{
		fputc(ch,fptr3);
	}
	fclose(fptr3);
	fclose(fptr2);
	
	fptr3=fopen("File3.txt","r");
	while((ch=fgetc(fptr3))!=EOF)
	{
		printf("%c",ch);
	}
	
}

