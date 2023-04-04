#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: pointer to the first element in the linked list
 * return: head node data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
