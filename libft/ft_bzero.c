/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 14:05:51 by jcole             #+#    #+#             */
/*   Updated: 2026/08/28 14:25:46 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* 
int main(void)
{
	char	str[] = "Hello World!";

	printf("Before String: %s\n", str);
	ft_bzero(str, 8);
	printf("After: %c\n", str[7]);
}
 */