/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:54:57 by jcole             #+#    #+#             */
/*   Updated: 2026/09/01 16:07:19 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*alloc;

	len = ft_strlen(str) + 1;
	alloc = malloc(len);
	if (alloc == NULL)
		return (NULL);
	ft_memcpy(alloc, str, len);
	return (alloc);
}
