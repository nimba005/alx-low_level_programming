#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of the list
 * @head: head of the double linked list
 * @n: value of the node to add
 * Return: add of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;
dlistint_t *cur = *head;
new = malloc(sizeof(dlistint_t));
if (new)
{
new->n = n;
new->next = NULL;
new->prev = NULL;
if (!(*head))
*head = new;
else
{
while (cur->next)
cur = cur->next;
cur->next = new;
new->prev = cur;
}
}
return (new);
}
