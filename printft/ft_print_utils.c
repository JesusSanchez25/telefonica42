/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:08:00 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 11:08:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdint.h>

int	print_str(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	print_char(va_list args, char sym)
{
	int	c;

	if (sym == '%')
	{
		c = '%';
		write(1, &c, 1);
		return (1);
	}
	c = va_arg(args, int);
	if (c == 0)
		c = 0;
	write(1, &c, 1);
	return (1);
}

int	print_int(va_list args)
{
	int		num;
	char	*num_str;

	num = va_arg(args, int);
	num_str = ft_itoa(num);
	if (num_str)
	{
		write(1, num_str, ft_strlen(num_str));
		if (num < 0 && num != -2147483648)
			return (ft_strlen(num_str) + 1);
		return (ft_strlen(num_str));
	}
	return (0);
}

int	print_unsigned_int(va_list args)
{
	unsigned int	num;
	char			*num_str;
	int				len;

	num = va_arg(args, unsigned int);
	num_str = ft_itoa_unsigned(num);
	if (num_str)
	{
		write(1, num_str, ft_strlen(num_str));
		len = ft_strlen(num_str);
		free(num_str);
		return (len);
	}
	return (0);
}

int	print_hexa_int(va_list args, char sym)
{
	unsigned int	num;
	char			*num_str;
	int				len;

	num = va_arg(args, unsigned int);
	num_str = ft_itoa_hex(num, sym);
	if (num_str)
	{
		write(1, num_str, ft_strlen(num_str));
		len = ft_strlen(num_str);
		free(num_str);
		return (len);
	}
	return (0);
}
