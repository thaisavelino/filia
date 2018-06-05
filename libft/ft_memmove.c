/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:00:11 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/21 21:06:51 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*copy;

	copy = (unsigned char*)dst;
	i = 0;
	if (dst > src)
		while (++i <= len)
			copy[len - i] = ((unsigned char*)src)[len - i];
	else
		while (len-- > 0)
			*(copy++) = ((unsigned char*)src)[i++];
	return (dst);
}
