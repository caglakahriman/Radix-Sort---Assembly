#include "sort_stack.h"

void	stack_size(t_stack *stacks, int argc, char **argv)
{
	int	i;

	stacks->size = 0;
	i = 1;
	while (i < argc)
		stacks->size += wordcount(argv[i++], ' ');
	stacks->init_size = stacks->size;
}

void	init_stack_a(t_stack *stacks, int argc, char **argv)
{
	int		i;
	int		z;
	int		y;
	char	**result;
	int		words;

	i = 0;
	y = 0;
	stacks->stack_a = malloc(sizeof(int) * stacks->size);
	if (!stacks->stack_a)
		return ;
	while (++i < argc)
	{
		result = ft_split(argv[i], ' ');
		words = wordcount(argv[i], ' ');
		z = 0;
		while (z < words)
		{
			stacks->stack_a[y] = ft_atoi(stacks, result[z]);
			free(result[z]);
			z++;
			y++;
		}
		free(result);
	}
}

void	create_stacks(t_stack *stacks)
{
	int	i;

	i = 0;
	stacks->stack_b = malloc(sizeof(int) * stacks->size);
	stacks->sorted = malloc(sizeof(int) * stacks->size);
	if (!stacks->stack_b || !stacks->sorted)
		return ;
	while (i < stacks->size)
	{
		stacks->sorted[i] = stacks->stack_a[i];
		i++;
	}
	bubble_sort(stacks);
	find_max_bit(stacks);
}
