#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: is a pointer to a pointer
 * @to: is char to be
 * Return: pointer to to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
