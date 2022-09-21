#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	float KM;
	float MILE;
	printf("Please enter kilometers: ");
	scanf("%f", &KM);

	MILE = KM / 1.609;
	printf("%.1f is equal to %.1f miles.", KM, MILE);
	return 0;
	
}