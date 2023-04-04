#include "lists.h"

/**
 * listint_lent command is to count numbers of elements in a linked listint_t
 * @h: this is the List to check
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		number_of_elements++;
		p = p->next;
	}
	return (number_of_elements);
}
