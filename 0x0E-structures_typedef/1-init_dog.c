#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - create dog in function
 * @milou: dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog, NULL if fails
 **/
void init_dog(struct dog *milou, char *name, float age, char *owner)
{
	if (milou == NULL)
		return;
	milou->name = name;
	milou->age = age;
	milou->owner = owner;
}
