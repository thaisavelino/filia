/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:13:37 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/24 15:07:27 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t str_len;

	dst_len = ft_strlen(dst);
	str_len = ft_strlen(src);
	if (dst_len < size)
		str_len += dst_len;
	else
		str_len += size;
	while (*src && dst_len + 1 < size)
	{
		dst[dst_len] = *src++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (str_len);
}
