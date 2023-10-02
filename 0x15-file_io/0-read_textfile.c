#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file to be created
 * @letters: the number of letters program should read and print
 * Return: wf
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
		char *buffer;
		ssize_t wf, bc, fl;

		fl = open(filename, O_RDONLY);

		if (fl == -1)
		{
			return (0);
		}

		buffer = malloc(sizeof(char) * letters);
		bc = read(fl, buffer, letters);
		wf = write(STDOUT_FILENO, buffer, bc);

		free(buffer);
		close(fl);
		return (wf);
}
