#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Formal parameter
 * Return: 1
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
