#include "main.h"

/**
 *  function that prints 10 alphabet, in lowercase, followed by a new line
 */

void main(void)
{
	char ch;

	ch = 'a';

	for (i = 1; i <= 10; i++)
	{

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
	}
