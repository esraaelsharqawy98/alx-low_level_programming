#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	While (h)
	{
		nodes++;
		printf("%d\n",h->n);
		h = h->next
	}
	return nodes;
}
