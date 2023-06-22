#include "monty.h"
/**
 * read_file - open and read file
 * @stream: file to read
 * Return: (0)
 */

void read_file(char *filename)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int line_count = 0, num_tokens = 0, i;
	char **tokens;

	fp = fopen(filename, "r");
	if (!fp)
	{
		fprintf(stderr, "Error: can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while((read = getline(&line, &len, fp)) != -1)
	{	
		line_count += 1;
		tokens = tokenize_line(line, &num_tokens);
		run_opcode(tokens, num_tokens, line_count);
		for(i = 0; i < num_tokens; i++)
			free(tokens[i]);
		free(tokens);
	}
	fclose(fp);
	if (line)
		free(line);
}
