#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char s, c;

	for (s = 'a'; s <= 'z'; s++)
	putchar(s);
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
