/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:59:18 by hamezoua          #+#    #+#             */
/*   Updated: 2025/11/07 19:42:12 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_bool(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (is_bool(set, s1[i]))
			i++;
		else
			break ;
	}
	return ((char *)&s1[i]);
}

static int	ft_end(char *start, char const *set)
{
	size_t	len;

	len = ft_strlen(start);
	while (len > 0)
	{
		if (is_bool(set, start[len - 1]))
			len--;
		else
			break ;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	len = ft_end(start, set);
	str = ft_substr(start, 0, len);
	return (str);
}
