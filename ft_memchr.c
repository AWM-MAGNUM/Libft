/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:40:21 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/01 21:55:20 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	cd;

	cd = c;
	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if (str[i] == cd)
			return (str + i);
		i++;
	}
	return (NULL);
}
