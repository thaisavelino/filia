/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:58:39 by tavelino          #+#    #+#             */
/*   Updated: 2018/06/06 18:28:34 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strnjoin(char const *s1, char const *s2, size_t len)
{
	char	*str;

	if (!(s1 && s2 && (str = ft_strnew(ft_strlen(s1) + len + 1))))
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2 && len--)
		*str++ = *s2++;
	return (str);
}
