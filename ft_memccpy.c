/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:16:45 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 14:15:56 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dest;
	char	*source;
	size_t	i;

	dest = dst;
	source = (char *)src;
	i = 0;
	while (i < n && (i == 0 || source[i - 1] != c))
	{
		dest[i] = source[i];
		i++;
	}
	if (i > 0 && source[i - 1] == c)
		return (dest + i);
	else
		return (NULL);
}
