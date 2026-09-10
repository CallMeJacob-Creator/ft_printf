/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:19:44 by jcole             #+#    #+#             */
/*   Updated: 2026/09/04 13:52:07 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	slen;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while ((j > i) && ft_strchr(set, s1[j - 1]))
		j--;
	slen = j - i;
	return (ft_substr(s1, i, slen));
}

/* 
size_t	i;
	size_t	j;
	size_t	k;
	size_t	slen;
	char	*newstr;
	
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while ((set[j] != '\0') || (s1[i] != set[j]))
			j++;
		if (set[j] == '\0')
			newstr[k] == s1[i];
		i++;
		j++;
	}
	slen = ft_strlen(newstr);
	newstr = malloc(slen + 1);
	if (!newstr)
		return (NULL);
	return (newstr); */