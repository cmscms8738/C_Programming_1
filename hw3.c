#include <stdio.h>

int main(void)
{
	int blank, star, i;

	for (i = 0; i < 5; i++)
	{
		for (blank =3; blank >= i; blank--)
		{
			printf(" ");
		}
		for (star = 0; star <= 2*i; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}