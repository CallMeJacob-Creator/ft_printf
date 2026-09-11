/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcole <jcole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:17:03 by jcole             #+#    #+#             */
/*   Updated: 2026/09/11 16:57:46 by jcole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int	ft_printf(const char *format, ...);

//	%c
int	ft_write_char(char c);
int	ft_print_char(char c);

// %s
int	ft_strnull(void);
int	ft_print_str(const char *str);

// %d %i
int	ft_print_int(int n);

int	ft_print_hex(unsigned int n, int v);

int	ft_print_ptr(unsigned long int n);

int	ft_print_unsigned(unsigned int n);

#endif