#include <stdio.h>
/**
 * main - print numbers of base 10 with putchar
 *
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
