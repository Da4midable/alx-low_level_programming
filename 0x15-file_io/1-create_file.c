#include "main.h"

/**
* create_file - this function creates a file
* @filename: this  is the name of the file to create
* @text_content: this is a NULL terminated string to write to the file
* Return: 1 or -1, depending on program success or failure
*/


int create_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t bw = 0, len;

	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fl == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);

		if (len > 0)
		{
			bw = write(fl, text_content, len);

			if (bw == -1)
			{
				close(fl);
				return (-1);
			}
		}
	}

	close(fl);
	return (1);
}
