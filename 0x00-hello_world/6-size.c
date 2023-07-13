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

	printf("size of a char:%lu byte(s)\n",sizeof(c));
	printf("size of an int:%lu byte(s)\n",sizeof(i));
	prinf("size of a long int:%lu byte(s)\n",sizeof(l));
	printf("size of a long long int:%lu byte(s)\n",sizeof(ll));
	printf("size of a float:%lu byte(s)\n",sizeof(f));
	return (0);
}
