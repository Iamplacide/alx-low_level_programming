#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - set the variable of the type struct dog
 * @d: pointer to the struct created earlier
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
