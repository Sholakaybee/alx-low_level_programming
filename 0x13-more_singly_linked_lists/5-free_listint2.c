#include "lists.h"
/**
 * free_listint2 - This frees a list of nodes, and sets the head to NULL
 * @head: this is a pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
