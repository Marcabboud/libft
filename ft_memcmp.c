/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <mabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:48:39 by mabboud           #+#    #+#             */
/*   Updated: 2023/11/22 17:04:59 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*l1;
	char	*l2;

	i = 0;
	l1 = (char *)s1;
	l2 = (char *)s2;
	while (i < n)
	{
		if (l1[i] != l2[i])
			return ((unsigned char)l1[i] - (unsigned char)l2[i]);
		i++;
	}
	return (0);
}
