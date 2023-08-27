#include <stdio.h>
/**
 * myFunction - Function
 * Return: 0
 */
void myFunction()__attribute__((constructor));

void myFunction()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
