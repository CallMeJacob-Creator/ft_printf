/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:07:01 by jcole             #+#    #+#             */
/*   Updated: 2026/09/15 14:48:51 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_hex(unsigned int n, int count)
{
	char	*lkup_str;

	lkup_str = "0123456789abcdef";
	if (n > 15)
		count += ft_lower_hex(n / 16, 0);
	count += ft_print_char(lkup_str[n % 16]);
	return (count);
}

int	ft_upper_hex(unsigned int n, int count)
{
	char	*lkup_str;

	lkup_str = "0123456789ABCDEF";
	if (n > 15)
		count += ft_upper_hex(n / 16, 0);
	count += ft_print_char(lkup_str[n % 16]);
	return (count);
}

int	ft_print_hex(unsigned int n, int v)
{
	int	count;

	count = 0;
	if (v == 0)
		count += ft_lower_hex(n, 0);
	else if (v == 1)
		count += ft_upper_hex(n, 0);
	return (count);
}
