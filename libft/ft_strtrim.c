/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 19:33:43 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/27 16:49:10 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static size_t	ft_count_leading(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static size_t	ft_count_trailing(char const *s)
{
	size_t	j;

	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
	{
		j--;
	}
	j = ft_strlen(s) - j - 1;
	return (j);
}

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	len;
	char	*str_trim;

	i = 0;
	if (!s)
		return (NULL);
	start = ft_count_leading(s);
	end = ft_count_trailing(s);
	if (ft_strlen(s) == start)
	{
		if (!(str_trim = ft_strnew(0)))
			return (NULL);
	}
	else
	{
		len = ft_strlen(s) - (start + end);
		if (!(str_trim = ft_strnew((len))))
			return (NULL);
		while (i < len)
			str_trim[i++] = s[start++];
	}
	return (str_trim);
}
