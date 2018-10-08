/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:15:55 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 09:16:20 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = NULL;
	mem = (unsigned char *)malloc(size);
	if (mem)
	{
		while (size--)
		{
			mem[i] = 0;
			i++;
		}
	}
	return ((void *)mem);
}
