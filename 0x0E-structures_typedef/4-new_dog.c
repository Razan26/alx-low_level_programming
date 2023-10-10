#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	return (r);
}

/**
 * *_strcpy - copeis string
 * @dest: pointer copy string
 * @src: string coped
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int hight, r;

	hight = 0;
	while (src[hight] != '\0')
	{
		hight++;
	}

	for (r = 0; r < hight; r++)
	{
		dest[r] = src[r];
	}

		dest[r] = '\0';
		return (dest);
}

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int hight1, hight2;

	hight1 = _strlen(name);
	hight2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (hight1 + 1));
	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (hight2 + 1));
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


