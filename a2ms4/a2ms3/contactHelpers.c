/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo2@myseneca.ca
Section: B
Date: 2018-11-22
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAXCONTACTS 5



// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:



// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:



//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n');
}

// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void)
{
	int Value;
	char NL = 'x';


	while (NL != '\n')
	{
		scanf("%d%c", &Value, &NL);
		if (NL != '\n')
		{
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
	return Value;
}

// getIntInRange:
int getIntInRange(int min, int max)
{
	int Value;
	int Flag = 0;
	while (Flag == 0)
	{
		Value = getInt();

		if ((Value < min) || (Value > max))
		{
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		}
		else
		{
			Flag = 1;
		}

	}
	return Value;

}

// yes:
int yes(void)
{
	char symbol;
	char NL;
	int response = 1;

	scanf(" %c%c", &symbol, &NL);
	while ((NL != '\n') || ((symbol != 'y') && (symbol != 'Y') && (symbol != 'N') && (symbol != 'n')))
	{
		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &symbol, &NL);
	}
	if ((symbol == 'y' || symbol == 'Y'))
	{
		response = 1;
	}
	else
	{
		response = 0;
	}
	return response;
}

// menu:
int menu(void)
{
	int options;

	printf("Contact Management System");
	printf("\n-------------------------");
	printf("\n1. Display contacts");
	printf("\n2. Add a contact");
	printf("\n3. Update a contact");
	printf("\n4. Delete a contact");
	printf("\n5. Search contacts by cell phone number");
	printf("\n6. Sort contacts by cell phone number");
	printf("\n0. Exit");
	printf("\n");
	printf("\nSelect an option:> ");
	options = getIntInRange(0, 6);
	printf("\n");

	return options;
}

// contactManagerSystem:
void contactManagerSystem(void)
{
	struct Contact contact[MAXCONTACTS] =
	{ { { "Rick", {'\0'}, "Grimes" },
		{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
		{ "4161112222", "4162223333", "4163334444" } },
		
	  { 
		 { "Maggie", "R.", "Greene" },
		 { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		 { "9051112222", "9052223333", "9053334444" } },

	  { 
		 { "Morgan", "A.", "Jones" },
		 { 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
		 { "7051112222", "7052223333", "7053334444" } },

	  { 
		 { "Sasha", {'\0'}, "Williams" },
		 { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		 { "9052223333", "9052223333", "9054445555" } },
	};
	int response = 0;
	int menuFunc;
	do
	{
		menuFunc = menu();
		switch (menuFunc)
		{
		case 1:
			displayContacts(contact, MAXCONTACTS);
			pause();
			break;

		case 2:
			addContact(contact, MAXCONTACTS);
			pause();
			break;

		case 3:
			updateContact(contact, MAXCONTACTS);
			pause();
			break;

		case 4:
			deleteContact(contact, MAXCONTACTS);
			printf("\n");
			pause();
			break;

		case 5:
			searchContacts(contact, MAXCONTACTS);
			pause();
			break;

		case 6:
			sortContacts(contact, MAXCONTACTS);
			pause();
			break;

		case 0:
			printf("Exit the program? (Y)es/(N)o: ");
			response = yes();
			break;
		}



		printf("\n");
	} while (response == 0);

	printf("Contact Management System: terminated\n");


}

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char telNum[])
{
	int needInput = 1;
	int i = 0;
	int counter = 0;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
		{
			for (i = 0; i < 10; i++)
			{
				if (telNum[i] >= '0' && telNum[i] <= '9')
				{
					counter++;
					if (counter == 10)
					{
						needInput = 0;
					}
				}
			}
		}
		if (needInput != 0)
		{
			printf("Enter a 10-digit phone number: ");
		}
			
	}
	

}
// findContactIndex:
int findContactIndex(const struct Contact contact[], int size, const char cellNum[])
{
	int i;
	int find;
	int index = -1;

	for (i = 0; i < size; i++)
	{
		find = strcmp(contact[i].numbers.cell, cellNum);
		if (find == 0)
		{
			index = i;
			
		}
	}
	return index;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int total)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", total);
}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact *contact)
{
	printf(" %s ", contact->name.firstName);
	if (contact->name.middleInitial[0] != '\0')
	{
		printf("%s ", contact->name.middleInitial);
	}
	printf("%s\n", contact->name.lastName);
	printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);
	if (contact->address.apartmentNumber > 0)
	{
		printf("       %d %s, Apt# %d, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.apartmentNumber, contact->address.city, contact->address.postalCode);
	}
	else
	{
		printf("       %d %s, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.city, contact->address.postalCode);
	}
}

// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contact[], int size)
{
	int i;
	int count = 0;

	displayContactHeader();

	for (i = 0; i < size; i++)
	{
		if (contact[i].numbers.cell[0] != '\0')
		{
			displayContact(&contact[i]);
			count++;
		}
	}
	displayContactFooter(count);
}

// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contact[], int size)
{
	int i = -1;
	char telNum[11];
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(telNum);
	i = findContactIndex(contact, size, telNum);

	if (i >= 0)
	{
		printf("\n");
		displayContact(&contact[i]);
		printf("\n");
	}
	else
	{
		printf("*** Contact NOT FOUND ***\n\n");
	}

}

// addContact:
// Put empty function definition below:
void addContact(struct Contact contact[], int size)
{
	int i;
	int empty = 100;
	int length = 1;

	for (i = 0; i < size; i++)
	{
		length = strlen(contact[i].numbers.cell);
		if (length == 0)
		{
			empty = i;
		}
	}
	if (empty == 100)
	{
		printf("*** ERROR: The contact list is full! ***\n");
		printf("\n");
	}

	else
	{
		getContact(&contact[empty]);
		printf("--- New contact added! ---\n\n");
	}
	
}


// updateContact:
// Put empty function definition below:
void updateContact(struct Contact contact[], int size)
{
	int i;
	char telNum[11];
	

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(telNum);
	i = findContactIndex(contact, size, telNum);

	if (i == -1)
	{
		printf("*** Contact NOT FOUND ***\n");
		printf("\n");
	}
	else
	{
		printf("\nContact found:\n");
		displayContact(&contact[i]);
		printf("\n");
		printf("Do you want to update the name? (y or n): ");
		if (yes())
		{
			strcpy(contact[i].name.firstName, "");
			strcpy(contact[i].name.middleInitial, "");
			strcpy(contact[i].name.lastName, "");

			getName(&contact[i].name);
		}
		printf("Do you want to update the address? (y or n): ");
		if (yes())
		{
			strcpy(contact[i].address.street, "");
			strcpy(contact[i].address.postalCode, "");
			strcpy(contact[i].address.city, "");

			getAddress(&contact[i].address);
		}
		printf("Do you want to update the numbers? (y or n): ");
		if (yes())
		{
			strcpy(contact[i].numbers.cell, "");
			strcpy(contact[i].numbers.home, "");
			strcpy(contact[i].numbers.business, "");

			getNumbers(&contact[i].numbers);

		}
		printf("--- Contact Updated! ---\n\n");
	}
}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact contact[], int size)
{
	int i = -1;
	int option = 0;
	char telNum[11];

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(telNum);
	i = findContactIndex(contact, size, telNum);

	if (i == -1)
	{
		printf("*** Contact NOT FOUND ***\n\n");
	}
	else
	{
		printf("\nContact found:\n");
		displayContact(&contact[i]);
		printf("\nCONFIRM: Delete this contact? (y or n): ");
		option = yes();
	}
	if (option == 1)
	{
		contact[i].numbers.cell[0] = '\0';
		contact[i].numbers.business[0] = '\0';
		contact[i].numbers.home[0] = '\0';
		printf("--- Contact deleted! ---\n");
	}
}


// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact contact[], int size)
{
	printf("<<< Feature to sort is unavailable >>>\n");
}