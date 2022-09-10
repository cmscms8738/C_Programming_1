#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);

	int Result_of_AND;
	Result_of_AND = num1 & num2;
	int Result_of_OR;
	Result_of_OR = num1 | num2;
	int Result_of_XOR;
	Result_of_XOR = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, Result_of_AND);
	printf("%d | %d = %d \n", num1, num2, Result_of_OR);
	printf("%d ^ %d = %d \n", num1, num2, Result_of_XOR);

	return 0;
}