/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:54:24 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 17:54:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	numerofinal;
	int	signo;

	signo = 1;
	numerofinal = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\r' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signo = signo * -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		numerofinal = numerofinal * 10 + (*str - '0');
		str++;
	}
	return (signo * numerofinal);
}

// int	main(void)
// {
// 	char	str1[] = "12345";
// 	char	str2[] = " ---+--+1234ab567";
// 	char	str3[] = "   42";
// 	char	str4[] = "abc123";
// 	char	str5[] = "123abc";
// 	char	str6[] = "123abc456";

// 	// Caso normal
// 	printf("String '%s' to integer: %d\n", str1, ft_atoi(str1));
// 	// Número con signos
// 	printf("String '%s' to integer: %d\n", str2, ft_atoi(str2));
// 	// Cadena con espacios
// 	printf("String '%s' to integer: %d\n", str3, ft_atoi(str3));
// 	// Cadena con caracteres no numéricos al principio
// 	printf("String '%s' to integer: %d\n", str4, ft_atoi(str4));
// 	// Cadena con caracteres no numéricos al final
// 	printf("String '%s' to integer: %d\n", str5, ft_atoi(str5));
// 	// Número con signos en el medio
// 	printf("String '%s' to integer: %d\n", str2, ft_atoi(str6));
// 	return (0);
// }
