// Name: Devin Mahadeo
// Student Number: 160611174
// Email: Dmahadeo2@myseneca.ca
// Section: B
// Workshop: 3

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include <stdio.h>
#define NUMS 4
int main() {

	int User = 0;
	int User2 = 0;
	int tothigh = 0;
	int totlow = 0;
	float mean = 0;
	int Total = 0;
	int temps;
	int highesttemp = -40;
	int lowesttemp = 40;
	int dayhighest = 0;
	int daylowest = 0;


	printf("---=== IPC Tempurature Analyzer ===---");
	for (temps = 0; temps < NUMS; temps++) {
		printf("\nEnter the high value for day %d: ", temps + 1);
		scanf("%d", &User);
		printf("\nEnter the low value for day %d: ", temps + 1);
		scanf("%d", &User2);
		tothigh = tothigh + User;
		totlow = totlow + User2;

		if (User > highesttemp)
		{
			highesttemp = User;
			dayhighest = temps + 1;
		}

		if (User2 < lowesttemp)
		{
			lowesttemp = User2;
			daylowest = temps + 1;
		}

		while ((User < User2) || (User > 40) || (User2 < -40)) {
			printf("\nIncorrect values, temperatures must be in range -40 to 40, high must be greater then low.\n");
			temps--;
			tothigh = tothigh - User;
			totlow = totlow - User2;
			break;


		}
	}
	Total = tothigh + totlow;
	mean = (float)Total / 8;
	printf("\nThe average (mean) temperature was %.2f\n", mean);
	printf("The hightest temperature was %d, on day %d\n",highesttemp, dayhighest);
	printf("The lowest temperature was %d, on day %d\n",lowesttemp, daylowest);


	return 0;
}