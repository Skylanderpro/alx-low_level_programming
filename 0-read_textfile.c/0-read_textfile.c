#include "main.h"
/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. Returns 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWritten;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	close(fd);

	if (bytesRead == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
		return (0);

	return (bytesRead);
}
