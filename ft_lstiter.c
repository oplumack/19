/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:12:54 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 09:14:21 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*cursor;

	cursor = lst;
	if (lst != NULL || f != NULL)
	{
		while (cursor)
		{
			(*f)(cursor);
			cursor = cursor->next;
		}
	}
}
