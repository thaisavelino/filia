/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 15:18:31 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/28 15:21:51 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_new;

	if (lst)
	{
		lst_new = f(lst);
		lst_new->next = ft_lstmap(lst->next, f);
		return (lst_new);
	}
	return (NULL);
}
