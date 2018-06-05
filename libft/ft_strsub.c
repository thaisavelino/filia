/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 18:20:07 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/26 18:38:18 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str_sub;

	str_sub = ft_strnew(len);
	if (!str_sub || !s)
		return (NULL);
	ft_strncpy(str_sub, s + start, len);
	return (str_sub);
}
