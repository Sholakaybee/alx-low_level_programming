#include "lists.h"
listint_t *create_node(const int n);

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: Pointer to the beginning of a list
 * @n: number to add to the node
 * Return: A pointer to the beginning of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	tmp = *head;
	if (head == NULL)
		return (NULL);

	new = create_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;

	return (*head);
}

/**
 * create_node - this creates a node
 * @n: Value for the node
 * Return: A pointer leading to the beginning of the list
 */
listint_t *create_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}
