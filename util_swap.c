#include "sort_stack.h"

void	sa(t_stack *stacks, int state)
{
	int	temp;

	if (stacks->size > 1)
	{
		temp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = temp;
	}
	if (state)
		ft_printf("sa\n");
}

void	sb(t_stack *stacks, int state)
{
	int	temp;

	if (stacks->b_len > 1)
	{
		temp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = temp;
	}
	if (state)
		ft_printf("sb\n");
}

void	ss(t_stack *stacks)
{
	sa(stacks, 0);
	sb(stacks, 0);
	ft_printf("ss\n");
}
