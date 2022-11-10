#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Calculation(int* ptr1, int* ptr2, int* ptr3, int* ptr4, int* ptr5)
{
	double Ave = (*ptr1 + *ptr2 + *ptr3 + *ptr4 + *ptr5) / 5;
	double Standard_Dev = sqrt((pow(*ptr1 - Ave, 2) + pow(*ptr2 - Ave, 2) + pow(*ptr3 - Ave, 2) + pow(*ptr4 - Ave, 2) + pow(*ptr5 - Ave, 2)) / 5);
	printf("Standard Deviation = %.3f", Standard_Dev);

}
int main(void)
{
	double arr[5] = { 0,0,0,0,0 };
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	Calculation(&arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	return 0;
}