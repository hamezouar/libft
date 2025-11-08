/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:05:48 by hamezoua          #+#    #+#             */
/*   Updated: 2025/11/08 15:41:35 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ********** count of numbers ********** //
static int	ft_count(int n)
{
	long	number;
	int		count;

	number = n;
	count = 0;
	if (number == 0)
		count = 1;
	if (number < 0)
		number *= -1;
	while (number > 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}
// ********** itoa function ********** //

char	*ft_itoa(int n)
{
	long	nbr;
	int		count;
	int		check;
	char	*ptr;

	nbr = n;
	count = ft_count(n);
	check = 0;
	if (nbr < 0)
		check = 1;
	ptr = malloc(count + check + 1);
	if (!ptr)
		return (NULL);
	ptr[count + check] = '\0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr *= -1;
	}
	while (count-- > 0)
	{
		ptr[count + check] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (ptr);
}
