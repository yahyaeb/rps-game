/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:00:46 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/11 15:16:26 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Splits the string `s` into an array of substrings using the delimiter `c
static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	ft_wordcount(const char *str, char delimiter)
{
	int	count;
	int	in_word;

	if (!str)
		return (0);
	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == delimiter)
			in_word = 0;
		else
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		str++;
	}
	return (count);
}

static int	ft_wordsize(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str || !*str)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**free_table(char **table)
{
	int	i;

	if (table)
	{
		i = 0;
		while (table[i])
		{
			free(table[i]);
			i++;
		}
		free(table);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		word_size;
	int		i;
	int		j;
	char	**table;

	table = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!table)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_wordcount(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		word_size = ft_wordsize(&s[i], c);
		table[j] = malloc((word_size + 1) * sizeof(char));
		if (!table)
			return (free_table(table));
		ft_strncpy(table[j], &s[i], word_size);
		table[j][word_size] = '\0';
		i += word_size;
		j++;
	}
	table[j] = NULL;
	return (table);
}
