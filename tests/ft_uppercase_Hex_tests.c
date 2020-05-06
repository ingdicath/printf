/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uppercase_Hex_tests.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/06 09:50:11 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/06 09:50:14 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int             ft_printf(const char *str, ...);

void printUppHexNoFlag(unsigned int x)
{
    printf("---UPPERCASE HEX NO FLAG---\n");
    int a = printf("real printf |%X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS---\n");
    int a = printf("real printf |%-X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO---\n");
    int a = printf("real printf |%0X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Width(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH---\n");
    int a = printf("real printf |%30X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%30X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Width_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH + STAR---\n");
    int a = printf("real printf |%25*X| for uppercase hexadecimal\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%25*X| for uppercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printUppHex_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + PRECISION---\n");
    int a = printf("real printf |%.X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + PRECISION + NUMBER---\n");
    int a = printf("real printf |%.5X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + PRECISION + STAR---\n");
    int a = printf("real printf |%.*X| for uppercase hexadecimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*X| for uppercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO---\n");
    int a = printf("real printf |%-0X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH---\n");
    int a = printf("real printf |%-30X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*X| for uppercase hexadecimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*X| for uppercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + PRECISION---\n");
    int a = printf("real printf |%-.X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*X| for uppercase hexadecimal\n", 35, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*X| for uppercase hexadecimal\n", 35, x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH---\n");
    int a = printf("real printf |%030X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*X| for uppercase hexadecimal\n", 35, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*X| for uppercase hexadecimal\n", 35, x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  PRECISION---\n");
    int a = printf("real printf |%0.X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*X| for uppercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*X| for uppercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printUppHex_Width_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH + PRECISION---\n");
    int a = printf("real printf |%10.X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Width_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Width_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*X| for uppercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*X| for uppercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printUppHex_Width_Star_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.X| for uppercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.X| for uppercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printUppHex_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5X| for uppercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5X| for uppercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printUppHex_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*X| for uppercase hexadecimal\n", 8, 5, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*X| for uppercase hexadecimal\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH---\n");
    int a = printf("real printf |%-025X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*X| for uppercase hexadecimal\n", 30, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*X| for uppercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + PRECISION---\n");
    int a = printf("real printf |%-0.X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*X| for uppercase hexadecimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*X| for uppercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-10.X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*X| for uppercase hexadecimal\n", 10, x); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*X| for uppercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width_Star_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.X| for uppercase hexadecimal\n", 8, x); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.X| for uppercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5X| for uppercase hexadecimal\n", 8, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5X| for uppercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*X| for uppercase hexadecimal\n", 8, 5, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*X| for uppercase hexadecimal\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH + PRECISION---\n");
    int a = printf("real printf |%020.X| for uppercase hexadecimal\n", x);//Does not print the string
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%020.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5X| for uppercase hexadecimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*X| for uppercase hexadecimal\n", 10, x);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*X| for uppercase hexadecimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width_Star_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.X| for uppercase hexadecimal\n", 30, x);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.X| for uppercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5X| for uppercase hexadecimal\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5X| for uppercase hexadecimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printUppHex_Zero_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*X| for uppercase hexadecimal\n", 30, 5, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*X| for uppercase hexadecimal\n", 30, 5, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-025.X| for uppercase hexadecimal\n", x);//Does not print the string
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-025.5X| for uppercase hexadecimal\n", x);//Does not take in count the zero
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.5X| for uppercase hexadecimal\n", x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*X| for uppercase hexadecimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*X| for uppercase hexadecimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width_Star_Precision(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.X| for uppercase hexadecimal\n", 5, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.X| for uppercase hexadecimal\n", 5, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5X| for uppercase hexadecimal\n", 20, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5X| for uppercase hexadecimal\n", 20, x);
    printf("return ft %d\n", a);
}

void printUppHex_Minus_Zero_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UPPERCASE HEX + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*X| for uppercase hexadecimal\n", 8, 15, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*X| for uppercase hexadecimal\n", 8, 15, x);
    printf("return ft %d\n", a);
}
void runUppercaseHexTest(void)
{
    unsigned int x;
    // x = 4294967295;
    x = 234;

    printUppHexNoFlag(x);
    printUppHex_Minus(x);
    printUppHex_Zero(x);
    printUppHex_Width(x);
    printUppHex_Width_Star(x);
    printUppHex_Precision(x);
    printUppHex_Precision_Number(x);
    printUppHex_Precision_Star(x);
    printUppHex_Minus_Zero(x);
    printUppHex_Minus_Width(x);
    printUppHex_Minus_Width_Star(x);
    printUppHex_Minus_Precision(x);
    printUppHex_Minus_Precision_Number(x);
    printUppHex_Minus_Precision_Star(x);
    printUppHex_Zero_Width(x);
    printUppHex_Zero_Width_Star(x);
    printUppHex_Zero_Precision(x);
    printUppHex_Zero_Precision_Number(x);
    printUppHex_Zero_Precision_Star(x);
    printUppHex_Width_Precision(x);
    printUppHex_Width_Precision_Number(x);
    printUppHex_Width_Precision_Star(x);
    printUppHex_Width_Star_Precision(x);
    printUppHex_Width_Star_Precision_Number(x);
    printUppHex_Width_Star_Precision_Star(x);
    printUppHex_Minus_Zero_Width(x);
    printUppHex_Minus_Zero_Width_Number(x);
    printUppHex_Minus_Zero_Precision(x);
    printUppHex_Minus_Zero_Precision_Number(x);
    printUppHex_Minus_Zero_Precision_Star(x);
    printUppHex_Minus_Width_Precision(x);
    printUppHex_Minus_Width_Precision_Number(x);
    printUppHex_Minus_Width_Precision_Star(x);
    printUppHex_Minus_Width_Star_Precision(x);
    printUppHex_Minus_Width_Star_Precision_Number(x);
    printUppHex_Minus_Width_Star_Precision_Star(x);
    printUppHex_Zero_Width_Precision(x);
    printUppHex_Zero_Width_Precision_Number(x);
    printUppHex_Zero_Width_Precision_Star(x);
    printUppHex_Zero_Width_Star_Precision(x);
    printUppHex_Zero_Width_Star_Precision_Number(x);
    printUppHex_Zero_Width_Star_Precision_Star(x);
    printUppHex_Minus_Zero_Width_Precision(x);
    printUppHex_Minus_Zero_Width_Precision_Number(x);
    printUppHex_Minus_Zero_Width_Precision_Star(x);
    printUppHex_Minus_Zero_Width_Star_Precision(x);
    printUppHex_Minus_Zero_Width_Star_Precision_Number(x);
    printUppHex_Minus_Zero_Width_Star_Precision_Star(x);
}

int main(void)
{
    runUppercaseHexTest();
	return (0);
}
