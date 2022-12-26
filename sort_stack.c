#include "sort_stack.h"

int	main(int argc, char **argv)
{
	t_stack		*stacks;

	if (argc == 1)
		return (0);
	stacks = malloc(sizeof(t_stack));
	if (!stacks)
		return (0);
	stacks->b_len = 0;
	stack_size(stacks, argc, argv);
	init_stack_a(stacks, argc, argv);
	check_args(stacks);
	create_stacks(stacks);
	if (stacks->size == 3)
		sort_three(stacks, stacks->stack_a);
	else if (stacks->size == 5)
		sort_five(stacks, stacks->stack_a);
	else
		radix_sort(stacks);
	return (0);
}
