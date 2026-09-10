/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:19:36 by jcole             #+#    #+#             */
/*   Updated: 2026/09/01 16:18:48 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*search;

	search = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (search[i] == (unsigned char)c)
			return ((void *)&search[i]);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	const void *s = "abcdefg$hij'\0'klm@nopqrstuv";
	int c = 'l';
	size_t n = 26;

	ft_memchr(s, c, n);
}  */