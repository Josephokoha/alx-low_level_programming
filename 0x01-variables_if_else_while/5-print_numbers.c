#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the main function of this program
 * description - the description of the program goes here for betty's sake
 * Return: always 0
 **/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
