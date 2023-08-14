#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to call struct dog
 * @d: pointer
 * @name: name argument
 * @age: age argument
 * @owner: owner argument
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;

	}
}
