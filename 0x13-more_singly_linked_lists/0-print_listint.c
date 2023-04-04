#include "lists.h"

/**
 * print_listint - it prints all the elements of the list
 * @h: this is a pointer to a list
 * Return: it returns the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int z;

	if (h == NULL)
		return (0);
	for (z = 0; h != NULL; z++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (z);
}
