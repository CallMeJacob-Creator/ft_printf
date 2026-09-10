/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:55:42 by jcole             #+#    #+#             */
/*   Updated: 2026/09/02 15:18:59 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		while ((little[j] != '\0')
			&& (big[i + j] == little[j])
			&& ((i + j) < n))
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/* 
int main(void)
{
	char *result;

	result = ft_strnstr("World Hello", "", 3);
	if (result != NULL)
		printf("String starts at: %s\n", result);
	else
		printf("String not found, NULL returned\n");
} */