#include "sort_stack.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(t_stack *stacks, const char *str)
{
	int			sign;
	long int	num;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign -= (*str++ == '-') * 2;
		if (!ft_isdigit(*str))
			memory_handler(stacks, 0);
	}
	while (ft_isdigit(*str))
	{
		num = (num * 10) + (*str++ - 48);
		if (num * sign < -2147483648 || num * sign > 2147483647)
			memory_handler(stacks, 0);
	}
	if (*str != '\0' && !ft_isdigit(*str))
		memory_handler(stacks, 0);
	return (sign * num);
}
