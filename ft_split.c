#include "sort_stack.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(s1);
	dup = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!dup)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char) c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	size_t	strlen;

	i = 0;
	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (len > strlen)
		len = strlen - start;
	if (start > strlen)
		return (ft_strdup(""));
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && len--)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	wordcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		count += *s != 0;
		s = ft_strchr(s, c);
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**result;
	int		i;
	size_t	len;

	words = wordcount(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_strchr(s, c) - s;
		result[i] = ft_substr(s, 0, len);
		s += len;
		if (!result[i++])
			return (0);
	}
	result[i] = 0;
	return (result);
}
