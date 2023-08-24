#include "monty_main.h"

/**
 * pop - Removes the top element of the stack.
 *
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter */
(void) line_number; /* Unused parameter */
}

/**
 * _pop - Removes the top element of the stack.
 *
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 *
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
int _pop(stack_t **head, unsigned int line_number)
{
stack_t *temp = NULL;
int exit_code = EXIT_SUCCESS;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
return (EXIT_FAILURE); /* Return failure code */
}

temp = *head; /* Store the current head in temp */
*head = (*head)->next; /* Move head to the next element */
if (*head != NULL)
{
(*head)->prev = NULL; /* Update the previous pointer of the new head */
}
free(temp); /* Free the memory of the previous head */
return (exit_code); /* Return the exit code (EXIT_SUCCESS) */
}

