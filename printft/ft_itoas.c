/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:46:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 17:46:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdint.h>

int	test_cases(int *num)
{
	if (!num)
		return (0);
	if (*num == -2147483648)
	{
		return (-1);
	}
	if (*num < 0)
	{
		*num = -*num;
		write(1, "-", 1);
	}
	return (0);
}

char	*ft_itoa(int num)
{
	char	*str;
	int		temp;
	int		len;

	if (test_cases(&num) == -1)
		return ("-2147483648");
	temp = num;
	len = 1;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- != 0)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

char	*ft_itoa_unsigned(unsigned int num)
{
	char			*str;
	unsigned int	temp;
	int				len;

	temp = num;
	len = 1;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- != 0)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

char	*ft_itoa_hex(unsigned int num, char sym)
{
	char			*str;
	unsigned int	temp;
	unsigned int	len;
	char			*hex_numbers;

	temp = num;
	len = 1;
	hex_numbers = "0123456789abcdef";
	if (sym == 'X')
		hex_numbers = "0123456789ABCDEF";
	while (temp >= 16)
	{
		len++;
		temp /= 16;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- != 0)
	{
		str[len] = hex_numbers[num % 16];
		num /= 16;
	}
	return (str);
}

char	*ft_itoa_hex_long(uintptr_t num)
{
	char		*str;
	uintptr_t	temp;
	int			len;
	char		*hex_numbers;

	temp = num;
	len = 1;
	hex_numbers = "0123456789abcdef";
	while (temp >= 16)
	{
		len++;
		temp /= 16;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- != 0)
	{
		str[len] = hex_numbers[num % 16];
		num /= 16;
	}
	return (str);
}

// COMPROBAR COUNTDIGITS
// int main(int argc, char const *argv[])
// {
// 	// CONTANDO LINEAS DE NUMEROS
// 	printf("El número %d mide: %d\n", 197, countdigits(197));
// 	printf("El número %d mide: %d\n", -197, countdigits(-197));
// 	// printf("El número %d mide: %d\n", -2147483648, countdigits(2147483648));
// 	printf("El numero %d mide: %d\n", -2147483647, countdigits(-2147483647));
// 	printf("El numero %d mide: %d\n", -2147483, countdigits(-2147483));
// 	printf("El numero %d mide: %d\n", 0, countdigits(0));

// 	return (0);
// }

// COMPROBAR REVERSESTR
// int	main(int argc, char const *argv[])
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	// aplico el strdup para convertir la palabra en un array dinámico
// 	// si n hago esto da segmentation fault al intentar cambiar sus datos
// 	// o si intento copiarlo con el memcpy
// 	str1 = "Esto";
// 	str1 = ft_strdup(str1);
// 	str2 = "Esto es un texto";
// 	str2 = ft_strdup(str2);
// 	str3 = "-123";
// 	str3 = ft_strdup(str3);
// 	str4 = "321-";
// 	str4 = ft_strdup(str4);
// 	printf("El string -%s- ha pasado a -%s-\n", str1, reversestr(str1));
// 	printf("El string: -%s- ha pasado a :-%s-\n", str2, reversestr(str2));
// 	printf("El string: -%s- ha pasado a :-%s-\n", str3, reversestr(str3));
// 	printf("El string: -%s- ha pasado a :-%s-\n", str4, reversestr(str4));
// 	return (0);
// }

// int	main(void)
// {
// 	int		num;
// 	char	*str;
// 	char	*res;

// 	num = -2147483648LL;
// 	str = ft_itoa(-2147483648LL);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	num = 123;
// 	str = ft_itoa(num);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	num = -2147483648;
// 	str = ft_itoa(num);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	num = -2147448;
// 	str = ft_itoa(num);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	num = -2147;
// 	str = ft_itoa(num);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	num = 2147;
// 	str = ft_itoa(num);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	num = 2147483647;
// 	str = ft_itoa(num);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	num = 0;
// 	str = ft_itoa(num);
// 	printf("El número %d convertido a cadena es: %s\n", num, str);
// 	return (0);
// }
