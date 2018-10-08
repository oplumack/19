/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:48:26 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 09:48:57 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * size + 1);
	if (str)
	{
		while (i <= size)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
