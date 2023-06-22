#include "monty.h"
/**
 * tokenize_line - breaking the line into individual pieces or tokens
 * @line: the line to be tokenized
 * @num_tokens: number of tokens in the line
 * Return: array containing the tokens
 */

char **tokenize_line(char *line, int *num_tokens)
{
	char **tokens = malloc(sizeof(char *) * strlen(line));
	char *token = strtok(line, " ");
	int i = 0;

	if (!tokens)
		malloc_fail();

	while (token != NULL)
	{
		/* allocate memory for the token */
		tokens[i] = malloc(sizeof(char) * strlen(token));
		if (!tokens[i])
			malloc_fail();
		/* copy token into the array */
		strcpy(tokens[i], token);
		i++;
		/* get the next token */
		token = strtok(NULL, " ");
	}
	*num_tokens = i;
	return (tokens);
}
