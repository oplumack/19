/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:40:18 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 09:40:39 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	copysrc;
	size_t	copydst;

	i = 0;
	copysrc = ft_strlen(src);
	copydst = ft_strlen(dst);
	if (n - 1 <= copydst)
		return (copysrc + n);
	while (copydst + i < n - 1)
	{
		dst[copydst + i] = src[i];
		i++;
	}
	dst[copydst + i] = src[i];
	return (copysrc + copydst);
}
