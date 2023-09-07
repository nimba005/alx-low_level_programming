#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds a new element to a hash table
 * @ht: address to hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index, i;
hash_node_t *new;
char *copy_value;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
copy_value = strdup(value);
if (copy_value == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = copy_value;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(copy_value);
return (0);
}
new->value = copy_value;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
