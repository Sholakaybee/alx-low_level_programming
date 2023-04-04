#include "lists.h"
/**
 * sum_listint - this calculates the sum of the integers in a list
 * @head: is a pointer to the first element of a list
 * Return: this returns an integer representing the sum of values
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
