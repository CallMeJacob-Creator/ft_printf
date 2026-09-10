/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 15:24:40 by jcole             #+#    #+#             */
/*   Updated: 2026/09/03 14:59:37 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t			i;
	size_t			slen;
	size_t			copylen;
	char			*newstr;

	i = 0;
	slen = ft_strlen(str);
	if (start >= slen)
		copylen = 0;
	else if (len > slen - start)
		copylen = slen - start;
	else
		copylen = len;
	newstr = malloc(copylen + 1);
	if (!newstr)
		return (NULL);
	while (i < copylen)
	{
		newstr[i] = str[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
