/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <mabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:02:21 by mabboud           #+#    #+#             */
/*   Updated: 2023/12/11 16:54:34 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_cset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*is_neg(char *new)
{
	new = malloc(sizeof(char) * 1);
	if (new == NULL)
		return (NULL);
	new = "";
	return (new);
}

static char	*ft_wordmalloc(int x)
{
	char	*str;

	str = malloc(sizeof(char) * (x + 2));
	if (str == NULL)
		return (NULL);
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*str;
	int			i;
	int			j;
	int			u;
	int			x;

	str = NULL;
	i = 0;
	j = ft_strlen(s1) - 1;
	u = 0;
	while (is_cset(s1[i], set) && s1[i])
		i++;
	while (is_cset(s1[j], set) && j > 0)
		j--;
	x = j - i;
	if (x < 0)
		return (is_neg(str));
	str = ft_wordmalloc(x);
	if (!str)
		return (NULL);
	while (i <= j)
		str[u++] = s1[i++];
	str[u] = '\0';
	return (str);
}
