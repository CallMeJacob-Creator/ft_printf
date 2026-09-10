/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:44:54 by jcole             #+#    #+#             */
/*   Updated: 2026/09/01 16:20:18 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (NULL);
}
/* 
int main(void)
{
	const char *str = "Hello World!";
	int c = 'r';

	char *result = ft_strchr(str, c);
	if (result != NULL)
        printf("Found at: %s\n", result);
    else
        printf("Result: NULL\n");

    return (0);
} */