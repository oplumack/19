/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:19:18 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 14:09:14 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest;
	const char		*source;

	dest = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
