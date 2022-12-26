#include "sort_stack.h"

int	is_sorted(t_stack *stacks)
{
	int	i;
	int	j;

	i = 1;
	while (i < stacks->size)
	{
		j = 0;
		while (j < i)
		{
			if (stacks->stack_a[j] > stacks->stack_a[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_double(t_stack *stacks)
{
	int	i;
	int	j;

	i = 1;
	while (i < stacks->size)
	{
		j = 0;
		while (j < i)
		{
			if (stacks->stack_a[j] == stacks->stack_a[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	memory_handler(t_stack *stacks, int state)
{
	free(stacks->stack_a);
	if (state)
	{
		free(stacks->stack_b);
		free(stacks->sorted);
	}
	else
		ft_printf("Error\n");
	free(stacks);
	exit(0);
}

void	check_args(t_stack *stacks)
{
	if (check_double(stacks))
		memory_handler(stacks, 0);
	if (is_sorted(stacks))
	{
		free(stacks->stack_a);
		free(stacks);
		exit(0);
	}
}
