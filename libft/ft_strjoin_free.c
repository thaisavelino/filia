/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 18:40:07 by tavelino          #+#    #+#             */
/*   Updated: 2018/06/06 17:43:26 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin_free(char *s1, char const *s2)
{
	char	*str_concat;
	size_t	len;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		i = -1;
		j = 0;
		if (!(str_concat = (char *)malloc(sizeof(char) * len)))
			return (NULL);
		while (++i < ft_strlen(s1))
		{
			str_concat[i] = s1[i];
		}
		while (j < ft_strlen(s2))
			str_concat[i++] = s2[j++];
		str_concat[i] = '\0';
		free(s1);
		return (str_concat);
	}
	return (NULL);
}
