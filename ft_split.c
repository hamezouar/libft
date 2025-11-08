/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:46:35 by hamezoua          #+#    #+#             */
/*   Updated: 2025/11/08 15:41:24 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c)
				j++;
		}
		i++;
	}
	if (i > 0 && s[i - 1] != c)
		j++;
	return (j);
}

static int	ft_start(char const *s, size_t len, char c)
{
	while (s[len] && s[len] == c)
		len++;
	return (len);
}

static int	ft_nfound(char const *s, unsigned int start, char c)
{
	while (s[start] && s[start] != c)
		start++;
	return (start);
}

static char	**free_all(char **ptr, int i)
{
	int	x;

	x = i - 1;
	while (x >= 0)
	{
		free(ptr[x]);
		x--;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int				c_word;
	char			**ptr;
	int				i;
	unsigned int	start;
	size_t			len;

	if (!s)
		return (NULL);
	i = 0;
	len = 0;
	c_word = count_word(s, c);
	ptr = ft_calloc((c_word + 1), sizeof(char *));
	if (!ptr)
		return (NULL);
	while (i < c_word)
	{
		start = ft_start(s, len, c);
		len = ft_nfound(s, start, c);
		ptr[i] = ft_substr(s, start, len - start);
		if (!ptr[i])
			return (free_all(ptr, i));
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
