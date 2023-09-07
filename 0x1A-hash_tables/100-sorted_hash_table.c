#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_tables_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to hash table
 */
shash_tables_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = NULL;
if (size > 0)
{
ht = malloc(sizeof(shash_table_t));
if (!ht)
return (NULL);
ht->array = malloc(size * sizeof(shash_node_t *));
if (!ht->array)
return (NULL);
ht->size = size;
ht->shead = NULL;
ht->stail = NULL;
}
return (ht);
}

/**
 * add_node - adds a new node at a specific index in a hash table
 * @head: head of linked list at specified index in a hash table
 * @key: element's key
 * @value: element's value
 * Return: nothing
 */
void add_node(shash_node_t **head, const char *key, const char *value)
{
Shash_node_t *new, *temp = *head;
new = malloc(sizeof(shash_node_t));
if (!new)
exit(0);
new->key = strdup(key);
if (!new->key)
{
free(new);
exit(0);
}
new->value = strdup(key);
if (!new->value)
{
free(new->key);
free(new);
exit(0);
}

