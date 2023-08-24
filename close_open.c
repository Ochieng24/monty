#include "monty_main.h"

/**
 * close_file - Close the file
 *
 * @file: Pointer to the file to be closed
 *
 * Return: void
 */
void close_file(FILE *file)
{
	fclose(file); /* Close the provided file */
}
