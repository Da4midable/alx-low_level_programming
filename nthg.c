#include <stdio.h>

int main()
{
	FILE* ptr;
	ptr = fopen("main.h", "r");
	char content[80];



	if (ptr == NULL)
	{
		printf("File cannot open at this time\n");
	}

	else 
	{
		while (fgets(content, 80, ptr))
		{
			printf("%s\n", content);
		}
	}

	fclose(ptr);

	

	FILE* fptr;
	fptr = fopen("tutorial.txt", "w");
	fputs("Let's get this ball rolling.\n", fptr);
	fputs("Abi no be so ni?\n", fptr);
	fputs("Arsenal ma na United for real.", fptr);
	fclose(fptr);
	return (0);
}