#include <stdio.h>
#include <unistd.h>

/**
 * main - This is the main function for this progam
 * Description: this is the description of this program
 * Return: always 0
 **/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
