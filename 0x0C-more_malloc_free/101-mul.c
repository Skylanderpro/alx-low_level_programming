#include "main.h" 

/**
 * is_digit - Checks if a string is composed of digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
	}
	return 1;
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, 98 on incorrect usage or invalid input.
 */
int main(int argc, char *argv[])
{
	unsigned long long int num1, num2, result;
	if (argc != 3)
	{
		printf("Error\n");
		return 98;			
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return 98;			
	}

	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);

	result = num1 * num2;

	printf("%llu\n", result);

	return 0;
}
