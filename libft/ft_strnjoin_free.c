/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:22:46 by tavelino          #+#    #+#             */
/*   Updated: 2018/06/06 18:25:29 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strnjoin_free(char *s1, char const *s2, size_t len)
{
	char	*str;

	if (!(s1 && s2 && (str = ft_strnew(ft_strlen(s1) + len + 1))))
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2 && len--)
		*str++ = *s2++;
	free(s1);
	return (str);
}
