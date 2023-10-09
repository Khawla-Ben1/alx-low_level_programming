#include "main.h"


/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	unsigned int i;

	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		return (tmp);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp = malloc(new_size);
		if (tmp != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)tmp + i) = *((char *) ptr + i);
			free(ptr);
			return (tmp);
		}
		else
			return (NULL);
	}
}
