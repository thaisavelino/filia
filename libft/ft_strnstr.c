/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 16:40:56 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/29 00:08:33 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && l-- >= ft_strlen(needle))
	{
		if (ft_strncmp(needle, haystack, (ft_strlen(needle))) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
