#include "lists.h"

/**
 * listint_len - this calculates the length of a list
 * @h: this shows the pointer of the list
 * Return: it returns the amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int z;

	if (h == NULL)
		return (0);
	for (z = 0; h != NULL; z++)
		h = h->next;
	return (z);
}
