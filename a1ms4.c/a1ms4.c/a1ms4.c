/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo2
Section: B
Date: 08/11/2018
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include "contacts.h"
#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


int main(void)
{
	// Declare variables here:
	struct Contacts adminContact = {{"", "",""}, {0,"",0,"",""}, {"","",""}};

	// Create a variable of type Contact and call it something self-describing like "contact"
	// - HINT: Be sure to initialize the values to 0 and empty C strings
	// IMPORTANT:  Do NOT declare variables of type Name, Address, or Numbers


	// Display the title
	printf("Contact Management System\n");
	printf("=========================\n");

	// Call the Contact function getName to store the values for the Name member
	getName(&adminContact.name);
	// Call the Contact function getAddress to store the values for the Address member
	getAddress(&adminContact.address);

	// Call the Contact function getNumbers to store the values for the Numbers member
	getNumbers(&adminContact.numbers);

	// Display Contact summary details
	printf("\nContact Details\n");
	printf("===============\n");
	printf("Name Details\n");
	printf("------------\n");
	printf("First name: %s\n", adminContact.name.firstName);
	printf("Middle initial(s): %s\n", adminContact.name.middleInitial);
	printf("Last name: %s\n", adminContact.name.lastName);

	printf("\n");

	printf("Address Details\n");
	printf("---------------\n");
	printf("Street number: %d\n", adminContact.address.streetNumber);
	printf("Street name: %s\n", adminContact.address.street);
	printf("Apartment: %d\n", adminContact.address.apartmentNumber);
	printf("Postal code: %s\n", adminContact.address.postalCode);
	printf("City: %s\n", adminContact.address.city);

	printf("\n");

	printf("Phone Numbers\n");
	printf("-------------\n");
	printf("Cell phone number: %s\n", adminContact.numbers.cell);
	printf("Home phone number: %s\n", adminContact.numbers.home);
	printf("Business phone number: %s\n", adminContact.numbers.business);

	printf("\n");

	// Display Completion Message
	printf("Structure test for Contact using functions done!\n");

	return 0;
}