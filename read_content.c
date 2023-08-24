#include "monty_main.h"

/**
 * read_file - Read the opened file and execute Monty bytecode.
 *
 * @file: Pointer to the opened file.
 *
 * Return: EXIT_SUCCESS on success, else EXIT_FAILURE.
 */
int read_file(FILE *file)
{
char *line = NULL; /* Store each line in the file */
size_t n = 0; /* Initial size for getline */
unsigned int line_number = 0; /* Track the line number */
stack_t *head = NULL; /* Initialize the stack's head pointer */
int exit_code = EXIT_SUCCESS; /* Initialize the exit code as success */

/* Read each line from the file using getline */
while (getline(&line, &n, file) != -1)
{
line_number++; /* Increment line number */
exit_code = parse_line(&head, line, line_number); /* Parse and execute the line */

if (exit_code == EXIT_FAILURE)
{
break; /* If an error occurred, break the loop */
}
}
free(line); /* Free the allocated memory for line */
free_list(&head); /* Free the stack's memory */
return (exit_code); /* Return the final exit code */
}

