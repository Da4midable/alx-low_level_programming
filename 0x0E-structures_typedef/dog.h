#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this a struct for an animal
 * @name: name argument
 * @age: age argument
 * @owner: owner argument
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
