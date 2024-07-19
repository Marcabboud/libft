/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:43:22 by mabboud           #+#    #+#             */
/*   Updated: 2023/12/11 15:05:50 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_concat(const char *s1, const char *s2, char *s3)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	x = 0;
	while (s1[i])
	{
		s3[x] = s1[i];
		i++;
		x++;
	}
	while (s2[j])
	{
		s3[x] = s2[j];
		x++;
		j++;
	}
	s3[x] = '\0';
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!s3)
		return (NULL);
	ft_concat(s1, s2, s3);
	return (s3);
}
