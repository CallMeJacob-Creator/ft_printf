/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:50:22 by jcole             #+#    #+#             */
/*   Updated: 2026/09/09 15:54:09 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_evalstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	char *test = "hello";

	printf("Result: %d", ft_evalstrlen(test));
}