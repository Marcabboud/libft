/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:05:12 by mabboud           #+#    #+#             */
/*   Updated: 2023/12/11 15:05:14 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	div;
	int	mod;

	div = n / 10;
	mod = n % 10;
	if (div)
		ft_putnbr_fd(div, fd);
	if (n < 0)
	{
		mod = -mod;
		if (!div)
			write(fd, "-", 1);
	}
	mod = mod + '0';
	write(fd, &mod, 1);
}
