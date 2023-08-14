#include <stdlib.h>
#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * print_dog - function to call struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);

	}
	if (d->name == NULL)
		printf("Name: (nil)");

	if (d->age < 0.0)
		printf("Age: (nil)");

	if (d->owner == NULL)
		printf("Owner: (nil)");

	if (d == NULL)
		return;
}
