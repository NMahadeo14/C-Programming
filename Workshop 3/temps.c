// Name: Devin Mahadeo
// Student Number: 160611174
// Email: Dmahadeo2@myseneca.ca
// Section: B
// Workshop: 3

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include <stdio.h>
#define NUMS 3 
int main() {

	int User = 0;
	int User2 = 0;
	int tothigh = 0;
	int totlow = 0;
	float mean = 0;
	int Total = 0;
	int temps;

	printf("___=== IPC Tempurature Analyzer ===___\n");
	for (temps = 0; temps < NUMS; temps++) {
		printf("Enter the high value for day %d ", temps + 1);
		scanf("%d", &User);
		printf("Enter the low value for day %d  ", temps + 1);
		scanf("%d", &User2);
		tothigh = tothigh + User;
		totlow = totlow + User2;
		while ((User < User2) || (User > 40) || (User2 < -40)) {
			printf("Incorrect values, temperatures must be in range -40 to 40, high must be greater then low.\n");
			temps--;
			tothigh = tothigh - User;
			totlow = totlow - User2;
			break;


		}
	}
	Total = tothigh + totlow;
	mean = (float)Total / 6; 
		printf("The average (mean) temperature was %.2f\n",mean);


	return 0;
}		