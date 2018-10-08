/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:42:57 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 12:28:05 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*copy;
	int		i;

	i = 0;
	copy = ft_memalloc(ft_strlen(s));
	if (copy == NULL || f == NULL)
		return (NULL);
	ft_strcpy(copy, (char *)s);
	while (copy[i])
	{
		copy[i] = (*f)(copy[i]);
		i++;
	}
	return (copy);
}
