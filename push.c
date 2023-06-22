#include "monty.h"
/**
 * push - the opcode pushes an element to the stack
 * 
 */

void push(stack_t **stack, char **tokens, int num_tokens, unsigned int line_number)
{

	stack_t *new_node = (stack_t *)malloc(sizeof(stack_t));

	printf("num_tokens %d\n", num_tokens);

	if (!new_node)
		malloc_fail();

	if (num_tokens < 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	new_node->n = (int) atoi(tokens[1]);
	new_node->prev = NULL;
	new_node->next = NULL;
	
	if (*stack != NULL)
		(*stack)->prev = new_node;
	new_node->next = *stack;
	*stack = new_node;
	printf("pushed token %d\n", atoi(tokens[1]));
}
