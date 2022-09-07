#include <stdio.h>
#include <stdlib.h>

typedef struct STU_INFO{
	long long int reg_no;
	char *name;
	char address[30];
}student_info;

typedef struct DOB{
	int date;
	int *month;
	int year;
}dateofbirth;

typedef struct COLLEGE{
	char *college_name;
	char university_name[20];
}college_info;

typedef struct STUDENT{
	dateofbirth *dob;
	student_info info;
	college_info college;
}student;



void read_student(student *p);
void display_student(student *p);

void main(){
	int n,i;
	student *p;
	p = (student *)malloc(sizeof(student));
	p->dob = (dateofbirth *)malloc(sizeof(dateofbirth));
	printf("Enter details of student\n\n");
	read_student(p);
	printf("The details of student are as follows-\n\n");
	display_student(p);

}
void read_student(student *p){
	printf("Enter date of birth of student in the format dd-month-yyyy- ");scanf("%d-%d-%d",&((p->dob)->date),(p->dob)->month,&((p->dob)->year));
	printf("Enter registration number of student - ");scanf("%lld",&(p->info).reg_no);
	printf("Enter address of student - ");scanf("%s",(p->info).address);
	printf("Enter name of student - ");scanf("%s",(p->info).name);
	printf("Enter college name - ");scanf("%s",(p->college).college_name);
	printf("Enter university name - ");scanf("%s",(p->college).university_name);
}

void display_student(student *p)
{
	printf("Dob - %d-%d-%d\n",(p->dob)->date,*((p->dob)->month),(p->dob)->year);
	printf("registration number of student - %lld\n",(p->info).reg_no);
	printf("address of student - %s\n",(p->info).address);
	printf("name of student - %s\n",(p->info).name);
	printf("college name - %s\n",(p->college).college_name);
	printf("university name - %s\n",(p->college).university_name);
}