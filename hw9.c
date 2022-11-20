#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
	{
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return ch - diff;
	}
	else
		return ch;
}
int main(void)
{
	char str[100];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		str[i] = convCase(str[i]);
	}
	printf("Output> "); printf(str);
	return 0;
}