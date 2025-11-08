/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:02:04 by hamezoua          #+#    #+#             */
/*   Updated: 2025/11/03 20:03:00 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join_strings(char *dest, const char *s)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while (s[i] != '\0')
	{
		dest[j + i] = s[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	join_strings(ptr, s1);
	join_strings(ptr, s2);
	return (ptr);
}
