/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <mabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:25:51 by mabboud           #+#    #+#             */
/*   Updated: 2023/12/11 15:56:31 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	size2;
	void	*ptr;

	size2 = nmemb * size;
	if (nmemb && size && nmemb > 2147483647 / size)
		return (NULL);
	ptr = malloc(size2);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size2);
	return (ptr);
}
