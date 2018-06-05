/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 15:13:44 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/28 16:02:00 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	swap;
	int		last;
	int		i;

	last = 0;
	while (str[last] != '\0')
		last++;
	last = last - 1;
	i = 0;
	while (i < ((last + 1) / 2))
	{
		swap = str[i];
		str[i] = str[last - i];
		str[last - i] = swap;
		i++;
	}
	return (str);
}
