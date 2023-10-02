#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024
/**
 *print_error - for error message
 *@exit_code: the exit code
 *@error_msg: the error message to print
 *@arg: arguments
 */
void print_error(int exit_code, const char *error_msg, const char *arg)
{
	dprintf(STDERR_FILENO, error_msg, arg);
	exit(exit_code);
}
/**
 *main - entry point
 *@argc: number of args to main
 *@argv: string with arguments to main
 *
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd, bytes_read, bytes_written;
	char buf[BUF_SIZE];
	char fd_str[12];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (to_fd == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	while ((bytes_read = read(from_fd, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buf, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (bytes_read == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	sprintf(fd_str, "%d", from_fd);
	if (close(from_fd) == -1)
		print_error(100, "Error: Can't close fd %s\n", fd_str);

	sprintf(fd_str, "%d", to_fd);
	if (close(to_fd) == -1)
		print_error(100, "Error: Can't close fd %s\n", fd_str);

	return (0);
}
