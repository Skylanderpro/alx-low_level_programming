#include “variadic_functions.h”

/**
 * print_all - Print anything based on the provided format.
 * @format: Format specifying the types of arguments
 * (c: char, i: integer, f: float, s: char *).
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	int int_arg;
	char char_arg;
	float float_arg;
	char *str_arg;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			char_arg = va_arg(args, int); // 'char' is promoted to 'int' in variadic functions
			printf("%c", char_arg);
		}
		else if (*ptr == 'i')
		{
			int_arg = va_arg(args, int);
			printf("%d", int_arg);
		}
		else if (*ptr == 'f')
		{
			float_arg = va_arg(args, double); // 'float' is promoted to 'double' in variadic functions
			printf("%f", float_arg);
		}
		else if (*ptr == 's')
		{
			str_arg = va_arg(args, char *);
			if (str_arg == NULL)
				printf("(nil)");
			else
				printf("%s", str_arg);
		}

		ptr++;

		if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
