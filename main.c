#include "monty.h"

/**
 * main - Entry point of the Monty interpreter.
 *
 * @argc: Number of arguments on the command line.
 * @argv: Array holding the command line arguments.
 *
 * Return: EXIT_SUCCESS on success, else EXIT_FAILURE.
 */
int main(int argc, char *argv[])
{
char *fileName = NULL;
FILE *file = NULL;
int exit_code = EXIT_SUCCESS;

/* Check the number of command line arguments */
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n"); /* Print usage message */
exit_code = EXIT_FAILURE; /* Set exit code to failure */
}
else
{
fileName = argv[1]; /* Get the filename from command line */
file = open_file(fileName); /* Open the file */

if (file == NULL)
{
exit_code = EXIT_FAILURE; /* Set exit code to failure if file open fails */
}
else
{
exit_code = read_file(file); /* Read and execute the Monty bytecode */
close_file(file); /* Close the file */
}
}
return (exit_code); /* Return the final exit code */
}

