#include "sort_stack.h"

void	rra(t_stack *stacks, int state)
{
	shift_down(stacks, stacks->stack_a, 0);
	stacks->stack_a[0] = stacks->temp;
	if (state)
		ft_printf("rra\n");
}

void	rrb(t_stack *stacks, int state)
{
	shift_down(stacks, stacks->stack_b, 1);
	stacks->stack_b[0] = stacks->temp;
	if (state)
		ft_printf("rrb\n");
}

void	rrr(t_stack *stacks)
{
	rra(stacks, 0);
	rrb(stacks, 0);
	ft_printf("rrr\n");
}
