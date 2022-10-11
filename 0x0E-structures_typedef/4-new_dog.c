#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float *age, char *owner);

/**
 * _strlen - finds the length of string
 * @str - The string to be measured
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcpy - copies a string pointed to by src,
 * including the terminating null byte, to a buffer pointed to by dest
 * @dest: the buffer storing the string copy
 * @src: the source of a string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 *
 * Return: THe new struct
 */
dog_t *new_dog(char *name, float *age, char *owner)
{
	dog_t *woof;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);
	woof->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (woof->owner == NULL)
	{
		free(woof);
		return (NULL);
	}

	woof->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (woof->owner == NULL)
	{
		free(woof->name);
		free(woof);
		return (NULL);
	}
	woof->name = _strcpy(woof->name, name);
	woof->age = age;
	woof->owner = _strcpy(woof->owner, owner);

	return (woof);
}
