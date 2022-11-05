/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:40:16 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/04 22:39:31 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wolf(int k, int i, long nb)
{
	char	*str;

	str = NULL;
	if (nb < 0)
		str = malloc(sizeof(char) * (i + 2));
	else
		str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (k > 0)
	{
		if (nb < 0)
		{
			str[0] = '-';
			i = 1;
			nb *= -1;
		}
			str[i] = ((nb / k) + 48);
			nb -= ((nb / k) * k);
			k /= 10;
			i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		k;
	int		i;
	long	tmp;
	long	nb;

	i = 1;
	k = 1;
	nb = n;
	tmp = nb;
	if (tmp < 0)
		tmp *= -1;
	while (tmp > 9)
	{
		tmp = tmp / 10;
		k *= 10;
		i++;
	}
	return (ft_wolf(k, i, nb));
}
