#include "main.h"

/**
  * append_text_to_file - this appends a text at the end of a file
  * @filename: name of the file
  * @text_content: NULL terminated string to add at the end of file
  *
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int numwr, letters, file_d;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

		if (file_d == -1)
			return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		numwr = write(file_d, text_content, letters);
	}
	if (numwr == -1)
	{
		close(file_d);
	}

	return (-1);
}
