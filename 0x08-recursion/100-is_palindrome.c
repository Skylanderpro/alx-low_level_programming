#include "main.h"
/**
 *_strlen_recursion - gets the string length
 *@s: the string to print
 *Return: lenght of the string or 0 for error
 */
int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 *palincheck - checks if a string is a palindrome or not
 *@s: the input string
 *@start: the starting index of the string
 *@end: the ending index of the string
 *Return: 1 for palindrome, 0 if not
 */
int palincheck(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palincheck(s, start + 1, end - 1));
}

/**
 *is_palindrome - checks if a string is a palindrome or not
 *@s: the string to check
 *Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);

	return (palincheck(s, 0, len - 1));
}
