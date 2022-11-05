/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:41:56 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/01 21:54:22 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*htr;
	size_t			i;

	i = 0;
	str = (unsigned char *)s1;
	htr = (unsigned char *)s2;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (str[i] == htr[i] && i < n - 1 && str[i] != '\0')
		i++;
	if (str[i] != htr[i])
		return (str[i] - htr[i]);
	return (str[i] - htr[i]);
}
