#include<stdio.h>

/*
 * main - main entry point 
 * Return : 0 if nothing is wrong
 * putchar : print a single char 
 */
int main(void)
{
	char ch;

	for(ch='a';ch<='z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
