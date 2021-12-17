/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo2@myseneca.ca
Section: B
Date: 2018/10/29
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
int main() {

	// Declaring Variables
	struct Name cName = {{0}, {0}, {0}};
	struct Address cAddress = {0, {0}, 0, {0}, {0}};
	struct Numbers cNumbers = { {0}, {0}, {0}};
	char symbol, symbol2, symbol3, symbol4, symbol5;

	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name
	printf("Please enter the contact's first name: ");
	scanf(" %30s", cName.firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &symbol);
	if (symbol == 'Y' || symbol == 'y') 
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]", cName.middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf(" %10[^\n]s", cName.lastName);

	// Contact Address
	printf("Please enter the contact's street number: ");
	scanf("%d", &cAddress.streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %14[^\n]", cAddress.street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &symbol2);
	if (symbol2 == 'Y' || symbol2 == 'y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &cAddress.apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %8[^\n]s", cAddress.postalCode);
	
	printf("Please enter the contact's city: ");
	scanf(" %41[^\n]s", cAddress.city);
	// Contact Numbers

	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &symbol3);
	if (symbol3 == 'Y' || symbol3 == 'y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %11[^\n]s", cNumbers.cell);
	}


	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &symbol4);
	if (symbol4 == 'Y' || symbol4 == 'y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %11[^\n]s", cNumbers.home);
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &symbol5);
	if (symbol5 == 'Y' || symbol5 == 'y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %11[^\n]s", cNumbers.business);
	}

	printf("\n");

	printf("Contact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", cName.firstName);
	printf("Middle initial(s): %s\n", cName.middleInitial);
	printf("Last name: %s\n", cName.lastName);

	printf("\n");

	printf("Address Details\n");
	printf("Street number: %d\n", cAddress.streetNumber);
	printf("Street name: %s\n", cAddress.street);
	printf("Apartment: %d\n", cAddress.apartmentNumber);
	printf("Postal code: %s\n", cAddress.postalCode);
	printf("City: %s\n", cAddress.city);

	printf("\n");

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", cNumbers.cell);
	printf("Home phone number: %s\n", cNumbers.home);
	printf("Business phone number: %s\n", cNumbers.business);

	printf("\n");

	printf("Structure test for Name, Address, and Numbers Done!\n");

	return 0;
}