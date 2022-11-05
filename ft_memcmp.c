/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:40:25 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/04 20:44:56 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*htr;

	str = (unsigned char *)s1;
	htr = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != htr[i])
			return ((str[i] - htr[i]));
		i++;
	}
	return (0);
}
