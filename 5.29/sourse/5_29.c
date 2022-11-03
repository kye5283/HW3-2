#include <stdio.h>
#include <stdlib.h>

int i, j, lcm;
int LCM(int a, int b);

int main(void)
{
	printf("Enter two numbers :");
	scanf_s("%d %d", &i, &j);
	printf("The LCM of %d and %d is %d\n", i, j, (i*j) / LCM(i, j));
	system("pause");
	return 0;
}
int LCM(int a, int b)
{
	if (b == 0)
		return a;
	return LCM(b, a % b);
}
