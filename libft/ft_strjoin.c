/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:01:44 by jcole             #+#    #+#             */
/*   Updated: 2026/09/03 15:16:52 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1len;
	size_t	s2len;
	char	*newstr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	newstr = malloc((s1len + s2len) + 1);
	if (!newstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newstr[i + s1len] = s2[i];
		i++;
	}
	newstr[i + s1len] = '\0';
	return (newstr);
}
