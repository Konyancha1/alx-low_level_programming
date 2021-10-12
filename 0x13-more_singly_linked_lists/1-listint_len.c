#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: Head of a linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t no_nodes = 0;

while (h != NULL)
{
h = h->next;
no_nodes++;
}
return (no_nodes);
}
