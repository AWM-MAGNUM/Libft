/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:22:32 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/05 23:01:12 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*str;

	if (!dst && !src)
		return (NULL);
	str = src;
	dest = dst;
	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
