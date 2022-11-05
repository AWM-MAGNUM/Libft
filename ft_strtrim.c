/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:09:29 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/04 20:43:16 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	ft_walk(char const *s, char const *set, int start, int offset)
{
	while (s[start] && start >= 0)
	{
		if (ft_strchr (set, s[start]) == NULL)
			break ;
			start += offset;
	}
	return (start);
}

static int	ft_is_all_set(char *s, char *set)
{
	int		i;
	int		j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (set [j])
		{
			if (s[i] != set[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	char			*s2;
	int				i;
	int				k;
	int				len;

	if (s1 == NULL)
		return (NULL);
	if (set [0] == 0)
		return (ft_strdup(s1));
	else if (ft_is_all_set ((char *)s1, (char *)set))
		return (ft_strdup(""));
	if (!s1)
		return (NULL);
	i = ft_walk (s1, set, 0, 1);
	k = ft_walk (s1, set, ft_strlen(s1) - 1, -1);
	len = (k - i + 2);
	if (len < 1)
		len = 1;
	s2 = (char *)malloc((len) * (sizeof(char)));
	if (!s2)
		return (NULL);
	if (len > 1)
		ft_strncpy(s2, (char *)s1 + i, len - 1);
	s2[(len - 1)] = '\0';
	return (s2);
}
