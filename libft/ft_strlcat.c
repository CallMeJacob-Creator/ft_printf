/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:34:02 by jcole             #+#    #+#             */
/*   Updated: 2026/08/31 12:55:28 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	if (n == 0)
		return (srclen);
	while (i < n && dest[i] != '\0')
		i++;
	destlen = i;
	if (n <= destlen)
		return (srclen + n);
	while (src[j] != '\0' && i < n - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
