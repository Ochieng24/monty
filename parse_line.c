#include "mont.h"

/**
 * parse_line - Parses a line of Monty bytecode and executes the corresponding instruction.
 *
 * @head: Double pointer to the stack's head.
 * @line: Line of Monty bytecode.
 * @line_number: Line number of the current bytecode instruction.
 *
 * Return: Exit code of the execution.
 */
int parse_line(stack_t **head, char *line, unsigned int line_number)
{
char *opcode = NULL, *operand = NULL;
int exit_code = EXIT_SUCCESS, index = 0;

instruction_t instructions[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add_two},
{"sub", sub},
{"div", div_two},
{"mul", mul},
{"nop", nop},
{NULL, NULL}
};
opcode = strtok(line, DELIM); /* Get the opcode */
operand = strtok(NULL, DELIM); /* Get the operand */
if (opcode != NULL)
{
/* Search for the opcode in the list of instructions */
for (; instructions[index].opcode != NULL; index++)
{
if (strcmp(instructions[index].opcode, opcode) == 0)
{
instructions[index].f(head, line_number); /* Execute the instruction function */
exit_code = caller(head, opcode, operand, line_number); /* Call the caller function */
break;
}
}
/* If the opcode is not found in the list of instructions */
if (instructions[index].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode); /* Print an error message */
exit_code = EXIT_FAILURE; /* Update the exit code to failure */
}
}
return (exit_code); /* Return the exit code */
}
