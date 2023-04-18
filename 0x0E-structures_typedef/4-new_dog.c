#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;
	unsigned int lenName, lenOw, i, j;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (lenName = 0; name[lenName] != '\0'; lenName++)
		;
	for (lenOw = 0; owner[lenOw] != '\0'; lenOw++)
		;

	name_copy = malloc(lenName + 1);
	owner_copy = malloc(lenOw + 1);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(owner_copy);
		free(name_copy);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= lenName; i++)
		name_copy[i] = name[i];
	for (j = 0; j <= lenOw; j++)
		owner_copy[j] = owner[j];
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
