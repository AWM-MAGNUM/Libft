/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:42:04 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/01 21:54:29 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	*str;

	l = 0;
	str = (char *)s;
	if ((char)c == 0)
	{
		while (s[l])
			l++;
		return ((char *)&str[l]);
	}
	while (str[l])
		l++;
	while (l >= 0)
	{
		if ((char)c == str[l])
			return ((char *)&str[l]);
		l--;
	}
	return (0);
}
