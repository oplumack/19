/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:50:32 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 09:50:54 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			tmp = ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		tmp = ((char *)&s[i]);
	return (tmp);
}
