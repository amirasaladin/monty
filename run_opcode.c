#include "monty.h"
/* run_opcode -
 * 
 */

void run_opcode(char **tokens, int num_tokens, int lnum)
{
	int i;
	stack_t *stack = NULL;

	for(i = 0; i <= num_tokens; i++)
	{
		if (strcmp(tokens[i], "push") == 0)
			push(&stack, tokens, num_tokens, lnum);
		else if (strcmp(tokens[i], "pall") == 0)
			pall(&stack, lnum);
		/*
		else if (strcmp(tokens[i], "pint") == 0)
			pint(&stack, lnum);
		else if (strcmp(tokens[i], "pop") == 0)
			pop(&stack, lnum);
		else if (strcmp(tokens[i], "swap") == 0)
			swap(&stack, lnum);
		else if (strcmp(tokens[i], "add") == 0)
			add(&stack, lnum);
		else if (strcmp(tokens[i], "nop") == 0)
			nop(&stack, lnum); */
	}
}
