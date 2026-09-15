/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:16:27 by jcole             #+#    #+#             */
/*   Updated: 2026/09/15 13:49:06 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argprint(int symb, va_list args)
{
	int	count;

	count = 0;
	if (symb == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (symb == 's')
		count += ft_print_str(va_arg(args, const char *));
	else if (symb == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (symb == 'd' || symb == 'i')
		count += ft_print_int(va_arg(args, int));
	else if (symb == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (symb == 'x')
		count += ft_print_hex(va_arg(args, unsigned int), 0);
	else if (symb == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), 1);
	else if (symb == '%')
		count += ft_print_char('%');
	else
		count += ft_write_char(symb);
	return (count);
}

int	ft_walkthrough(const char *str, va_list args)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_argprint(str[i], args);
		}
		else
			count += ft_write_char(str[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*str;
	int		count;

	str = ft_strdup(format);
	count = 0;
	va_start(args, format);
	count = ft_walkthrough(format, args);
	va_end(args);
	free(str);
	return (count);
}
