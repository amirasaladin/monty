#include "monty.h"
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *current = *stack;
	if (*stack != NULL)
	{
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}
}
