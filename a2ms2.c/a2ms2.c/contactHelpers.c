/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo2@myseneca.ca
Section: B
Date: 2018/11/12
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contactHelpers.h" 
#include "contacts.h"

	// This source file needs to "know about" the functions you prototyped
	//       in the contact helper header file.
	// HINT: Put the header file name in double quotes so the compiler knows
	//       to look for it in the same directory/folder as this source file
	//       #include your contactHelpers header file on the next line:



	//------------------------------------------------------
	// Function Definitions
	//------------------------------------------------------

	// +-------------------------------------------------+
	// | ====== Assignment 2 | Milestone 2 =======       |
	// +-------------------------------------------------+
	// | Put empty function definitions below...         |
	// |                                                 |
	// | - The clearKeyboard function is done for you    |
	// +-------------------------------------------------+


	// clearKeyboard:  Empty function definition 
	void clearKeyboard(void)
	{
		while (getchar() != '\n');
	}

	// pause: Empty function definition goes here:
	void pause(void)
	{
		printf("(Press Enter to Continue)");
		clearKeyboard();
	}


	// getInt: Empty function definition goes here:
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

	// getIntInRange: Empty function definition goes here:
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


	// yes: Empty function definition goes here:
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


	// menu: Empty function definition goes here:
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
		
		return options;
	}


	// contactManagerSystem: Empty function definition goes here:
	void contactManagerSystem(void)
	{
		int response = 0;
		int menuFunc;
		do
		{
			menuFunc = menu();
			switch (menuFunc)
			{
				case 1:
				printf("\n<<< Feature 1 is unavailable >>>\n\n");
				pause();
				break;

				case 2:
				printf("\n<<< Feature 2 is unavailable >>>\n\n");
				pause();
				break;

				case 3:
				printf("\n<<< Feature 3 is unavailable >>>\n\n");
				pause();
				break; 

				case 4:
				printf("\n<<< Feature 4 is unavailable >>>\n\n");
				pause();
				break;

				case 5:
				printf("\n<<< Feature 5 is unavailable >>>\n\n");
				pause();
				break;

				case 6:
				printf("\n<<< Feature 6 is unavailable >>>\n\n");
				pause();
				break;

				case 0:
				printf("\nExit the program? (Y)es/(N)o: ");
				response = yes();
				break;
			}



			printf("\n");
		} while (response == 0);
		
			printf("Contact Management System: terminated\n");
		

	}

