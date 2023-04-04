#include "lists.h"

/**
 * print_listint - is used to prints all elements of a listint_t
 * @h: is the head of the list
 * Return: the number of nodes in the lists
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
