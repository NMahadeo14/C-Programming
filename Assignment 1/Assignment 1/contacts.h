/* -------------------------------------------
Name: Devin Mahadeo
Student number: 160611174
Email: Dmahadeo2@myseneca.ca
Section: B
Date: 2018/10/29
----------------------------------------------
Assignment: 1
Milestone:  1,3
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS

// Structure type Name declaration
	struct Name {
		char firstName[31];
		char middleInitial[7];
		char lastName[36];
	};

	// Structure type Address declaration
	struct Address {
		int streetNumber;
		char street[41];
		int apartmentNumber;
		char postalCode[8];
		char city[41];
	};


	// Structure type Numbers declaration
	struct Numbers {
		char cell[11];
		char home[11];
		char business[11];
	};


	// Structure type Numbers declaration
	struct Contacts {
		struct Name name;
		struct Address address;
		struct Numbers numbers;
	};
