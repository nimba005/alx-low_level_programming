#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of the list
 * @head: ptr to the first node of the list
 * @n: data
 * Return: add of a new element on success, on ERROR NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newN = malloc(sizeof(dlistint_t));
if (newN == NULL)
{
return (NULL);
}
newN->next = *head;
newN->prev = NULL;
newN->n = n;
if (*head != NULL)
{
(*head)->prev = newN;
}
*head = newN;
return (newN);
}
