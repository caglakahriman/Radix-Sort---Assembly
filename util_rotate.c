#include "sort_stack.h"

void	ra(t_stack *stacks, int state)
{
	shift_up(stacks, stacks->stack_a, 0);
	stacks->stack_a[stacks->size - 1] = stacks->temp;
	if (state)
		ft_printf("ra\n");
}

void	rb(t_stack *stacks, int state)
{
	shift_up(stacks, stacks->stack_b, 1);
	stacks->stack_b[stacks->b_len - 1] = stacks->temp;
	if (state)
		ft_printf("rb\n");
}

void	rr(t_stack *stacks)
{
	ra(stacks, 0);
	rb(stacks, 0);
	ft_printf("rr\n");
}
