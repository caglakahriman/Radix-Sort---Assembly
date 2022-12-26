#include "sort_stack.h"

void	find_max_bit(t_stack *stacks)
{
	int	count;
	int	n;

	n = stacks->size - 1;
	count = 0;
	while (n)
	{
		n >>= 1;
		count++;
	}
	stacks->max_bit = count;
}

int	find_index(t_stack *stacks, int num)
{
	int	i;

	i = 0;
	while (i < stacks->init_size)
	{
		if (stacks->sorted[i] == num)
			return (i);
		i++;
	}
	return (0);
}

void	radix_sort(t_stack *stacks)
{
	int	i;
	int	j;
	int	index;

	i = -1;
	while (++i < stacks->max_bit)
	{
		j = -1;
		while (++j < stacks->init_size)
		{
			index = find_index(stacks, stacks->stack_a[0]);
			if (index >> i & 1)
				ra(stacks, 1);
			else
				pb(stacks);
		}
		while (stacks->b_len)
			pa(stacks);
	}
	memory_handler(stacks, 1);
}

void	bubble_sort(t_stack *stacks)
{
	int	temp;
	int	i;
	int	j;

	i = 1;
	while (i < stacks->size)
	{
		j = 0;
		while (j < i)
		{
			if (stacks->sorted[i] < stacks->sorted[j])
			{
				temp = stacks->sorted[i];
				stacks->sorted[i] = stacks->sorted[j];
				stacks->sorted[j] = temp;
			}
			j++;
		}
		i++;
	}
}
