#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list
 * @head:first node in linked list
 * @index: index of the node to return
 * return: pointer to the node or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
