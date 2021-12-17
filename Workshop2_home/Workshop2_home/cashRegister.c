/*
Name:      <Devin>
Student# : <160611174>
Section : <SBB>
*/

#define _CRT_SECURE_NO_WARNINGS

	// Paste your in-lab code below and upgrade it to the at-home specifications
#include <stdio.h>
int main() {
	float amountpaid;
	int Looniesreq;
	int Quatersreq;
	int Dimesreq;
	int Nickelsreq;
	int Penniesreq;
	float GST;
	int Totalmon; 

	printf("Please enter the amount to be paid: $");
	scanf("%f", &amountpaid);
	GST = amountpaid * .13 + .005;
	Totalmon = (amountpaid + GST) * 100;

	Looniesreq = Totalmon / 100; 
	Quatersreq = (Totalmon % 100) / 25;
	Dimesreq = (Totalmon  % 25) / 10;
	Nickelsreq = Totalmon % 25 % 10 / 5;
	Penniesreq = Totalmon % 5 / 1;

	printf("GST: 1.13\n");
	printf("Balance owing: $%.2f \n", amountpaid);
	printf("Loonies required: %d, balance owing $%.2f \n", Looniesreq, (float)(Totalmon % 100) /100);
	printf("Quarters required: %d, balance owing $%.2f \n", Quatersreq, (float)(Totalmon % 25 ) /100);
	printf("Dimes required: %d, balance owing $%.2f \n", Dimesreq, (float)(Totalmon % 25) / 100);
	printf("Nickels required: %d, balence owing $%.2f \n", Nickelsreq, (float)(Totalmon %5) /100);
	printf("Pennies required: %d, balence owing $%.2f \n", Penniesreq, (float)(Totalmon %1 ) /100);
	return 0;
}
