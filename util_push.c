#include "sort_stack.h"

void	pb(t_stack *stacks)
{
	stacks->b_len++;
	stacks->size--;
	shift_down(stacks, stacks->stack_b, 1);
	stacks->stack_b[0] = stacks->stack_a[0];
	shift_up(stacks, stacks->stack_a, 0);
	ft_printf("pb\n");
}

void	pa(t_stack *stacks)
{
	stacks->size++;
	stacks->b_len--;
	shift_down(stacks, stacks->stack_a, 0);
	stacks->stack_a[0] = stacks->stack_b[0];
	shift_up(stacks, stacks->stack_b, 1);
	ft_printf("pa\n");
}
