/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:16:03 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 21:16:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int				ft_printf(const char *format, ...);
unsigned long	ft_strlen(const char *s);
char			*ft_itoa(int n);
char			*ft_itoa_unsigned(unsigned int num);
char			*ft_itoa_hex(unsigned int num, char sym);
char			*ft_itoa_hex_up(unsigned int num);
char			*ft_itoa_hex_long(unsigned long num);
int				print_str(va_list args);
int				print_char(va_list args, char sym);
int				print_int(va_list args);
int				print_int(va_list args);
int				print_hexa_int(va_list args, char sym);
int				print_str(va_list args);
int				print_unsigned_int(va_list args);
