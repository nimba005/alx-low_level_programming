#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data of a dlistint_t linked list
 * @head: head of the double linked list
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
