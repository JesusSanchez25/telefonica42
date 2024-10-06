/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesusanc <jesusanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:53:53 by jesusanc          #+#    #+#             */
/*   Updated: 2024/09/16 21:03:03 by jesusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/* #include <stdio.h>
#include <strings.h>  // Para bzero

int main() {
    char buffer[10];
    
    // Llena el buffer con ceros
    ft_bzero(buffer, sizeof(buffer));
    
    // Imprime el buffer
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i] == 0 ? 0 : 1);
    }
    printf("\n");
    
    return 0;
} */
