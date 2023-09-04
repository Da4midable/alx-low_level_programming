#include "main.h"

/**
* create_file - this function creates a file
* @filename: this  is the name of the file to create
* @text_content: this is a NULL terminated string to write to the file
* Return: 1 or -1, depending on program success or failure
*/


int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t written_bytes = 0, data_len;

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		data_len = strlen(text_content);

		if (data_len > 0)
		{
			written_bytes = write(file_descriptor, text_content, data_len);

			if (written_bytes == -1)
			{
				close(file_descriptor);
				return (-1);
			}
		}
	}

	close(file_descriptor);
	return (1);
}
