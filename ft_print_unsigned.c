/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:07:15 by jcole             #+#    #+#             */
/*   Updated: 2026/09/15 14:47:14 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += ft_write_char('0');
		return (count);
	}
	if (n > 9)
		count += ft_print_unsigned(n / 10);
	count += ft_write_char((n % 10) + '0');
	return (count);
}
