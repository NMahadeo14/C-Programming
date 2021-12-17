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

	int days = 0;
	int counter2 = 1;
	int counter1;
	//int temph = 0;
	//int templ = 0;
	int temph[10];
	int templ[10];
	int day[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };

	printf("---=== IPC Temperture Calculator V2.0 ===---");
	printf("\nPlease enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);

	while ((days <= 2) || (days >= 11)) 
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
		printf("\n");
	}	
	
	for (counter1 = 0; counter1 < days; counter1++) 
	{
		printf("Day %d - High: ", counter2);
		scanf("%d", &temph[counter1]);
		printf("Day %d - Low: ", counter2);			
		scanf("%d", &templ[counter1]);
		counter2++;
	}
	printf("\nDay  High  Low\n");
	for (counter1 = 0; counter1 < days; counter1++) {
		printf("%d    %d    %d\n", day[counter1], temph[counter1], templ[counter1]);
	}
		

	return 0;
}