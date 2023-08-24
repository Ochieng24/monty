#include "monty.h"

/**
 * caller - Call the function based on the provided opcode
 *
 * @head: Pointer to the head of the stack
 * @opcode: Pointer to a string representing the opcode
 * @operand: Pointer to a string representing the operand
 * @line_number: Line number in the file
 *
 * Return: EXIT_SUCCESS on success, else EXIT_FAILURE
 */
int caller(stack_t **head, char *opcode, char *operand, unsigned int line_number)
{
int exit_code = EXIT_SUCCESS;

if (strcmp(opcode, "push") == 0)
{
exit_code = _push(head, line_number, operand); /* Call _push function */
}
else if (strcmp(opcode, "pall") == 0)
{
exit_code = _pall(head); /* Call _pall function */
}
else if (strcmp(opcode, "pint") == 0)
{
exit_code = _pint(head, line_number); /* Call _pint function */
}
else if (strcmp(opcode, "pop") == 0)
{
exit_code = _pop(head, line_number); /* Call _pop function */
}
else if (strcmp(opcode, "swap") == 0)
{
exit_code = _swap(head, line_number); /* Call _swap function */
}
else if (strcmp(opcode, "add") == 0)
{
exit_code = _add_two(head, line_number); /* Call _add_two function */
}
else if (strcmp(opcode, "sub") == 0)
{
exit_code = _sub(head, line_number); /* Call _sub function */
}
else if (strcmp(opcode, "div") == 0)
{
exit_code = _div_two(head, line_number); /* Call _div_two function */
}
else if (strcmp(opcode, "mul") == 0)
{
exit_code = _mul(head, line_number); /* Call _mul function */
}
else if (strcmp(opcode, "nop") == 0)
{
nop(head, line_number); /* No operation */
}
return (exit_code); /* Return the exit code */
}

