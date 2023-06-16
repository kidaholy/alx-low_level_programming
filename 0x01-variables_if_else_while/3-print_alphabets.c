#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char i = 'a';
	while(i <= 'z')
	{
		putchar(i);
		i++;
	}

	char j = 'A';
	while(j <= 'Z')
	{
		putchar(i);
		j++;
	}

	putchar('\n');
	return (0);
}
