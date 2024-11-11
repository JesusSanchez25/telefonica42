/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:36:40 by marvin            #+#    #+#             */
/*   Updated: 2024/11/08 09:36:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdint.h>

int	print_pointer(va_list args)
{
	void	*ptr;
	char	*num_str;
	int		len;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	num_str = ft_itoa_hex_long((uintptr_t)ptr);
	if (num_str)
	{
		write(1, "0x", 2);
		write(1, num_str, ft_strlen(num_str));
		len = ft_strlen(num_str) + 2;
		free(num_str);
		return (len);
	}
	return (0);
}

int	print_cases(char sym, va_list args)
{
	int		printed_chars;
	char	*str;
	int		c;
	int		num;

	printed_chars = 0;
	if (sym == 's')
		printed_chars = print_str(args);
	else if (sym == 'd' || sym == 'i')
		printed_chars = print_int(args);
	else if (sym == 'c')
		printed_chars = print_char(args, sym);
	else if (sym == 'u')
		printed_chars = print_unsigned_int(args);
	else if (sym == 'x' || sym == 'X')
		printed_chars = print_hexa_int(args, sym);
	else if (sym == '%')
		printed_chars = print_char(args, sym);
	else if (sym == 'p')
		printed_chars = print_pointer(args);
	return (printed_chars);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		count;

	va_start(args, format);
	i = -1;
	count = 0;
	if (!format)
		return (-1);
	while (format[++i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			count += print_cases(format[i + 1], args);
			i += 1;
		}
		else
		{
			write(1, &format[i], 1);
			count += 1;
		}
	}
	va_end(args);
	return (count);
}
