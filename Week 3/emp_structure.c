#include <stdio.h>
#include <stdlib.h>
typedef struct DateOfBirth{
	int date;
	int month;
	int year;
}DOB;
typedef struct ADDRESS{
	int house_number;
	int zip_code;
	char state[20];
}Address;
typedef struct Employee{
	char name[30];
	DOB dob;
	Address address;
}emp;
void read_employee(emp *p);
void display_employee(emp *p);
void main(){
	int n,i;
	emp *p;
	printf("Enter number of employees- ");
        scanf("%d",&n);
	p = (emp *)malloc(n*sizeof(emp));
	printf("Enter details of employees\n\n");
	for(i=0;i<n;i++)
	{
		read_employee(p+i);
	}
	printf("The details of employees are as follows-\n\n");
	for(i=0;i<n;i++)
	{
		display_employee(p+i);
	}

}
void read_employee(emp *p){
	printf("Enter name of employee - ");scanf("%s",p->name);
	printf("Enter date of birth of employee in the format dd-mm-yyyy- ");scanf("%d-%d-%d",&(p->dob).date,&(p->dob).month,&(p->dob).year);
	printf("Enter address of employee in the format house_number-zipcode-state - ");scanf("%d-%d-%s",&(p->address).house_number,&(p->address).zip_code,(p->address).state);
}
void display_employee(emp *p)
{
	printf("name of employee - %s\n",p->name);
	printf("date of birth of employee - %d-%d-%d\n",(p->dob).date,(p->dob).month,(p->dob).year);
	printf("address of employee - \n");
	printf("House number - %d\n",(p->address).house_number);
	printf("Zip code - %d\n",(p->address).zip_code);
	printf("State - %s\n",(p->address).state);
}
