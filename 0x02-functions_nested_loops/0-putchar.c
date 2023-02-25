#include "main.h"
/**
 * main - print the word _putchar following by a new line
 *
 * Return: 0
 *
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i] != 00 ; i++)
	{
		_putchar (c[i]);
	}

_putchar('\n');

return (0);

}
