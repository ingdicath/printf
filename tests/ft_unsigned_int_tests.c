/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unsigned_int_tests.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/06 08:49:27 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/06 08:49:29 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...);

void printUnsignedIntNoFlag(unsigned int x)
{
    printf("---UNSIGNED INT NO FLAG---\n");
    int a = printf("real printf |%u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS---\n");
    int a = printf("real printf |%-u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO---\n");
    int a = printf("real printf |%0u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH---\n");
    int a = printf("real printf |%30u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%30u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH + STAR---\n");
    int a = printf("real printf |%25*u| for Unsigned Integer\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%25*u| for Unsigned Integer\n", 30, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + PRECISION---\n");
    int a = printf("real printf |%.u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + PRECISION + NUMBER---\n");
    int a = printf("real printf |%.5u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + PRECISION + STAR---\n");
    int a = printf("real printf |%.*u| for Unsigned Integer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*u| for Unsigned Integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO---\n");
    int a = printf("real printf |%-0u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH---\n");
    int a = printf("real printf |%-30u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*u| for Unsigned Integer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*u| for Unsigned Integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + PRECISION---\n");
    int a = printf("real printf |%-.u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*u| for Unsigned Integer\n", 35, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*u| for Unsigned Integer\n", 35, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH---\n");
    int a = printf("real printf |%030u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*u| for Unsigned Integer\n", 35, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*u| for Unsigned Integer\n", 35, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  PRECISION---\n");
    int a = printf("real printf |%0.u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*u| for Unsigned Integer\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*u| for Unsigned Integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH + PRECISION---\n");
    int a = printf("real printf |%10.u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*u| for Unsigned Integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*u| for Unsigned Integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width_Star_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.u| for Unsigned Integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.u| for Unsigned Integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5u| for Unsigned Integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5u| for Unsigned Integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*u| for Unsigned Integer\n", 8, 5, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*u| for Unsigned Integer\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH---\n");
    int a = printf("real printf |%-025u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*u| for Unsigned Integer\n", 30, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*u| for Unsigned Integer\n", 30, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + PRECISION---\n");
    int a = printf("real printf |%-0.u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*u| for Unsigned Integer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*u| for Unsigned Integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-10.u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*u| for Unsigned Integer\n", 10, x); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*u| for Unsigned Integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width_Star_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.u| for Unsigned Integer\n", 8, x); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.u| for Unsigned Integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5u| for Unsigned Integer\n", 8, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5u| for Unsigned Integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*u| for Unsigned Integer\n", 8, 5, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*u| for Unsigned Integer\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH + PRECISION---\n");
    int a = printf("real printf |%020.u| for Unsigned Integer\n", x);//Does not print the UnsignedInt
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%020.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5u| for Unsigned Integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*u| for Unsigned Integer\n", 10, x);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*u| for Unsigned Integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width_Star_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.u| for Unsigned Integer\n", 30, x);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.u| for Unsigned Integer\n", 30, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5u| for Unsigned Integer\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5u| for Unsigned Integer\n", 30, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Zero_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*u| for Unsigned Integer\n", 30, 5, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*u| for Unsigned Integer\n", 30, 5, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-025.u| for Unsigned Integer\n", x);//Does not print the UnsignedInt
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-025.5u| for Unsigned Integer\n", x);//Does not take in count the zero
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.5u| for Unsigned Integer\n", x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*u| for Unsigned Integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*u| for Unsigned Integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width_Star_Precision(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.u| for Unsigned Integer\n", 5, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.u| for Unsigned Integer\n", 5, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width_Star_Precision_Number(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5u| for Unsigned Integer\n", 20, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5u| for Unsigned Integer\n", 20, x);
    printf("return ft %d\n", a);
}

void printUnsignedInt_Minus_Zero_Width_Star_Precision_Star(unsigned int x)
{
    printf("\n---UNSIGNED INT + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*u| for Unsigned Integer\n", 8, 15, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*u| for Unsigned Integer\n", 8, 15, x);
    printf("return ft %d\n", a);
}
void runUnsignedIntTest(void)
{
    unsigned int x;
    x = -4294967299;
    // x = -1;

    printUnsignedIntNoFlag(x);
    printUnsignedInt_Minus(x);
    printUnsignedInt_Zero(x);
    printUnsignedInt_Width(x);
    printUnsignedInt_Width_Star(x);
    printUnsignedInt_Precision(x);
    printUnsignedInt_Precision_Number(x);
    printUnsignedInt_Precision_Star(x);
    printUnsignedInt_Minus_Zero(x);
    printUnsignedInt_Minus_Width(x);
    printUnsignedInt_Minus_Width_Star(x);
    printUnsignedInt_Minus_Precision(x);
    printUnsignedInt_Minus_Precision_Number(x);
    printUnsignedInt_Minus_Precision_Star(x);
    printUnsignedInt_Zero_Width(x);
    printUnsignedInt_Zero_Width_Star(x);
    printUnsignedInt_Zero_Precision(x);
    printUnsignedInt_Zero_Precision_Number(x);
    printUnsignedInt_Zero_Precision_Star(x);
    printUnsignedInt_Width_Precision(x);
    printUnsignedInt_Width_Precision_Number(x);
    printUnsignedInt_Width_Precision_Star(x);
    printUnsignedInt_Width_Star_Precision(x);
    printUnsignedInt_Width_Star_Precision_Number(x);
    printUnsignedInt_Width_Star_Precision_Star(x);
    printUnsignedInt_Minus_Zero_Width(x);
    printUnsignedInt_Minus_Zero_Width_Number(x);
    printUnsignedInt_Minus_Zero_Precision(x);
    printUnsignedInt_Minus_Zero_Precision_Number(x);
    printUnsignedInt_Minus_Zero_Precision_Star(x);
    printUnsignedInt_Minus_Width_Precision(x);
    printUnsignedInt_Minus_Width_Precision_Number(x);
    printUnsignedInt_Minus_Width_Precision_Star(x);
    printUnsignedInt_Minus_Width_Star_Precision(x);
    printUnsignedInt_Minus_Width_Star_Precision_Number(x);
    printUnsignedInt_Minus_Width_Star_Precision_Star(x);
    printUnsignedInt_Zero_Width_Precision(x);
    printUnsignedInt_Zero_Width_Precision_Number(x);
    printUnsignedInt_Zero_Width_Precision_Star(x);
    printUnsignedInt_Zero_Width_Star_Precision(x);
    printUnsignedInt_Zero_Width_Star_Precision_Number(x);
    printUnsignedInt_Zero_Width_Star_Precision_Star(x);
    printUnsignedInt_Minus_Zero_Width_Precision(x);
    printUnsignedInt_Minus_Zero_Width_Precision_Number(x);
    printUnsignedInt_Minus_Zero_Width_Precision_Star(x);
    printUnsignedInt_Minus_Zero_Width_Star_Precision(x);
    printUnsignedInt_Minus_Zero_Width_Star_Precision_Number(x);
    printUnsignedInt_Minus_Zero_Width_Star_Precision_Star(x);
}

int main(void)
{
    runUnsignedIntTest();
	return (0);
}
