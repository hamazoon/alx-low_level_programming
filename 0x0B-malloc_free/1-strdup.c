#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *h;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	h = malloc(sizeof(char) * (i + 1));
	if (h == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		h[n] = str[n];

	return (h);
}
