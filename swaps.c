#include "monty_main.h"

/**
 * swap - Swaps the top two elements of the stack.
 *
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter */
(void) line_number; /* Unused parameter */
}

/**
 * _swap - Swaps the top two elements of the stack.
 *
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 *
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
int _swap(stack_t **head, unsigned int line_number)
{
stack_t *node1 = NULL;
stack_t *node2 = NULL;
int exit_code = EXIT_SUCCESS;

/* Check if there are at least two elements in the stack */
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number); /* Print an error message */
return (EXIT_FAILURE); /* Return failure code */
}

node1 = *head; /* Get the first node */
node2 = (*head)->next; /* Get the second node */
node1->next = node2->next; /* Update the next pointer of the first node */
if (node1->next)
node1->next->prev = node1; /* Update the previous pointer of the next node if it exists */
node2->prev = NULL; /* Update the previous pointer of the second node */
node2->next = node1; /* Update the next pointer of the second node */
node1->prev = node2; /* Update the previous pointer of the first node */
*head = node2; /* Update the head to the new second node */
return (exit_code); /* Return the exit code (EXIT_SUCCESS) */
}

