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
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(i * sizeof(char) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	my_dog->owner = malloc(j * sizeof(char) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		free(my_dog->owner);
		return (NULL);
	}
	copy_str(name, my_dog->name);
	my_dog->age = age;
	copy_str(owner, my_dog->owner);
	return (my_dog);
}

/**
 * copy_str - copies a sting to a memory location
 * @s1: is a pointer to the string to be copied
 * @s2: is a pointer to a memory location where s1 is to be copied
 *
 * Return: pointer to s2
 */
char *copy_str(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';

	return (s2);
}
