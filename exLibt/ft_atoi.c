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

void	*ft_calloc(size_t num, size_t size);
int	strtoint(char *num)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (num[i] != '\0')
	{
		result *= 10;
		result += num[i] - '0';
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		signo;
	char	*numerofinal;
	int		j;

	numerofinal = (char *)ft_calloc(10, sizeof(char));
	if (!numerofinal)
		return (0);
	signo = 1;
	j = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -signo;
		i++;
	}
	while (str[i] != '\0' && (str[i] != ' '))
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			numerofinal[j++] = str[i];
		}
		else
			break ;
		i++;
	}
	return (signo * strtoint(numerofinal));
}

// int	main(void)
// {
// 	char	str1[] = "12345";
// 	char	str2[] = " ---+--+1234ab567";
// 	char	str3[] = "   42";
// 	char	str4[] = "abc123";
// 	char	str5[] = "123abc";

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
// 	return (0);
// }
