#include "main.h"
#include <string.h>

/**
 *is_palindrome - Checks if a string is a palindrome.
 *@s: The string to be checked.
 *
 *Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 *is_palindrome_helper - Helper function to check if a string is a palindrome.
 *@s: The string to be checked.
 *@start: The starting index.
 *@end: The ending index.
 *
 *Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}
