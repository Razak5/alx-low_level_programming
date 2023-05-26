#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this will initialize vaiable of type dog
 *
 * @d: the pointer to be initialized
 * @name: name to initialize
 * @age: the age to be iniatialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

