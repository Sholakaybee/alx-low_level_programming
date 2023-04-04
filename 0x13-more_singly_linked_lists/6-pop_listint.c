#include "lists.h"
/**
 * pop_listint - this deletes the first element of a list
 * @head: acts as a pointer to the first node of the list
 * Return: The number inside the deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
