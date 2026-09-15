/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:07:10 by jcole             #+#    #+#             */
/*   Updated: 2026/09/15 14:49:07 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptrhex(unsigned long int n, int count)
{
	char	*lkup_str;

	lkup_str = "0123456789abcdef";
	if (n > 15)
		count += ft_print_ptrhex(n / 16, 0);
	count += ft_print_char(lkup_str[n % 16]);
	return (count);
}

int	ft_print_ptr(void *n)
{
	int				count;
	unsigned long	ptr;

	ptr = (unsigned long)n;
	count = 0;
	if (n == 0)
	{
		count += ft_print_str("(nil)");
		return (count);
	}
	count += ft_print_str("0x");
	count += ft_print_ptrhex(ptr, 0);
	return (count);
}
