#include "main.h"

/**
 * is_positive_integer - Checks if a string contains only positive integers
 * @str: The input string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_positive_integer(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!is_positive_integer(num1_str) || !is_positive_integer(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoull(num1_str, NULL, 10);
	num2 = strtoull(num2_str, NULL, 10);

	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
