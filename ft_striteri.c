/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezoua <amouzwarh+1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:08:18 by hamezoua          #+#    #+#             */
/*   Updated: 2025/10/26 11:16:20 by hamezoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	encryption_fun(unsigned int i, char *s)
// {
// 	(void)i;
// 	if (*s >= 'a' && *s <= 'z')
// 		*s = 'z' - (*s - 'a');
// 	else if (*s >= 'A' && *s <= 'Z')
// 		*s = 'Z' - (*s - 'A');
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
