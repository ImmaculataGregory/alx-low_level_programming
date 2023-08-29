#include "lists.h"

/**
 * print_listint_recursive - prints elements of a linked list recursively
 * @h: linked list of type listint_t to print
 * @num: current number of nodes (initialized as 0)
 *
 * Return: number of nodes
 */
size_t print_listint_recursive(const listint_t *h, size_t num)
{
	if (!h)
		return (num);

	printf("%d\n", h->n);
	return (print_listint_recursive(h->next, num + 1));
}

