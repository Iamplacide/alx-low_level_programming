#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * _strlen - calculate the length of a string
 * @s: string to be calculated
 * Return: The string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src including 
 * '\0' to dest
 * @dest: pointer destination
 * @src: pointer source 
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog with the same struct
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lname, lowner;

	lname = _strlen(name);
	lowner = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lname + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lowner + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
