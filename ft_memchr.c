/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:57:30 by hamezoua          #+#    #+#             */
/*   Updated: 2025/11/01 21:25:56 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		x;
	const unsigned char	*str;
	size_t				i;

	i = 0;
	x = (unsigned char)c;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
