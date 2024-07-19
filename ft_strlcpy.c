/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <mabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:18:55 by mabboud           #+#    #+#             */
/*   Updated: 2023/11/22 17:19:31 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (src[i] && i + 1 < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (len > 0)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
