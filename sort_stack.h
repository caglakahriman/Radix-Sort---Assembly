#ifndef SORT_STACK_H
# define SORT_STACK_H

# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	*sorted;
	int	max_bit;
	int	temp;
	int	size;
	int	init_size;
	int	b_len;
}			t_stack;

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
int		find_index(t_stack *stacks, int num);
int		ft_strcmp(char *s1, char *s2);
int		wordcount(const char *s, char c);
int		is_sorted(t_stack *stacks);
int		ft_atoi(t_stack *stacks, const char *str);
int		ft_isdigit(int c);
int		check_double(t_stack *stacks);
void	sort_five(t_stack *stacks, int *stack);
void	memory_handler(t_stack *stacks, int state);
void	stack_size(t_stack *stacks, int argc, char **argv);
void	find_max_bit(t_stack *stacks);
void	check_args(t_stack *stacks);
void	diff_three(t_stack *stacks, int *stack);
void	sort_three(t_stack *stacks, int *stack);
void	bubble_sort(t_stack *stacks);
void	shift_up(t_stack *stacks, int *stack, int state);
void	shift_down(t_stack *stacks, int *stack, int state);
void	radix_sort(t_stack *stacks);
void	init_stack_a(t_stack *stacks, int argc, char **argv);
void	create_stacks(t_stack *stacks);
void	sa(t_stack *stacks, int state);
void	sb(t_stack *stacks, int state);
void	ss(t_stack *stacks);
void	pa(t_stack *stacks);
void	pb(t_stack *stacks);
void	ra(t_stack *stacks, int state);
void	rb(t_stack *stacks, int state);
void	rr(t_stack *stacks);
void	rra(t_stack *stacks, int state);
void	rrb(t_stack *stacks, int state);
void	rrr(t_stack *stacks);

#endif
