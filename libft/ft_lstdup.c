/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 16:03:41 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/28 16:03:46 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstdup(void const *content, size_t content_size)
{
	unsigned char	*ptr_c;
	unsigned char	*ptr_l;
	void			*list;

	if (!(list = ft_memalloc(content_size)))
		return (NULL);
	ptr_c = (unsigned char*)content;
	ptr_l = (unsigned char*)list;
	while (*ptr_c)
		*(ptr_l++) = *(ptr_c++);
	return (list);
}
