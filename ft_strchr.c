/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:01:11 by hamezoua          #+#    #+#             */
/*   Updated: 2025/10/25 20:57:23 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	word;
	char	*str;

	word = (char)c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == word)
			return (&str[i]);
		i++;
	}
	if (word == '\0')
		return (&str[i]);
	return (NULL);
}
