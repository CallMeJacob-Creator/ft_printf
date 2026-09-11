/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:07:12 by jcole             #+#    #+#             */
/*   Updated: 2026/09/11 16:10:34 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strnull(void)
{
	write(1, "NULL", 4);
	return (0);
}

int	ft_print_str(const char *str)
{
	int	slen;

	if (str == NULL)
		ft_strnull();
	slen = ft_strlen(str);
	write(1, str, slen);
	return (slen);
}
