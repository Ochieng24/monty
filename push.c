#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 *
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
(void) stack; /* Unused parameter */
(void) line_number; /* Unused parameter */
}

/**
 * _push - Pushes an element onto the stack.
 *
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 * @operand: String representing the operand value to push.
 *
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
int _push(stack_t **head, unsigned int line_number, char *operand)
{
stack_t *newnode = NULL;
int exit_code = EXIT_SUCCESS;

newnode = malloc(sizeof(stack_t)); /* Allocate memory for the new node */
if (newnode == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit_code = EXIT_FAILURE; /* Set the exit code to failure */
}
else
{
if (operand == NULL || isdigits(operand) == 0)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit_code = EXIT_FAILURE; /* Set the exit code to failure */
free(newnode); /* Free allocated memory */
}
else
{
newnode->n = atoi(operand); /* Convert the operand to an integer and store in new node */
newnode->prev = NULL;
newnode->next = *head; /* Update the pointers */
*head = newnode; /* Update the head */
}
}
return (exit_code); /* Return the exit code */
}

/**
 * isdigits - Checks if a string consists of digits only.
 *
 * @operand: String to check.
 *
 * Return: 1 if the string consists of digits only, 0 otherwise.
 */
int isdigits(char *operand)
{
int i = 0;
int exit_code = 1;

/* Iterate through the string and check if each character is a digit or '-' */
while (operand[i] != '\0')
{
if (operand[i] == '-' || isdigit(operand[i]))
{
i++;
continue;
}
exit_code = 0;
break;
}
return (exit_code); /* Return the exit code */
}

/**
 * isPositive - Check if data is positive.
 *
 * @operand: Pointer to the data.
 *
 * Return: 1 if the data is positive, 0 otherwise.
 */
int isPositive(char *operand)
{
int i = 0;
int exit_code = 1;

/* Iterate through the string and check if each character is negative */
while (operand[i] != '\0')
{
if (operand[i] < 0)
{
i++;
continue;
}
exit_code = 0;
break;
}
return (exit_code); /* Return the exit code */
}

