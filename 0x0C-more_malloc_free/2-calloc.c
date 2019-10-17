#include <unistd.h>
#include <stdlib.h>
/**
 * _calloc - Main entry
 *@nmemb: pointer
 *@size: pointer
 *Description:function allocates memory of an array using malloc
 * Return:char pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c;
	int *arr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	arr = malloc(sizeof(int) * size);

	if (arr != NULL)
	{
		for (c = 0; c < size; c++)
			arr[c] = 0;

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
