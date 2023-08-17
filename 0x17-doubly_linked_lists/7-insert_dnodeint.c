#include "lists.h"

/**
 * dlistint_len - returns the numberin a linked dlistint_t list
 * @h: head pointer to the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the doubly linked list
 * @idx: index to add the node
 * @n: value of the node
 * Return: value of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int len = dlistint_len(*h);
dlistint_t *new = NULL, *tmp = *h;
if (h)
{
if (idx > len)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
if (idx == len)
return (add_dnodeint_end(h, n));
new = malloc(sizeof(dlistint_t));
new->n = n;
if (new)
{
while (idx--)
{
tmp = tmp->next;
}
new->prev = tmp->prev;
new->next = tmp;
tmp->prev->next = new;
tmp->prev = new;
}
}
return (new);
}
