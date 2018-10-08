/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:20:41 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 14:36:30 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*copy;

	if (!(copy = (char*)malloc(sizeof(char*) * n)))
		return (NULL);
	copy = ft_strncpy(copy, src, n);
	dst = (void*)ft_strncpy(dst, copy, n);
	free(copy);
	return (dst);
}
