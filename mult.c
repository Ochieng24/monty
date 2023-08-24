#include "monty.h"

/**
 * mul - Multiply two numbers
 *
 * @stack: Pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Return: Void
 */
void mul(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter */
(void) line_number; /* Unused parameter */
}

/**
 * _mul - Multiply two numbers
 *
 * @head: Pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Return: EXIT_SUCCESS on success, else EXIT_FAILURE
 */
int _mul(stack_t **head, unsigned int line_number)
{
stack_t *temp = NULL;
int element1 = 0, element2 = 2, exit_code = EXIT_SUCCESS;

/* Check if there are at least two elements in the stack */
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
return (EXIT_FAILURE);
}

temp = *head; /* Store the current head in temp */
element1 = (*head)->n; /* Get the value of the first element */
element2 = (*head)->next->n; /* Get the value of the second element */
element2 = element2 *element1; /* Calculate the product of the two elements */
(*head)->next->n = element2; /* Update the value of the second element */
*head = (*head)->next; /* Move head to the next element */
(*head)->prev = NULL; /* Update the previous pointer of the new head */
free(temp); /* Free the memory of the previous head */
return (exit_code); /* Return the exit code (EXIT_SUCCESS) */
}

