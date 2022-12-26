#include "sort_stack.h"

void	shift_up(t_stack *stacks, int *stack, int state)
{
	int	i;
	int	j;

	i = 0;
	if (state)
		j = stacks->b_len;
	else
		j = stacks->size;
	stacks->temp = stack[i];
	while (i + 1 <= j)
	{
		stack[i] = stack[i + 1];
		i++;
	}
}

void	shift_down(t_stack *stacks, int *stack, int state)
{
	int	i;

	if (state)
		i = stacks->b_len - 1;
	else
		i = stacks->size - 1;
	stacks->temp = stack[i];
	while (i > 0)
	{
		i--;
		stack[i + 1] = stack[i];
		stack[i] = 0;
	}
}
