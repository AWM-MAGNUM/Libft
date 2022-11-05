/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:40:34 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/04 20:44:16 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*str;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	str = src;
	i = 0;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		len--;
		dest[len] = str[len];
	}
	return (dst);
}
