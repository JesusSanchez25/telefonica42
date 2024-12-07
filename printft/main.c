/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:46:36 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 12:46:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>

int main() {
    // %c - Carácter
    printf("Prueba de %%c:\n");
    ft_printf("Carácter normal: %c\n", 'A');
    ft_printf("Carácter no imprimible (ASCII 7): %c\n", 7);  // Carácter no imprimible
    ft_printf("Carácter nulo (ASCII 0): %c\n", 0);           // Carácter nulo

    // %s - Cadena
    printf("\nPrueba de %%s:\n");
    ft_printf("Cadena normal: %s\n", "Hola, mundo");
    ft_printf("Cadena vacía: %s\n", "");
    ft_printf("Cadena nula: %s\n", NULL);

    // %p - Puntero
    printf("\nPrueba de %%p:\n");
    int num = 42;
    ft_printf("Puntero válido: %p\n", &num);
    ft_printf("Puntero nulo: %p\n", NULL);

    // %d y %i - Entero con signo en base 10
    printf("\nPrueba de %%d y %%i:\n");
    ft_printf("Entero positivo: %d\n", 12345);
    ft_printf("Entero negativo: %d\n", -12345);
    ft_printf("Mínimo de int: %d\n", INT_MIN);
    ft_printf("Máximo de int: %d\n", INT_MAX);

    ft_printf("Entero positivo con %%i: %i\n", 12345);
    ft_printf("Entero negativo con %%i: %i\n", -12345);
    ft_printf("Mínimo de int con %%i: %i\n", INT_MIN);
    ft_printf("Máximo de int con %%i: %i\n", INT_MAX);

    // %u - Entero sin signo en base 10
    printf("\nPrueba de %%u:\n");
    ft_printf("Entero sin signo: %u\n", 12345);
    ft_printf("Máximo de unsigned int: %u\n", UINT_MAX);

    // %x y %X - Entero hexadecimal
    printf("\nPrueba de %%x y %%X:\n");
    ft_printf("Número hexadecimal minúscula: %x\n", 255);
    ft_printf("Número hexadecimal minúscula grande: %x\n", UINT_MAX);
    ft_printf("Número hexadecimal mayúscula: %X\n", 255);
    ft_printf("Número hexadecimal mayúscula grande: %X\n", UINT_MAX);
    ft_printf("Número dieciseis hexadecimal minuscula: %x\n", 16);
    ft_printf("Número dieciseis hexadecimal mayúscula: %X\n", 16);



    // %% - Símbolo de porcentaje
    printf("\nPrueba de %%%%:\n");
    ft_printf("Porcentaje: %%\n");

    return 0;
}
