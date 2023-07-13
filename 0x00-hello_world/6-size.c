#include<stdio.h>
/**
 * main - sizeof
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long ll;
	long long l;
	float f;

	puts("size of a char:%lu byte(s)",sizeof(c))
	puts("size of an int:%lu byte(s)",sizeof(i))
	puts("size of a long int:%lu byte(s)",sizeof(l))
	puts("size of a long long int:%lu byte(s)",sizeof(ll))
	puts("size of a float:%lu byte(s)",sizeof(f)
	return (0);
}
