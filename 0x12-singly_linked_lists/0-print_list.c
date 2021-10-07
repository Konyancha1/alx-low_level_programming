#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: singly inked list
 * ReturnL number of elements in the liat.
 */
size_t print_list(const list_t *h)
{
size_t number_elements;

number_elements = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
number_elements++;
}
return (number_elements);
}
  
