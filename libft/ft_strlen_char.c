/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 00:42:50 by tavelino          #+#    #+#             */
/*   Updated: 2018/11/14 04:06:21 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen_char(char *str, char c)
{
	size_t		length;

	length = 0;
	if (str)
	{
		while (str[length] != c && str[length] != '\0')
			length++;
	}
	return (length);
}
