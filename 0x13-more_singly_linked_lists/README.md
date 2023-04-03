c - more singly linked list Directory
lists.h - contains prototypes to the functions
0-print_listint.c - c function that prints all elements of listint_linked list.returns the number of nodes in the listint_linked
1-listint_len.c - c functions that return the number of elements in listint_t linked list
2-add_nodeint.c - c fuction that add a node int at the beginning of listint_t linked list. if the fuction fails return NULL. otherwise return the address of the first element.
3-add_nodeint_end.c - c fuction that adds a new node int at the end of listint_t linked list. if the function fails return NULL. otherwise return address of new element
4-free_listint.c - c fuction that frees listint_t linked list
5-free_listint2.c - c function that listint_t linked list. sets the head to NULL
6-pop_listint.c - c function that deletes the hed node of listint_t linked list.if the linked list is empty return 0, otherwise return the head's node data (n)
7-get_nodeint.c - c function that locates a given node of listint_t linked list. if the node does not exist return NULL.otherwise return the located node
8-sum_listint.c - c function that returns sum of all data (n) of listint_t linked list.if the linked list is empty return 0, otherwise return the sum of all data (n).
9-insert_nodeint.c - c function that inserts a new node the listint_t of linked list at a given position.if it's not possible to add a new node at index idx or function fails return NULL, otherwise return the address of a new node
10-delete_nodeint.c - c function that deletes a node at a given index of listint_t of linked list.if the function succeed return 1.if the function fails return -1.
100-reverse_listint.c - c function that reverses listint_t of linked list using a maximum of 1 loop and 2 variables.return a pointer to the first node of reversed list
101-print_listint_safe.c - c function that prints listint_t of linked list safely(ie can free lists containing loops).returns the number of nodes in listint_t list
102-free_listint_safe.c - c function that frees listint_t linked list safely.return the size of list that was freed. sets the head to NULL.
103-find_loop.c - a funcion that finds the loop contained in listint_t linked list using a maximum of two variables.if no loop is found return NULL otherwise return the address of node where the loop starts.
