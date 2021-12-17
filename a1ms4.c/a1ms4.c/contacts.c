/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo2@myseneca.ca
Section: B
Date: 11/07/2018
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */
#include <stdio.h>
#include "contacts.h"
#define _CRT_SECURE_NO_WARNINGS

// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Name *contact) 
{
	char symbol;
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]s", contact->firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &symbol);

	if (symbol == 'Y' || symbol == 'y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]s", contact->middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]s", contact->lastName);
	
}

// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *contact)
{
	char symbol;
	printf("Please enter the contact's street number: ");
	scanf(" %d", &contact->streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %14[^\n]s", contact->street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &symbol);

	if (symbol == 'Y' || symbol == 'y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &contact->apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %8[^\n]s", contact->postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %41[^\n]", contact->city);
}

// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers *contact)
{
	char symbol;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &symbol);

	if (symbol == 'Y' || symbol == 'y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %11[^\n]s", contact->cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &symbol);

	if (symbol == 'Y' || symbol == 'y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %11[^\n]s", contact->home);
	}


	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &symbol);

	if (symbol == 'Y' || symbol == 'y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %11[^\n]s", contact->business);
	}

}























