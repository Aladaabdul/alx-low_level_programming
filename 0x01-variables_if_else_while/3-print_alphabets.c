#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alawys 0
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
