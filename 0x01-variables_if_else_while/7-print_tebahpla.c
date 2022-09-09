#include <stdio.h>
/**
 * main - This is a function that prints a string
 * Description: This function prints /
 * the alphabet in lowercase and reverse order
 * Return: Return 0
 */
int	main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
