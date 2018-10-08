/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:18:30 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 14:34:22 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*copy1;
	unsigned const char	*copy2;

	copy1 = (unsigned const char *)s1;
	copy2 = (unsigned const char *)s2;
	while (n)
	{
		if (*copy1 != *copy2)
			return (*copy1 - *copy2);
		copy1++;
		copy2++;
		n--;
	}
	return (0);
}
