/*
Name:Otieno Samwel Amos
Reg no: CT101/G/21435/24
*/
//c struct
#include<stdio.h>
#include<string.h>
struct employee{
	char name[25];
	int id_number;
	char department[20];
	float salary;
	char email[50];
}
employee1, employee2;
int main(){
	strcpy(employee1.name, "John Doe");
	employee1.id_number = 12345;
	strcpy(employee1.department, "Human Resources");
	employee1.salary = 55000.50;
	strcpy(employee1.email, "john.doe@company.com");
	
	printf("name: %s \n", employee1.name);
	printf("id_number: %d \n", employee1.id_number);
	printf("department: %s \n", employee1.department);
	printf("salary: %f \n", employee1.salary);
	printf("email: %s \n", employee1.email);
	
	return 0;
}