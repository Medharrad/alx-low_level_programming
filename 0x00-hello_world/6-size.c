#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of char is : %d byte\n", sizeof(char));
	printf("Size of int is : %d bytes\n", sizeof(int));
	printf("Size of long int is : %d bytes\n", sizeof(long int));
	printf("Size of long long int is : %d byt(s\n", sizeof(long long int));
	printf("Size of float is : %d bytes\n", sizeof(float));
	return (0);
}
