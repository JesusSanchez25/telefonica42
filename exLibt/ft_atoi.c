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
#include <stdio.h>
#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	int		numero;
	char	*numerofinal;
	int		j;

	numerofinal = (char *)calloc(sizeof(char) * 10);
	signo = 1;
	numero = 0;
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && numerofinal[0] == '\0')
			signo = -signo;
		else if (str[i] <= '9' && str[i] >= '0')
			numerofinal[j++] = str[i];
		else if (str[i] != ' ' && str[i] != '+' && numerofinal[0] != '\0')
			break ;
		else if (str[i] == ' ' && numerofinal[0] != '\0')
			break ;
		i++;
	}
	return (signo * strtoint(numerofinal));
}

// int main(void)
// {
//     // Caso normal
//     char str1[] = "12345";
//     printf("String '%s' to integer: %d\n", str1, ft_atoi(str1));

//     // Número con signos
//     char str2[] =  " ---+--+1234ab567";
//     printf("String '%s' to integer: %d\n", str2, ft_atoi(str2));

//     // Cadena con espacios
//     char str3[] = "   42";
//     printf("String '%s' to integer: %d\n", str3, ft_atoi(str3));

//     // Cadena con caracteres no numéricos al principio
//     char str4[] = "abc123";
//     printf("String '%s' to integer: %d\n", str4, ft_atoi(str4));

//     // Cadena con caracteres no numéricos al final
//     char str5[] = "123abc";
//     printf("String '%s' to integer: %d\n", str5, ft_atoi(str5));

//     return 0;
// }
