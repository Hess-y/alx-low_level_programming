#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: number of arguments
 * @av: double pointer to argument
 *
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{

	int x, y, z = 0, n = 0;

	char *a;

	if (ac <= 0 || av == NULL)

		return (NULL);

	for (x = 0; x < ac; x++)

	{
		for (y = 0; av[x][y]; y++)

			n++;
		n++;

	}

	n++;

	a = malloc(n * sizeof(char));

	if (a == NULL)

		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			a[z] = av[x][y];

			k++;
		}
		a[z] = '\n';
		z++;
	}
	a[s] = '\0';
	return (a);
}
