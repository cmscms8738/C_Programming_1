#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int odd_arr[] = { 0,0,0,0,0 };
	int even_arr[] = { 0,0,0,0,0 };
	int arr[5];

	printf("Please input five integers: ");
	for (int m = 0; m < 5; m++)
	{
		scanf("%d", &arr[m]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_arr[i] = arr[i];
		}
		else if (arr[i] % 2 == 1)
		{
			odd_arr[i] = arr[i];
		}
	}
	printf("Odd numbers: ");
	for (int j = 0; j < 5; j++)
	{
		if (odd_arr[j] != 0 && odd_arr[j] % 2 == 1)
		{
			printf("%d ", odd_arr[j]);
		}
	}
	printf("\n");
	printf("Even numbers: ");
	for (int k = 0; k < 5; k++)
	{
		if (even_arr[k] != 0 && even_arr[k] % 2 == 0)
		{
			printf("%d ", even_arr[k]);
		}
	}
	printf("\n");
	return 0;
}