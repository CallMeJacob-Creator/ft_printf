/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 20:23:16 by jcole             #+#    #+#             */
/*   Updated: 2026/08/26 20:28:32 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int lower)
{
	if (lower >= 'a' && lower <= 'z')
		lower -= 32;
	return (lower);
}
/* 
int main(void)
{
	int letter = 'a';
	ft_toupper(letter);
}
 */