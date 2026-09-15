/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:07:05 by jcole             #+#    #+#             */
/*   Updated: 2026/09/15 14:18:09 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (count + 11);
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			count += ft_write_char('-');
		}
		if (n > 9)
			count += ft_print_int(n / 10);
		count += ft_write_char((n % 10) + '0');
	}
	return (count);
}
