#include "lists.h"

/**
 * list_len - prints the number of elements in a list.
 * @h: pointer to the list input
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
