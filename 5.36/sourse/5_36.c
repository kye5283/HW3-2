#include <stdio.h>
#include <stdlib.h>

int TowerofHanoi(int n, char A, char B, char C);

int main(void)
{
	int n;
	printf("Enter the number of disk:");
	scanf_s("%d", &n);
	TowerofHanoi(n, 'A', 'B', 'C');
	printf("\n");
	system("pause");
	return 0;
}
int TowerofHanoi(int n, char A, char B, char C)
{
	if (n > 0)
	{
		TowerofHanoi(n - 1, A, C, B);
		printf("Move the disk %d from %c to %c \n", n, A, C);
		TowerofHanoi(n - 1, B, A, C);
	}
}

