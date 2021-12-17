//--------------------------------------------------
// Name: Devin Mahadeo          
// Student Number: 160611174
// Email: Dmahadeo@myseneca.ca       
// Section: B     
// Workshop: 4      
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include <stdio.h>
int main() {
	
	int total = 0;
	float averagetemp = 0;
	int days2 = 0;
	int dayhighest = 0;
	int daylowest = 0;
	int highesttemp;
	int lowesttemp;
	int days = 0;
	int counter2 = 1;
	int counter1;
	//int temph = 0;
	//int templ = 0;
	int temph[10];
	int templ[10];
	int day[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };

	printf("---=== IPC Temperature Calculator V2.0 ===---");
	printf("\nPlease enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);
	printf("\n");

	while ((days <= 2) || (days >= 11))
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
		printf("\n");
	}

	for (counter1 = 0; counter1 < days; counter1++)
	{
		printf("Day %d - High: ", counter1 + 1);
		scanf("%d", &temph[counter1]);
		printf("Day %d - Low: ", counter1 + 1);
		scanf("%d", &templ[counter1]);
		

		if (counter1 == 0)
		{
			highesttemp = temph[counter1];
			lowesttemp = templ[counter1];
		}

		if (temph[counter1] > highesttemp)
		{
			highesttemp = temph[counter1];
			dayhighest = counter1 + 1;
		}

		if (templ[counter1] < lowesttemp)
		{
			lowesttemp = templ[counter1];
			daylowest = counter1 + 1;
		}

	}

	printf("\nDay  Hi  Low\n");
	for (counter1 = 0; counter1 < days; counter1++) 
	{
		printf("%d    %d    %d\n", day[counter1], temph[counter1], templ[counter1]);
	}

	printf("\nThe highest temperature was %d, on day %d\n", highesttemp, dayhighest);
	printf("The lowest temperature was %d, on day %d\n", lowesttemp, daylowest);
	printf("\n");

	while (1)
	{
		printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &days2);
		printf("\n");

		if (days2 < 0)
		{
			printf("\nGoodbye!\n");
			break;
		}

		while ((days2 < 1) || (days2 > 4) || (days2 == 0))
		{
			printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &days2);
			printf("\n");
		}

		for (counter1 = 0; counter1 < days2; counter1++) {

			averagetemp = averagetemp + (float)temph[counter1] + (float)templ[counter1];
		}

		printf("\n");
		printf("The average temperature up to day %d is: %.2f\n", days2, averagetemp/(days2*2));
		printf("\n");

		averagetemp = 0; 

	} 
	
	return 0;

}