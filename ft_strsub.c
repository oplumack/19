/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oplumack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:53:41 by oplumack          #+#    #+#             */
/*   Updated: 2018/10/08 11:32:29 by oplumack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = start;
	j = 0;
	if (s == NULL || len == 0 || s[start] == '\0')
		return (NULL);
	result = ft_memalloc(sizeof(char) * len);
	while (j < len && s[i])
	{
		result[j] = (char)s[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (ft_strdup(result));
}
