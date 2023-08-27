#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	char *duplicate = (char *)malloc(strlen(str) + 1);
	if (str == NULL)
		return NULL;

	if (duplicate == NULL)
	{	
		printf("Failed to allocate memory\n");
		return NULL;
	}

	strcpy(duplicate, str);

	return duplicate;
}

int main(void)
{
	char *duplicate;
	
	char original[] = "Hello, world!";
	duplicate = _strdup(original);

	if (duplicate != NULL)
	{	
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);

		free(duplicate);	
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
