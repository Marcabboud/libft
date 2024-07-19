/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <mabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:55:17 by mabboud           #+#    #+#             */
/*   Updated: 2023/12/11 16:42:33 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(const char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

char	*ft_putword(const char *s, int start, int end)
{
	char		*split;
	int			i;
	int			word;

	i = 0;
	word = end - start;
	split = malloc(sizeof(char) * (word + 1));
	while (word > 0)
	{
		split[i] = s[start];
		i++;
		start++;
		word--;
	}
	split[i] = 0;
	return (split);
}

static char	**ft_wordmalloc(const char *s, char c)
{
	char		**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!split)
		return (NULL);
	return (split);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		j;
	int			word_start;
	char		**split;

	i = 0;
	j = 0;
	word_start = -1;
	split = ft_wordmalloc(s, c);
	if (!split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && word_start < 0)
			word_start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && word_start >= 0)
		{
			split[j++] = ft_putword(s, word_start, i);
			word_start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
