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
	int i = 0, j = 0;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	if (name == NULL || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t) + 4);
	if (my_dog == NULL)
	{
		return (NULL);
		free(my_dog);
	}
	my_dog->name = malloc(i * sizeof(char) + 1);
	if (my_dog->name == NULL)
	{
		return (NULL);
		free(my_dog);
		free(my_dog->name);
	}
	my_dog->owner = malloc(j * sizeof(char) + 1);
	if (my_dog->owner == NULL)
	{
		return (NULL);
		free(my_dog);
		free(my_dog->name);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
