#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

/*LIBRARIES*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* TYPEDEF */
/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * Description: singly linked list node structure for ALX projects
 */
typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the expree lane
 * Description: singly linked list node structure with an exprees lane for Holberton project
 */
typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;

/* FUNCTION PROTOTYPE */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advance_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
