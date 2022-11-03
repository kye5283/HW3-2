#include <stdio.h>
#include <stdlib.h>

char change(int i);
int e;
char ch;

int main(void)
{
	printf("Enter a alphabet : ");
	scanf_s("%c", &ch);
	e = ch;
	printf("The alphabet is return : %c\n", change(e));
	system("pause");
	return 0;
}
char change(int i)
{

	if ((65 <= e) && (e <= 90))
		i = ch + 32;
	if ((97 <= e) && (e <= 122))
		i = ch - 32;
	
	return i;
}