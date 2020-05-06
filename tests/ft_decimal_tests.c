/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_decimal_tests.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/05 14:45:58 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/05 14:46:00 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "../printf.h"

int ft_printf(const char *str, ...);


void printDecimalNoFlag(int x)
{
    printf("---DECIMAL NO FLAG---\n");
    int a = printf("real printf |%d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus(int x)
{
    printf("\n---DECIMAL + MINUS---\n" );
    int a = printf("real printf |%-d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalZero(int x)
{
    printf("\n---DECIMAL + ZERO---\n" );    
    int a = printf("real printf |%0d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalWidth(int x)
{
    printf("\n---DECIMAL + WIDTH---\n");
    int a = printf("real printf |%5d| for decimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalWidth_Star(int x)
{
    printf("\n---DECIMAL + WIDTH + STAR---\n");
    int a = printf("real printf |%5*d| for decimal\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5*d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalPrecision(int x)
{
    printf("\n---DECIMAL + PRECISION---\n" );
    int a = printf("real printf |%.d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalPrecision_Number(int x)
{
    printf("\n---DECIMAL + PRECISION + NUMBER---\n" );
    int a = printf("real printf |%.5d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalPrecision_Star(int x)
{
    printf("\n---DECIMAL + PRECISION + STAR---\n");
    int a = printf("real printf |%.*d| for decimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*d| for decimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO---\n" );
    int a = printf("real printf |%-0d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH---\n" );
    int a = printf("real printf |%-5d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width_Star(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*d| for decimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*d| for decimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Precision(int x)
{
    printf("\n---DECIMAL + MINUS + PRECISION---\n" );
    int a = printf("real printf |%-.d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Precision_Number(int x)
{
    printf("\n---DECIMAL + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Precision_Star(int x)
{
    printf("\n---DECIMAL + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*d| for decimal\n", 35, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*d| for decimal\n", 35, x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width(int x)
{
    printf("\n---DECIMAL + ZERO + WIDTH---\n" );    
    int a = printf("real printf |%010d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%010d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width_Star(int x)
{
    printf("\n---DECIMAL + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*d| for decimal\n", 35, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*d| for decimal\n", 35, x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Precision(int x)
{
    printf("\n---DECIMAL + ZERO + PRECISION---\n" );
    int a = printf("real printf |%0.d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Precision_Number(int x)
{
    printf("\n---DECIMAL + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5d| for decimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Precision_Star(int x)
{
    printf("\n---DECIMAL + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*d| for decimal\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalWidth_Precision(int x)
{
    printf("\n---DECIMAL + WIDTH + PRECISION---\n");
    int a = printf("real printf |%5.d| for decimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalWidth_Precision_Number(int x)
{
    printf("\n---DECIMAL + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalWidth_Precision_Star(int x)
{
    printf("\n---DECIMAL + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*d| for decimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalWidth_Star_Precision(int x)
{
    printf("\n---DECIMAL + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.d| for decimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalWidth_Star_Precision_Number(int x)
{
    printf("\n---DECIMAL + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5d| for decimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalWidth_Star_Precision_Star(int x)
{
    printf("\n---DECIMAL + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*d| for decimal\n", 8, 5, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*d| for decimal\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH---\n" );    
    int a = printf("real printf |%-010d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width_Star(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*d| for decimal\n", 30, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*d| for decimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Precision(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + PRECISION---\n" );
    int a = printf("real printf |%-0.d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Precision_Number(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Precision_Star(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*d| for decimal\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*d| for decimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width_Precision(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-5.d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-5.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width_Precision_Number(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width_Precision_Star(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*d| for decimal\n", 10, x); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*d| for decimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width_Star_Precision(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.d| for decimal\n", 8, x); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width_Star_Precision_Number(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5d| for decimal\n", 8, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Width_Star_Precision_Star(int x)
{
    printf("\n---DECIMAL + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*d| for decimal\n", 8, 5, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*d| for decimal\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width_Precision(int x)
{
    printf("\n---DECIMAL + ZERO + WIDTH + PRECISION---\n");    
    int a = printf("real printf |%010.d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%010.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width_Precision_Number(int x)
{
    printf("\n---DECIMAL + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5d| for decimal\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width_Precision_Star(int x)
{
    printf("\n---DECIMAL + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*d| for decimal\n", 10, x);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*d| for decimal\n", 10, x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width_Star_Precision(int x)
{
    printf("\n---DECIMAL + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.d| for decimal\n", 30, x);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.d| for decimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width_Star_Precision_Number(int x)
{
    printf("\n---DECIMAL + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5d| for decimal\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5d| for decimal\n", 30, x);
    printf("return ft %d\n", a);
}

void printDecimalZero_Width_Star_Precision_Star(int x)
{
    printf("\n---DECIMAL + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*d| for decimal\n", 30, 5, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*d| for decimal\n", 30, 5, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width_Precision(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH + PRECISION---\n");    
    int a = printf("real printf |%-010.d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width_Precision_Number(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");    
    int a = printf("real printf |%-010.5d| for decimal\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.5d| for decimal\n", x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width_Precision_Star(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH + PRECISION + STAR---\n");    
    int a = printf("real printf |%-010.*d| for decimal\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*d| for decimal\n", 8, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width_Star_Precision(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.d| for decimal\n", 5, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.d| for decimal\n", 5, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width_Star_Precision_Number(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5d| for decimal\n", 20, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5d| for decimal\n", 20, x);
    printf("return ft %d\n", a);
}

void printDecimalMinus_Zero_Width_Star_Precision_Star(int x)
{
    printf("\n---DECIMAL + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*d| for decimal\n", 8, 15,x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*d| for decimal\n", 8, 15, x);
    printf("return ft %d\n", a);
}


void runDecimalTest (void)
{
    int x;
    x = -2147483648;
    
    printDecimalNoFlag(x); //ok
    printDecimalMinus(x); //ok
    printDecimalZero(x);//ok
    printDecimalWidth(x); //ok
    printDecimalWidth_Star(x);
    printDecimalPrecision(x);//ok
    printDecimalPrecision_Number(x);
    printDecimalPrecision_Star(x);
    printDecimalMinus_Zero(x);//ok
    printDecimalMinus_Width(x); //ok
    printDecimalMinus_Width_Star(x);
    printDecimalMinus_Precision(x); //ok
    printDecimalMinus_Precision_Number(x);
    printDecimalMinus_Precision_Star(x);
    printDecimalZero_Width(x);//ok
    printDecimalZero_Width_Star(x);
    printDecimalZero_Precision(x);//ok
    printDecimalZero_Precision_Number(x);
    printDecimalZero_Precision_Star(x);
    printDecimalWidth_Precision(x);//ok
    printDecimalWidth_Precision_Number(x);
    printDecimalWidth_Precision_Star(x);
    printDecimalWidth_Star_Precision(x);
    printDecimalWidth_Star_Precision_Number(x);
    printDecimalWidth_Star_Precision_Star(x);
    printDecimalMinus_Zero_Width(x);
    printDecimalMinus_Zero_Width_Star(x);
    printDecimalMinus_Zero_Precision(x);//ok
    printDecimalMinus_Zero_Precision_Number(x);
    printDecimalMinus_Zero_Precision_Star(x);
    printDecimalMinus_Width_Precision(x);//ok
    printDecimalMinus_Width_Precision_Number(x);
    printDecimalMinus_Width_Precision_Star(x);
    printDecimalMinus_Width_Star_Precision(x);
    printDecimalMinus_Width_Star_Precision_Number(x);
    printDecimalMinus_Width_Star_Precision_Star(x);
    printDecimalZero_Width_Precision(x); // YA SALIO
    printDecimalZero_Width_Precision_Number(x); // YA SALIO
    printDecimalZero_Width_Precision_Star(x);
    printDecimalZero_Width_Star_Precision(x);
    printDecimalZero_Width_Star_Precision_Number(x); 
    printDecimalZero_Width_Star_Precision_Star(x);
    printDecimalMinus_Zero_Width_Precision(x);
    printDecimalMinus_Zero_Width_Precision_Number(x);
    printDecimalMinus_Zero_Width_Precision_Star(x);
    printDecimalMinus_Zero_Width_Star_Precision(x);
    printDecimalMinus_Zero_Width_Star_Precision_Number(x);
    printDecimalMinus_Zero_Width_Star_Precision_Star(x);
}

int main(void)
{
    runDecimalTest();
	// printf("numero es %.2d\n", 1098);
    return (0);
}
