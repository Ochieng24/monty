#include "monty_main.h"

/**
 * pall - Prints all the values on the stack, starting from the top.
 *
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter */
(void) line_number; /* Unused parameter */
}

/**
 * _pall - Prints all the values on the stack, starting from the top.
 *
 * @head: Double pointer to the stack's head.
 *
 * Return: EXIT_SUCCESS if successful.
 */
int _pall(stack_t **head)
{
stack_t *current;
current = *head;

/* Iterate through the stack and print each element's value */
while (current != NULL)
{
printf("%d\n", current->n); /* Print the value of the current element */
current = current->next; /* Move to the next element */
}
return (EXIT_SUCCESS); /* Return the exit code (EXIT_SUCCESS) */
}
