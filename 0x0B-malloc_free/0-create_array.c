#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char.
 * @size: size of array
 * @c: char to initialize array with.
 *
 * Return: NULL if it fails or
 * pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[1] - c;
	return (str);
}