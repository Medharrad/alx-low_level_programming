#include <stdio.h>

/*
 * main - prints the alphabets in lowercase 
 * Return : 0 if nothing is wrong
 * putchar : print a single char 
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
