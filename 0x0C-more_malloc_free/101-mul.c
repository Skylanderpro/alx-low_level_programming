#include "main.h"

int is_positive_integer(const char *str);
/**
 *main - calculates product
 *@argc: number of arguments to main
 *@argv: the pointer to the arguments to main
 *
 *Return: 98 for error and product o.w
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;
	char *num1_str, *num2_str;

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

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = num1 * num2;

	printf("%u\n", result);

	return (0);
}
/**
 *is_positive_integer - checks for positive integer
 *@str: the string to check if value is int or not
 *
 *Return: 1 for success and 0 o.w
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
