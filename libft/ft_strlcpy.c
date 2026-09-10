/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:05:29 by jcole             #+#    #+#             */
/*   Updated: 2026/09/01 16:29:25 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *srce, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (ft_strlen(srce));
	while (srce[i] != '\0' && i < num - 1)
	{
		dest[i] = srce[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(srce));
}
/* 
int main(void)
{
	char dest[13];
	char *srce = "Hello World!";
	int num = 7;

	ft_strlcpy(dest, srce, num);
}
 */