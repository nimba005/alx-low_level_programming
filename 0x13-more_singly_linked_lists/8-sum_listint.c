#include "lists.h"

/**
 * sumu_listint - returns the sum of all data(n) of a listint_t list
 * @head: first node in linked list
 * return: resulting sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
