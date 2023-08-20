#include "main.h"

/**
 * set_string - Set the value of a char pointer to another string
 * @s: Pointer to a char pointer to be updated
 * @to: String to set the char pointer to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
