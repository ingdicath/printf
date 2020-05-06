/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lowercase_Hex_tests.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/06 09:32:26 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/06 09:32:28 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "../printf.h"

int     ft_printf(const char *str, ...);

void printLowHexNoFlag(unsigned int x)
{
    printf("---LOWERCASE HEX NO FLAG---\n");
    int a = printf("real printf |%x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS---\n");
    int a = printf("real printf |%-x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO---\n");
    int a = printf("real printf |%0x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Width(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH---\n");
    int a = printf("real printf |%30x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%30x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Width_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH + STAR---\n");
    int a = printf("real printf |%25*x| for lowercase hexadecimal\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%25*x| for lowercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printLowHex_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + PRECISION---\n");
    int a = printf("real printf |%.x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + PRECISION + NUMBER---\n");
    int a = printf("real printf |%.5x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + PRECISION + STAR---\n");
    int a = printf("real printf |%.*x| for lowercase hexadecimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*x| for lowercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO---\n");
    int a = printf("real printf |%-0x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH---\n");
    int a = printf("real printf |%-30x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*x| for lowercase hexadecimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*x| for lowercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + PRECISION---\n");
    int a = printf("real printf |%-.x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*x| for lowercase hexadecimal\n", 35, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*x| for lowercase hexadecimal\n", 35, x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH---\n");
    int a = printf("real printf |%030x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*x| for lowercase hexadecimal\n", 35, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*x| for lowercase hexadecimal\n", 35, x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  PRECISION---\n");
    int a = printf("real printf |%0.x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*x| for lowercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*x| for lowercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printLowHex_Width_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH + PRECISION---\n");
    int a = printf("real printf |%10.x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Width_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Width_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*x| for lowercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*x| for lowercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printLowHex_Width_Star_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.x| for lowercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.x| for lowercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printLowHex_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5x| for lowercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5x| for lowercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printLowHex_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*x| for lowercase hexadecimal\n", 8, 5, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*x| for lowercase hexadecimal\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH---\n");
    int a = printf("real printf |%-025x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*x| for lowercase hexadecimal\n", 30, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*x| for lowercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + PRECISION---\n");
    int a = printf("real printf |%-0.x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*x| for lowercase hexadecimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*x| for lowercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-10.x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*x| for lowercase hexadecimal\n", 10, x); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*x| for lowercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width_Star_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.x| for lowercase hexadecimal\n", 8, x); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.x| for lowercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5x| for lowercase hexadecimal\n", 8, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5x| for lowercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*x| for lowercase hexadecimal\n", 8, 5, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*x| for lowercase hexadecimal\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH + PRECISION---\n");
    int a = printf("real printf |%020.x| for lowercase hexadecimal\n", x);//Does not print the string
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%020.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5x| for lowercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*x| for lowercase hexadecimal\n", 10, x);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*x| for lowercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width_Star_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.x| for lowercase hexadecimal\n", 30, x);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.x| for lowercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5x| for lowercase hexadecimal\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5x| for lowercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printLowHex_Zero_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*x| for lowercase hexadecimal\n", 30, 5, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*x| for lowercase hexadecimal\n", 30, 5, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-025.x| for lowercase hexadecimal\n", x);//Does not print the string
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-025.5x| for lowercase hexadecimal\n", x);//Does not take in count the zero
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.5x| for lowercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*x| for lowercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*x| for lowercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width_Star_Precision(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.x| for lowercase hexadecimal\n", 5, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.x| for lowercase hexadecimal\n", 5, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5x| for lowercase hexadecimal\n", 20, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5x| for lowercase hexadecimal\n", 20, x);
    printf("return ft %d\n", a);
}

void printLowHex_Minus_Zero_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---LOWERCASE HEX + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*x| for lowercase hexadecimal\n", 8, 15, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*x| for lowercase hexadecimal\n", 8, 15, x);
    printf("return ft %d\n", a);
}
void runLowercaseHexTest(void)
{
    unsigned int x;
    x = 234;
    // x = 4294967295;

    printLowHexNoFlag(x);
    printLowHex_Minus(x);
    printLowHex_Zero(x);
    printLowHex_Width(x);
    printLowHex_Width_Star(x);
    printLowHex_Precision(x);
    printLowHex_Precision_Number(x);
    printLowHex_Precision_Star(x);
    printLowHex_Minus_Zero(x);
    printLowHex_Minus_Width(x);
    printLowHex_Minus_Width_Star(x);
    printLowHex_Minus_Precision(x);
    printLowHex_Minus_Precision_Number(x);
    printLowHex_Minus_Precision_Star(x);
    printLowHex_Zero_Width(x);
    printLowHex_Zero_Width_Star(x);
    printLowHex_Zero_Precision(x);
    printLowHex_Zero_Precision_Number(x);
    printLowHex_Zero_Precision_Star(x);
    printLowHex_Width_Precision(x);
    printLowHex_Width_Precision_Number(x);
    printLowHex_Width_Precision_Star(x);
    printLowHex_Width_Star_Precision(x);
    printLowHex_Width_Star_Precision_Number(x);
    printLowHex_Width_Star_Precision_Star(x);
    printLowHex_Minus_Zero_Width(x);
    printLowHex_Minus_Zero_Width_Number(x);
    printLowHex_Minus_Zero_Precision(x);
    printLowHex_Minus_Zero_Precision_Number(x);
    printLowHex_Minus_Zero_Precision_Star(x);
    printLowHex_Minus_Width_Precision(x);
    printLowHex_Minus_Width_Precision_Number(x);
    printLowHex_Minus_Width_Precision_Star(x);
    printLowHex_Minus_Width_Star_Precision(x);
    printLowHex_Minus_Width_Star_Precision_Number(x);
    printLowHex_Minus_Width_Star_Precision_Star(x);
    printLowHex_Zero_Width_Precision(x);
    printLowHex_Zero_Width_Precision_Number(x);
    printLowHex_Zero_Width_Precision_Star(x);
    printLowHex_Zero_Width_Star_Precision(x);
    printLowHex_Zero_Width_Star_Precision_Number(x);
    printLowHex_Zero_Width_Star_Precision_Star(x);
    printLowHex_Minus_Zero_Width_Precision(x);
    printLowHex_Minus_Zero_Width_Precision_Number(x);
    printLowHex_Minus_Zero_Width_Precision_Star(x);
    printLowHex_Minus_Zero_Width_Star_Precision(x);
    printLowHex_Minus_Zero_Width_Star_Precision_Number(x);
    printLowHex_Minus_Zero_Width_Star_Precision_Star(x);
}

int main(void)
{
    runLowercaseHexTest();
	return (0);
}

