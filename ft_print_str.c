/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:07:12 by jcole             #+#    #+#             */
/*   Updated: 2026/09/15 14:47:17 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	slen;

	if (!str)
		str = "(null)";
	slen = ft_strlen(str);
	write(1, str, slen);
	return (slen);
}
