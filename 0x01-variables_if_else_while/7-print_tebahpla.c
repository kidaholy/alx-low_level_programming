#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	
	for(char c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
