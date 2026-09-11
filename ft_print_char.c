/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:07:21 by jcole             #+#    #+#             */
/*   Updated: 2026/09/11 17:02:17 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_char(char c)
{
	int	count;

	count = 0;
	count += ft_write_char(c);
	return (count);
}
