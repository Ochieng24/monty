#include "monty.h"

/**
 * free_list - Free the stack memory.
 *
 * @head: Pointer to the first node of the stack.
 *
 * Return: void
 */
void free_list(stack_t **head)
{
stack_t *temp = NULL;

/* Loop through the stack and free each node */
while (*head != NULL)
{
temp = (*head)->next; /* Store the next node */
free(*head); /* Free the current node */
*head = temp; /* Move head to the next node */
}
}

