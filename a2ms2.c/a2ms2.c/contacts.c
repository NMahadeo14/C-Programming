/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo2@myseneca.ca
Section: B
Date: 11/12/2018
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"
#define _CRT_SECURE_NO_WARNINGS

// Put your code here that defines the Contact getName function:
void getName(struct Name *contact)
{
	
	printf("Please enter the contact's first name: ");
	scanf("%[^\n]s", contact->firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", contact->middleInitial);
		clearKeyboard();
	}

	printf("Please enter the contact's last name: ");
	scanf(" %[^\n]s", contact->lastName);
	clearKeyboard();
}

// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *contact)
{
	
	printf("Please enter the contact's street number: ");
	contact->streetNumber = getInt();

	while (contact->streetNumber < 0)
	{
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		scanf("%d", &contact->streetNumber);
		clearKeyboard();
	}

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]s", contact->street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's apartment number: ");
		contact->apartmentNumber = getInt();
	}

	while (contact->apartmentNumber < 0)
	{
		printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
		scanf("%d", &contact->apartmentNumber);
		clearKeyboard();
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", contact->postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]s", contact->city);
	clearKeyboard();
}

void getNumbers(struct Numbers *contact)
{
	 
	printf("Please enter the contact's cell phone number: ");
	scanf(" %11[^\n]s", contact->cell);


	printf("Do you want to enter a home phone number? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %11[^\n]s", contact->home);
	}


	printf("Do you want to enter a business phone number? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %11[^\n]s", contact->business);
	}

}

void getContact(struct Contact *contact)
{
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
}
