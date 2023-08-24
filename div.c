#include "monty.h"

/**
 * free_list - Free the memory used by the stack
 *
 * @head: Pointer to the pointer of the first node
 *
 * Return: void
 */
void free_list(stack_t **head)
{
stack_t *temp = NULL;

/* Iterate through the list and free each node's memory */
while (*head != NULL)
{
temp = (*head)->next; /* Store the next node before freeing */
free(*head); /* Free the current node */
*head = temp; /* Move head to the next node */
}
}

