#include <stdio.h>
#include <stdlib.h>

int base, power, power1;
int calculate(int, int);

int main(void)
{
	printf("Enter base number:");
	scanf_s("%d", &base);
	printf("Enter exponent number(greater than or equal to 1):");
	scanf_s("%d", &power);
	power1 = power;
	if (power > 1)
	{
		printf("power( %d, %d )= %d", base, power, base);
		for (power; power > 1; power--)
		{
			printf(" * %d", base);
		}
		printf(" = %d\n", calculate(base, power1));
	}
	else
		printf("power( %d, %d )= %d\n", base, power, calculate(base, power1));
	system("pause");
	return 0;
}
int calculate(int base, int power)
{
	if (power != 0)
		return (base*calculate(base, power - 1));
	else
		return 1;
}