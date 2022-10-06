#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Recur(int n)
{
	if (n == 0 || n == 1)
	{
		printf("%d", n);
		return 0;
	}
	else
	{
		Recur(n / 2);
		return printf("%d", n % 2);
	}
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	Recur(num);
	return 0;
}