/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 18:17:41 by jcole             #+#    #+#             */
/*   Updated: 2026/09/08 15:28:18 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			slen;
	char			*mem;

	i = 0;
	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	mem = (char *)malloc((slen + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	while (s[i] != '\0')
	{
		mem[i] = f(i, s[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
