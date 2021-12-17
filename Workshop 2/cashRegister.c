/*
	 Name:      <Devin>
	 Student#:  <160611174>
	 Section:   <A>
*/

#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications
#include <stdio.h>
int main() {
	float amountpaid;
	int Looniesreq;
	int Quatersreq;


	printf("Please enter the amount to be paid: $");
	scanf("%f", &amountpaid);
	Looniesreq = amountpaid;
	Quatersreq = (amountpaid - Looniesreq) / 0.25;

	printf("Loonies required: %d, balance owing $%.2f \n" ,Looniesreq, amountpaid - Looniesreq);
	printf("Quarters required: %d, balance owing $%.2f \n", Quatersreq, (amountpaid - Looniesreq) - 0.25 * Quatersreq);
	return 0;
}
