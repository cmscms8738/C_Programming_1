#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct cities
{
	char cityName[30];
	char CountryName[30];
	int Population;
} Cities;

int main(void)
{
	struct cities arr[3];
	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf("%s", arr[i].cityName);
		printf("Country> ");
		scanf("%s", arr[i].CountryName);
		printf("Population> ");
		scanf("%s", &arr[i].Population);
	}
	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people \n", i+1, arr[i].cityName, arr[i].CountryName, arr[i].Population);
	}
	return 0;
}