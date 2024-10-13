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
#include "libft.h"
#include <stdlib.h>

static int	countdigits(long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void	reversestr(char *str, int len)
{
	int	i;
	int	temp;

	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

static char	*int_to_charray(int num, char *str, int signo)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (signo)
		str[i++] = '-';
	str[i] = '\0';
	reversestr(str, i);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	num;
	int		signo;

	num = n;
	signo = 0;
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num == 0)
		return (ft_strdup("0"));
	if (num < 0)
	{
		signo = 1;
		num = -num;
	}
	size = countdigits(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str = int_to_charray(num, str, signo);
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
