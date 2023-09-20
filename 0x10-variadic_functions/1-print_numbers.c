#include <stdarg.h>

/**
 * print_numbers - Print numbers followed by a new line.
 * @separator: The string to be printed between numbers (or NULL)
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num, j, count, temp, k, divisor, digit; 

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
			temp = num;
		count = 0;
		while (temp != 0)
		{
			temp /= 10;
			count++;
		}
		for (j = count - 1; j >= 0; j--)
		{
			divisor = 1;
			for (k = 0; k < j; k++)
				divisor *= 10;
			digit = num / divisor;
			_putchar(digit + '0');
			num -= digit * divisor;
		}

		if (i < n - 1 && separator != NULL)
		{
			while (*separator != '\0')
				_putchar(*separator++);
		}
	}

	_putchar('\n');

	va_end(args);
}
