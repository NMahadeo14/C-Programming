/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo@myseneca.ca
Section: B
Date: 2018-11-20
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"
#define _CRT_SECURE_NO_WARNINGS



// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+




// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


// getName:

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


// getAddress:

void getAddress(struct Address *contact)
{

	printf("Please enter the contact's street number: ");
	contact->streetNumber = getInt();

	while (contact->streetNumber < 0)
	{
		printf("Please enter the contact's street number: ");
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
		printf("Please enter the contact's apartment number: ");
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


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable

void getNumbers(struct Numbers *contact)
{

	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(contact->cell);


	printf("Do you want to enter a home phone number? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(contact->home);
	}


	printf("Do you want to enter a business phone number? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(contact->business);
	}

}

// getContact

void getContact(struct Contact *contact)
{
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
}
