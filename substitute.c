 #include "monty_main.h"

/**
 * sub - Subtract two numbers
 *
 * @stack: Pointer to head of the stack
 * @line_number: Line number in the file
 *
 * Return: Void
 */
void sub(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter */
(void) line_number; /* Unused parameter */
}

/**
 * _sub - Subtract two numbers
 *
 * @head: Pointer to head of the stack
 * @line_number: Line number in the file
 *
 * Return: EXIT_SUCCESS on success, else EXIT_FAILURE
 */
int _sub(stack_t **head, unsigned int line_number)
{
stack_t *temp = NULL;
int element1 = 0, element2 = 2, exit_code = EXIT_SUCCESS;

/* Check if there are at least two elements in the stack */
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number); /* Print an error message */
return (EXIT_FAILURE); /* Return failure code */
}

temp = *head; /* Store the current head in temp */
element1 = (*head)->n; /* Get the value of the first element */
element2 = (*head)->next->n; /* Get the value of the second element */
element2 = element2 - element1; /* Calculate the difference of the two elements */
(*head)->next->n = element2; /* Update the value of the second element */
*head = (*head)->next; /* Move head to the next element */
(*head)->prev = NULL; /* Update the previous pointer of the new head */
free(temp); /* Free the memory of the previous head */
return (exit_code); /* Return the exit code (EXIT_SUCCESS) */
}

