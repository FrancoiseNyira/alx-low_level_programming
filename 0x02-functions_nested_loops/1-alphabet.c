/**
 * print_alphabet - This is a function that prints a string
 * Description: This function prints /
 * the alphabet in lowercase
 * Return: Returns 0
 */
#include "main.h"
void	print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
