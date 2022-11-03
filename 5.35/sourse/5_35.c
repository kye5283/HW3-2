#include <stdio.h>
#include <stdlib.h>

int n, n1 = 0, n2 = 1, n3;
unsigned long long int Fibonacci(int n);

int main(void)
{
	printf("Enter the number of elements : ");
	scanf_s("%d", &n);
	printf("Fibonacci series : 0, 1, ");
	Fibonacci(n - 2);
	system("pause");
	return 0;
}
unsigned long long int Fibonacci(int n)
{
	if (n > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d, ", n3);
		Fibonacci(n - 1);
	}
}