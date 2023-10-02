#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	int int_arg;
	char char_arg;
	float float_arg;
	char *str_arg;
	int print_separator = 0;

	va_start(args, format);

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				char_arg = va_arg(args, int);
				printf("%s%c", (print_separator ? ", " : ""),
						char_arg);
				print_separator = 1;
				break;
			case 'i':
				int_arg = va_arg(args, int);
				printf("%s%d", (print_separator ? ", " : ""),
						int_arg);
				print_separator = 1;
				break;
			case 'f':
				float_arg = va_arg(args, double);
				printf("%s%f", (print_separator ? ", " : ""),
						float_arg);
				print_separator = 1;
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
					printf("%s(nil)", (print_separator
							     ? ", " : ""));
				else
					printf("%s%s",
							(print_separator? ", "
							 : ""),str_arg);
				print_separator = 1;
				break;
			default:
				break;
		}

		ptr++;
	}

	printf("\n");
	va_end(args);
}
