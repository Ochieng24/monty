#include "monty.h"

/**
 * div_two - Function to divide two numbers.
 *
 * @stack: Pointer to head of the stack.
 * @line_number: Line number in the file.
 *
 * Return: void
 */
void div_two(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter */
(void) line_number; /* Unused parameter */
}

/**
 * _div_two - Function to divide two top numbers.
 * @head: Pointer to head of the stack.
 * @line_number: Line number in the file.
 *
 * Return: EXIT_SUCCESS if successful, else EXIT_FAILURE.
 */
int _div_two(stack_t **head, unsigned int line_number)
{
stack_t *temp = NULL;
int element1 = 0, element2 = 2, exit_code = EXIT_SUCCESS;

/* Check if there are at least two elements in the stack */
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_number); /* Print an error message */
return (EXIT_FAILURE); /* Return failure code */
							    }

element1 = (*head)->n; /* Get the value of the first element */
element2 = (*head)->next->n; /* Get the value of the second element */

if (element1 == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number); /* Print an error message for division by zero */
return (EXIT_SUCCESS); /* Return success code (division by zero is not treated as an error) */
}

temp = *head; /* Store the current head in temp */
(*head)->next->n = element2 / element1; /* Perform division and update the value of the second element */
*head = (*head)->next; /* Move head to the next element */
(*head)->prev = NULL; /* Update the previous pointer of the new head */
free(temp); /* Free the memory of the previous head */
return (exit_code); /* Return the exit code (EXIT_SUCCESS) */
}

