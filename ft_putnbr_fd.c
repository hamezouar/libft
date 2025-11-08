/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:34:31 by hamezoua          #+#    #+#             */
/*   Updated: 2025/10/26 19:22:50 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_number(int n, int fd)
{
	char	ptr[10];
	int		i;

	i = 0;
	while (n != 0)
	{
		ptr[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(fd, &ptr[i], 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	ft_number(n, fd);
}
