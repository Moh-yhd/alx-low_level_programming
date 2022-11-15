#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: is a pointer to a string containing the name of the dog
 * @age: is the age of the dog
 * @owner: is a pointer to a string containing the owner of the dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, j;

	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;

	if (name == NULL || owner == NULL)
		return (NULL);
	else
	{
	my_dog = malloc((i + j) * sizeof(char) + 4);
	if (my_dog == NULL)
	{
		return (NULL);
		free(my_dog);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
	}
}
