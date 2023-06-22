#include "monty.h"
/**
 * main - Entry point
 * @argc: integer variable that stores the number of command-line
 * arrguments passed by the user including the name of the program
 * @argv: an array of character pointers listing all the arguments
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(argv[1]);

	return (0);
}
