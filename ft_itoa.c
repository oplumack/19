/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:08:11 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 12:36:55 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;

	num = (char *)ft_memalloc(10);
	if (n >= 0 && num)
	{
		*--num = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--num = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (num)
	{
		*--num = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--num = '0' - (n % 10);
			n /= 10;
		}
		*--num = '-';
	}
	return (ft_strdup(num));
}