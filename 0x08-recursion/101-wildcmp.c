/**
 * wildcmp - Compares two strings with wildcards.
 * @s1: First string to compare.
 * @s2: Second string to compare, with wildcards.
 *
 * Return: 1 if strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0'))
			return 1;
		return 0;
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return 1;
	}

	if (*s1 == *s2)
		return wildcmp(s1 + 1, s2 + 1);

	return 0;
}
