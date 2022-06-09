#include "lists.h"
/*
 *dlistint_len - returns the number of nodes in a doubly linked list
 *@h: pointer to the list
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int counter = 0;
if (h == NULL)
return (counter);
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
