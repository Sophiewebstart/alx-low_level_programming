#include "main.h"

/**
  * read_textfile - this reads a text file and prints to the
  * POSIX standard output
  * @filename: pointer to string
  * @letters: number of letters it should read and print
  *
  * Return: the actual number of letters it could read and print.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t numwr, numrd;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	numrd = read(file_d, buffer, letters);
	if (numrd == -1)
	{
		free(buffer);
		return (0);
	}
	numwr = write(STDOUT_FILENO, buffer, numrd);
	if (numwr == -1)
	{
		free(buffer);
		return (0);
	}
	close(file_d);
	free(buffer);

	return (numrd);
}
