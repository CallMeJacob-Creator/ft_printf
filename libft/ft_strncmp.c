/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:51:45 by jcole             #+#    #+#             */
/*   Updated: 2026/08/31 16:21:09 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/* 
int main() 
{
	char *s1 = "same";
	char *s2 = "shortword";
	char *s3 = "longerword";
	size_t n = 5;

	printf("%s vs %s %d\n", s1, s1, ft_strncmp(s1, s1, n));
	printf("%s vs %s %d\n", s2, s3, ft_strncmp(s2, s3, n));
	printf("%s vs %s %d\n", s3, s2, ft_strncmp(s3, s2, n));
}
 */