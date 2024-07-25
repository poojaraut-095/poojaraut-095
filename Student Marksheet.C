#include <stdio.h>

int main()
{
	int rollno;
	char name[10];
	int sub1,sub2,sub3,total;
	float perct;
	
	printf("Enter the student roll no");
	scanf("%d",&rollno);
	
	printf("Enter the student name");
	scanf("%s",&name);
	
	printf("Enter student marks for three subject");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	total=sub1+sub2+sub3;
	
	perct=total/3;
	
	printf("\n\t\t Roll number \t|\t %d",rollno);
	printf("\n\t\t Name \t|\t %s",name);
	printf("\n\t|t Maths\t|\t %d",sub1);
	printf("\n\t|t Hindi\t|\t %d",sub2);
	printf("\n\t|t Eng\t|\t %d",sub3);
	printf("\n\t|t total\t|\t %d",total);
	printf("\n\t|t perct\t|\t %f",perct);
	return 0;
		}
