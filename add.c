#include "monty.h"

/**
 * add_two - add two digits
 * @stack: pointer to the head of the list
 * @line_number: line number in the script
 * Return: No explicit return value, but modifies the stack
 */
void add_two(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter*/
(void) line_number; /*Unused parameter*/
}

/**
 * _add_two - add two digits
 * @head: pointer to the head of the list
 * @line_number: line number in the script
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE
 */
int _add_two(stack_t **head, unsigned int line_number)
{
stack_t *temp = NULL; /* Temporary node for freeing memory*/
int exit_code = EXIT_SUCCESS; /*Default exit code assuming success*/
int element1 = 0, element2 = 0; /* Vars to store val of stack elements*/

/* Check if there are at least two elements in the stack*/
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
return (EXIT_FAILURE); /*Return failure code*/
}

temp = *head; /* Store the current head in temp*/
element1 = (*head)->n; /* Get the value of the first element*/
element2 = (*head)->next->n; /* Get the value of the second element*/
element2 = element1 + element2; /* Calculate the sum of the two elements*/
(*head)->next->n = element2; /* Update the value of the second element*/
(*head) = (*head)->next; /* Move head to the next element*/
(*head)->prev = NULL; /* Update the previous pointer of the new head*/
free(temp); /* Free the memory of the previous head*/
return (exit_code); /* Return the exit code (EXIT_SUCCESS)*/
}

