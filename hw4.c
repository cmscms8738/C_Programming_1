#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("It is not a prime number.");
		return 0;
	}
	else
	{
		for (int i = 1; i <= num; i++)
		{
			if (i == num || i == 1)
			{
				continue;
			}
			if (num % i == 0)
			{
				printf("It is not a prime number.");
				return 0;
			}
		}
	}
	printf("It is a prime number.");
	return 0;
}