#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list
 * @head: head of tne double linked list
 * @index: index of the node to get
 * Return: address of the node at the nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (i != index && head)
{
head = head->next;
i++;
}
if (i == index && head)
return (head);
return (NULL);
}
