#include "sort_stack.h"

void	sort_three(t_stack *stacks, int *stack)
{
	if (stack[0] < stack[1] && stack[0] < stack[2])
	{
		sa(stacks, 1);
		ra(stacks, 1);
	}
	else if (stack[0] > stack[1] && stack[1] < stack[2])
	{
		if (stack[0] > stack[2])
			ra(stacks, 1);
		else
			sa(stacks, 1);
	}
	else if (stack[0] > stack[1] && stack[1] > stack[2])
	{
		sa(stacks, 1);
		rra(stacks, 1);
	}
	else
		rra(stacks, 1);
	memory_handler(stacks, 1);
}

void	diff_three(t_stack *stacks, int *stack)
{
	if (stack[0] < stack[1] && stack[0] < stack[2])
	{
		ra(stacks, 1);
		if (stack[0] > stack[1])
			sa(stacks, 1);
	}
	else if (stack[0] > stack[1] && stack[1] < stack[2])
	{
		rra(stacks, 1);
		if (stack[0] > stack[1])
			sa(stacks, 1);
	}
	else if (stack[0] > stack[1] && stack[1] > stack[2])
		sa(stacks, 1);
}

void	sort_five(t_stack *stacks, int *stack)
{
	int	min;
	int	max;
	int	prev_max;

	min = stacks->sorted[0];
	max = stacks->sorted[4];
	prev_max = stacks->sorted[3];
	while (stacks->b_len < 2)
	{
		if (stack[0] == min || stack[0] == max || stack[0] == prev_max)
			ra(stacks, 1);
		else
			pb(stacks);
	}
	if (stacks->stack_b[0] < stacks->stack_b[1])
		sb(stacks, 1);
	diff_three(stacks, stacks->stack_a);
	while (stacks->b_len)
		pa(stacks);
	rra(stacks, 1);
	memory_handler(stacks, 1);
}
