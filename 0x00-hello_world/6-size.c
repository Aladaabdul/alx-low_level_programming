#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	printf("size of a char:%c byte(s)\n", sizeof(char));
	printf("size of an int:%d byte(s)\n", sizeof(int));
	prinf("size of a long int:%li byte(s)\n", sizeof(long int));
	printf("size of a long long int:%lu byte(s)\n", sizeof(long long int));
	printf("size of a float:%lu byte(s)\n", sizeof(float));
	return (0);
}
