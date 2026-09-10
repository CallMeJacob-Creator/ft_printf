/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:16:27 by jcole             #+#    #+#             */
/*   Updated: 2026/09/10 16:34:30 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argprint(int symb, va_list args)
{
	int	count;

	count = 0;
	if (symb == 'c')
		count += symb += ft_print_char(va_arg(args, char));
	else if (symb == 's')
		count += symb += ft_print_str(va_arg(args, const char *));
	else if (symb == 'p')
		count += symb += ft_print_ptr((unsigned long int)va_arg(args, void *));
	else if (symb == 'd' || symb == 'i')
		count += symb += ft_print_int(va_arg(args, int));
	else if (symb == 'u')
		count += symb += ft_print_unsigned(va_arg(args, unsigned int));
	else if (symb == 'x')
		count += symb += ft_print_hex(va_arg(args, unsigned int), 0);
	else if (symb == 'X')
		count += symb += ft_print_hex(va_arg(args, unsigned int), 1);
	else if (symb == '%')
		count += symb += ft_print_char('%');
	return (count);
}

int	ft_walkthrough(char *str, va_list args)
{
	int	i;
	int	count;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_argprint(str[i+1], args);
		}
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