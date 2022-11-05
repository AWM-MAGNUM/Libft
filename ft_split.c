/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:51:15 by bel-kase          #+#    #+#             */
/*   Updated: 2022/10/27 11:51:15 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
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

int	ft_split_count(char const *s, char c)
{
	int			len;
	int			count;
	bool		flip;
	int			i;

	len = ft_strlen(s);
	count = 0;
	flip = true;
	i = 0;
	while (i < len)
	{
		if (s[i] == c)
		{
			flip = true;
			i++;
			continue ;
		}
		if (flip)
		{
			count++;
			flip = false;
		}
		i++;
	}
	return (count);
}

static char	*alloc(int *arr, int offset, char *s)
{
	char		*str;

	str = malloc((arr[1] + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strncpy(str, (char *)s + offset + arr[2], arr[1]);
	str[arr[1]] = 0;
	return (str);
}

char	**loop_split(char *s, int splits_count, char c, int offset)
{
	int			arr[3];
	char		**ret;

	ret = ft_calloc(sizeof(char *), (splits_count + 1));
	if (!ret)
		return (NULL);
	arr[0] = -1;
	while (++arr[0] < splits_count)
	{
		arr[1] = 0;
		arr[2] = 0;
		while (s[offset + arr[2]] && s[offset + arr[2]] == c)
			arr[2] += 1;
		while ((s[offset + arr[2] + arr[1]]
				&& s[offset + arr[2] + arr[1]] != c))
		arr[1] += 1;
		ret[arr[0]] = alloc (arr, offset, s);
		offset += arr[1] + arr[2];
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		splits_count ;
	char	**ret ;

	if (!s)
	{
		ret = malloc(sizeof(char *));
		*ret = NULL;
		return (ret);
	}
	splits_count = ft_split_count(s, c);
	ret = loop_split((char *)s, splits_count, c, 0);
	if (!ret)
		return (NULL);
	return (ret);
}
