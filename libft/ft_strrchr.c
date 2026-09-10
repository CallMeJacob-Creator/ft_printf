/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 13:36:35 by jcole             #+#    #+#             */
/*   Updated: 2026/09/01 16:20:13 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((unsigned char)c == str[i])
		return ((char *)&str[i]);
	i -= 1;
	while (i >= 0)
	{
		if ((unsigned char)c == str[i])
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/* 
int main(void)
{
	const char *str = "Hello World!";
	int c = '\0';

	char *result = ft_strrchr(str, c);
	if (result != NULL)
        printf("Found at: %s\n", result);
    else
        printf("Result: NULL\n");

    return (0);
} */