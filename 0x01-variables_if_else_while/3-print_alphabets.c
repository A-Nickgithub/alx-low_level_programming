#include<stdio.h>
/**
 * main- main function
 * program that prints alphabets in lowwer and uppercase
 * Return:Always 0
 */
int main(void)
{
	for (letter = 'a' ; letter <= 'z' ; letter++)
		putchar(letter);
	for (letter = 'A' ; letter <= 'Z' ; letter++)
		putchar(letter);
	putchar('\n')
		return (0);
}
