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

#define SIZE 4

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
	int idstore; 
	int i;
	

	printf("---=== EMPLOYEE DATA ===---\n\n");


	do
	{
		//print options list
		printf("1. Display Employee information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
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

			for (i = 0; i < counter; i++)
			{
				printf("%6d%9d%11.2lf\n", emp[i].no, emp[i].age, emp[i].sal);
			}
			printf("\n");

			break;

		case 2: // Adding Employees

			printf("Adding Employee\n");
			printf("===============\n");

			if (counter < SIZE)
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[counter].no);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[counter].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[counter].sal);
				counter++;
			}	
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}
			printf("\n");
			break;

		case 3: // Update Employee Salary
			
			printf("Update Employee Salary\n");
			printf("======================\n");

			do
			{	
				printf("Enter Employee ID: ");
				scanf("%d", &idstore);

				for (counter = 0; counter < SIZE; counter++)
				{
					if (idstore == emp[counter].no)
					{
						printf("The current salary is %.2lf\n", emp[counter].sal);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[counter].sal);
						break;
					}
					else if (idstore != emp[counter].no && SIZE - 1 == counter)
					{ 
						printf("*** ERROR: Employee ID not found ***\n");						
					}
				}
			} while (idstore != emp[counter].no);
			printf("\n");
			break;
		
		case 4: // Remove Employee

			printf("Remove Employee\n");
			printf("===============\n");


			do
			{
				printf("Enter Employee ID: ");
				scanf("%d", &idstore);


				for (counter = 0; counter < SIZE; counter++)
				{
					if (idstore == emp[counter].no )
					{
						printf("Employee %d will be removed\n", emp[counter].no);
						break; 

					}
					else if (idstore != emp[counter].no && SIZE - 1 == counter)
					{
						printf("*** ERROR: Employee ID not found ***\n");
					}
				}
			} while (idstore != emp[counter].no);
			break;
			printf("\n");
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);
	


	return 0;
}