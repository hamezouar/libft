/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:50:49 by hamezoua          #+#    #+#             */
/*   Updated: 2025/10/26 20:47:05 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	x;
	size_t	len;

	str = (char *)s;
	x = (char)c;
	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == x)
			return (&str[len]);
		len--;
	}
	if (str[len] == x)
		return (&str[len]);
	return (NULL);
}
