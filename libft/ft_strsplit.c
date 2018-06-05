/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplilt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 21:10:24 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/28 23:26:00 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_word(const char *s, char c)
{
	int		words;
	int		is_word;

	is_word = 0;
	words = 0;
	while (*s != '\0')
	{
		if (is_word == 1 && *s == c)
			is_word = 0;
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			words++;
		}
		s++;
	}
	return (words);
}

static int		ft_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**w;
	int		words;
	int		i;

	if (!s || !c)
		return (NULL);
	i = 0;
	words = ft_count_word(s, c);
	if (!(w = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (words > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		w[i] = ft_strsub((const char *)s, 0, ft_wordlen((const char *)s, c));
		s = s + ft_wordlen((const char *)s, c);
		i++;
		words--;
	}
	w[i] = NULL;
	return (w);
}
