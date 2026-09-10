/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 14:44:04 by jcole             #+#    #+#             */
/*   Updated: 2026/09/01 14:41:35 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = dest;
	tmp2 = (unsigned char *)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	if (dest > src)
	{
		while (n--)
		{
			tmp1[n] = tmp2[n];
		}
	}
	return (dest);
}
