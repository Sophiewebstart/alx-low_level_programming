#include "main.h"

/**
  * create_file - this creats a file
  * @filename: name of the file to create
  * @text_content: NULL terminated string to write to the file
  *
  * Return: 1 on succes, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int file_d, letters = 0, numwr;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[letters])
	{
		letters++;
	}

	numwr = write(file_d, text_content, letters);
		if (numwr == -1)
			return (-1);
	close(file_d);

	return (1);
}
