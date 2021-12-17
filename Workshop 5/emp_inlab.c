//--------------------------------------------------
// Name: Devin Mahadeo          
// Student Number: 160611174
// Email: Dmahadeo@myseneca.ca       
// Section: B     
// Workshop: 4      
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
// Place your code below
#include <stdio.h>

#define SIZE 2

struct Employee
{
	int no; // Employee ID
	int age; // Employee Age
	double sal; // Employee Salary
};

int main() {

	int option = 0;
	struct Employee emp[SIZE] = { {0} }; // declear the array and initialize the elements to 0
	int counter = 0;
	int count = 0;

	printf("---=== EMPLOYEE DATA ===---\n\n");


	do
	{
		//print options list
		printf("1. Display Employee information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// User input for the options 
		scanf("%d", &option);
		printf("\n");


		switch (option)
		{
		case 0: // Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!");
			break;
		case 1: // Display employee data 

			printf("EMP ID EMP AGE EMP SALARY\n");
			printf("====== ======= ==========\n");
			
			for (counter = 0; counter < SIZE; counter++)
			{
			printf("%6d%9d%11.2lf\n", emp[counter].no, emp[counter].age, emp[counter].sal);
			}
			printf("\n");

			break;
		
		case 2: // Adding Employees

			printf("Adding Employee\n");
			printf("===============\n");

			if (count < SIZE)
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[count].no);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[count].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[count].sal);
				count++;
			}
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}
			printf("\n");
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0;
}