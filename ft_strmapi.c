/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:44:01 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 12:04:16 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*copy;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	copy = ft_memalloc(ft_strlen(s));
	ft_strcpy(copy, (char *)s);
	while (copy[i])
	{
		copy[i] = (*f)(i, copy[i]);
		i++;
	}
	return (copy);
}
