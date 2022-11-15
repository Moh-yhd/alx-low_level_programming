#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialized a variable of type struct dog
 * @d: is a a pointer to the struct dog
 * @name: is a pointer to a string containig the name of the dog
 * @age: is a float corrosponding to the age of the dog
 * @owner: is a pointer to a string containing the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
