#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a structure called dog
 * @name: is a pointer to a string containing the name of the dog
 * @age: is an integer corrosponding to the age of the dog
 * @owner: is a pointer to a string containing the name of the owner of the dog
 *
 * Description: this structure creates a data structure for saving a dog's
 * name, its age, and its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *copy_str(char *s1, char *s2);
void free_dog(dog_t *d);

#endif
