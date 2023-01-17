#include "dog.h"


/**
 * init_dog - initializes a variablestruct dog
 * @d: the variable to be initialised
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
