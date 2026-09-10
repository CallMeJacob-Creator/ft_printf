/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 20:28:41 by jcole             #+#    #+#             */
/*   Updated: 2026/08/26 20:29:35 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int upper)
{
	if (upper >= 'A' && upper <= 'Z')
		upper += 32;
	return (upper);
}
/* 
int main(void)
{
	int letter = 'a';
	ft_tolower(letter);
}
 */