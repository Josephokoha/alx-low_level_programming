#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the main function of this program
 * description - this is the description of the program function
 * Return: always 0
 **/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
