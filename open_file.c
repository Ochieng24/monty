#include "monty.h"

/**
 * open_file - Open a file
 *
 * @fileName: Pointer to the name of the file to be opened
 *
 * Return: The opened file pointer, or NULL if failed
 */
FILE *open_file(char *fileName)
{
FILE *file;

file = fopen(fileName, "r"); /* Open the file in read mode */

if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", fileName); /* err msg */
}
return (file); /* Return the opened file pointer (or NULL if failed) */
}

