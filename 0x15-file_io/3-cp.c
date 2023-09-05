#include "main.h"
/**
* main - prints argv
* @argv: array of strings
* @argc: size of array
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int FD_VALUE, FD2_VALUE;
	const char *file_from, *file_to;
	char buffer[BUFF_SIZE];
	ssize_t written_bytes, read_bytes;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	FD_VALUE = open(file_from, O_RDONLY);

	if (FD_VALUE == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	FD2_VALUE = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (FD2_VALUE == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((read_bytes = read(FD_VALUE, buffer, BUFF_SIZE)) > 0)
	{
		written_bytes = write(FD2_VALUE, buffer, read_bytes);

		if (written_bytes == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
       		dprintf(2, "Error: Can't read from file %s\n", file_from);
        	exit(98);
    }

	if (close(FD_VALUE) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}

	if (close(FD2_VALUE) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", FD2_VALUE);
		exit(100);
	}

	return (0);
}
