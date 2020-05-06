/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char_tests_.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/05 14:39:06 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/05 14:39:08 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "../printf.h"

void printCharNoFlag(char c)
{
    printf("---CHAR NO FLAG---\n");
    int a = printf("real printf |%c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus(char c)
{
    printf("\n---CHAR + MINUS---\n" );
    int a = printf("real printf |%-c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharZero(char c)
{
    printf("\n---CHAR + ZERO---\n" );    
    int a = printf("real printf |%0c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0c| for char\n", c );
    printf("return ft %d\n", a);
}

void printCharWidth(char c)
{
    printf("\n---CHAR + WIDTH---\n");
    int a = printf("real printf |%5c| for char\n", c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharWidth_Star(char c)
{
    printf("\n---CHAR + WIDTH + STAR---\n");
    int a = printf("real printf |%5*c| for char\n", 3, c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5*c| for char\n", 3, c);
    printf("return ft %d\n", a);
}

void printCharPrecision(char c)
{
    printf("\n---CHAR + PRECISION---\n" );
    int a = printf("real printf |%.c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharPrecision_Number(char c)
{
    printf("\n---CHAR + PRECISION + NUMBER---\n" );
    int a = printf("real printf |%.5c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharPrecision_Star(char c)
{
    printf("\n---CHAR + PRECISION + STAR---\n");
    int a = printf("real printf |%.*c| for char\n", 10, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*c| for char\n", 10, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero(char c)
{
    printf("\n---CHAR + MINUS + ZERO---\n" );
    int a = printf("real printf |%-0c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width(char c)
{
    printf("\n---CHAR + MINUS + WIDTH---\n" );
    int a = printf("real printf |%-5c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-5c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width_Star(char c)
{
    printf("\n---CHAR + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*c| for char\n", 10, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*c| for char\n", 10, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Precision(char c)
{
    printf("\n---CHAR + MINUS + PRECISION---\n" );
    int a = printf("real printf |%-.c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Precision_Number(char c)
{
    printf("\n---CHAR + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Precision_Star(char c)
{
    printf("\n---CHAR + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*c| for char\n", 35, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*c| for char\n", 35, c);
    printf("return ft %d\n", a);
}

void printCharZero_Width(char c)
{
    printf("\n---CHAR + ZERO + WIDTH---\n" );    
    int a = printf("real printf |%010c| for char\n", c );
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%010c| for char\n", c );
    printf("return ft %d\n", a);
}

void printCharZero_Width_Star(char c)
{
    printf("\n---CHAR + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*c| for char\n", 35, c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*c| for char\n", 35, c);
    printf("return ft %d\n", a);
}

void printCharZero_Precision(char c)
{
    printf("\n---CHAR + ZERO + PRECISION---\n" );
    int a = printf("real printf |%0.c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0.c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharZero_Precision_Number(char c)
{
    printf("\n---CHAR + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5c| for char\n", c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharZero_Precision_Star(char c)
{
    printf("\n---CHAR + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*c| for char\n", 8, c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*c| for char\n", 8, c);
    printf("return ft %d\n", a);
}

void printCharWidth_Precision(char c)
{
    printf("\n---CHAR + WIDTH + PRECISION---\n");
    int a = printf("real printf |%5.c| for char\n", c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5.c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharWidth_Precision_Number(char c)
{
    printf("\n---CHAR + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharWidth_Precision_Star(char c)
{
    printf("\n---CHAR + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*c| for char\n", 8, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*c| for char\n", 8, c);
    printf("return ft %d\n", a);
}

void printCharWidth_Star_Precision(char c)
{
    printf("\n---CHAR + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.c| for char\n", 8, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.c| for char\n", 8, c);
    printf("return ft %d\n", a);
}

void printCharWidth_Star_Precision_Number(char c)
{
    printf("\n---CHAR + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5c| for char\n", 8, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5c| for char\n", 8, c);
    printf("return ft %d\n", a);
}

void printCharWidth_Star_Precision_Star(char c)
{
    printf("\n---CHAR + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*c| for char\n", 8, 5, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*c| for char\n", 8, 5, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH---\n" );    
    int a = printf("real printf |%-010c| for char\n", c );
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010c| for char\n", c );
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width_Star(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*c| for char\n", 30, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*c| for char\n", 30, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Precision(char c)
{
    printf("\n---CHAR + MINUS + ZERO + PRECISION---\n" );
    int a = printf("real printf |%-0.c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Precision_Number(char c)
{
    printf("\n---CHAR + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Precision_Star(char c)
{
    printf("\n---CHAR + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*c| for char\n", 10, c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*c| for char\n", 10, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width_Precision(char c)
{
    printf("\n---CHAR + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-5.c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-5.c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width_Precision_Number(char c)
{
    printf("\n---CHAR + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width_Precision_Star(char c)
{
    printf("\n---CHAR + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*c| for Char\n", 10, c); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*c| for Char\n", 10, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width_Star_Precision(char c)
{
    printf("\n---CHAR + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.c| for Char\n", 8, c); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.c| for Char\n", 8, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width_Star_Precision_Number(char c)
{
    printf("\n---CHAR + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5c| for Char\n", 8, c);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5c| for Char\n", 8, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Width_Star_Precision_Star(char c)
{
    printf("\n---CHAR + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*c| for Char\n", 8, 5, c);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*c| for Char\n", 8, 5, c);
    printf("return ft %d\n", a);
}

void printCharZero_Width_Precision(char c)
{
    printf("\n---CHAR + ZERO + WIDTH + PRECISION---\n" );    
    int a = printf("real printf |%010.c| for char\n", c);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%010.c| for char\n", c);
    printf("return ft %d\n", a);
}

void printCharZero_Width_Precision_Number(char c)
{
    printf("\n---CHAR + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5c| for Char\n", c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5c| for Char\n", c);
    printf("return ft %d\n", a);
}

void printCharZero_Width_Precision_Star(char c)
{
    printf("\n---CHAR + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*c| for Char\n", 10, c);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*c| for Char\n", 10, c);
    printf("return ft %d\n", a);
}

void printCharZero_Width_Star_Precision(char c)
{
    printf("\n---CHAR + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.c| for Char\n", 30, c);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.c| for Char\n", 30, c);
    printf("return ft %d\n", a);
}

void printCharZero_Width_Star_Precision_Number(char c)
{
    printf("\n---CHAR + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5c| for Char\n", 30, c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5c| for Char\n", 30, c);
    printf("return ft %d\n", a);
}

void printCharZero_Width_Star_Precision_Star(char c)
{
    printf("\n---CHAR + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*c| for Char\n", 30, 5, c);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*c| for Char\n", 30, 5, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width_Precision(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH + PRECISION---\n" );    
    int a = printf("real printf |%-010.c| for char\n", c );
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.c| for char\n", c );
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width_Precision_Number(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010.5c| for char\n", c );
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.5c| for char\n", c );
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width_Precision_Star(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*c| for char\n", 8, c );
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*c| for char\n", 8, c );
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width_Star_Precision(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.c| for char\n", 5, c); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.c| for char\n", 5, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width_Star_Precision_Number(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5c| for char\n", 20, c); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5c| for char\n", 20, c);
    printf("return ft %d\n", a);
}

void printCharMinus_Zero_Width_Star_Precision_Star(char c)
{
    printf("\n---CHAR + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*c| for char\n", 8, 15,c );
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*c| for char\n", 8, 15, c );
    printf("return ft %d\n", a);
}


void runCharTest (void)
{
    char c;
    c = 'g';
    
    printCharNoFlag(c); //ok
    printCharMinus(c); //ok
    printCharZero(c);//ok
    printCharWidth(c); //ok
    printCharWidth_Star(c);
    printCharPrecision(c);//ok
    printCharPrecision_Number(c);//ok
    printCharPrecision_Star(c);
    printCharMinus_Zero(c);//ok
    printCharMinus_Width(c); //ok
    printCharMinus_Width_Star(c);
    printCharMinus_Precision(c); //ok
    printCharMinus_Precision_Number(c);//ok
    printCharMinus_Precision_Star(c);//ok
    printCharZero_Width(c);//ok
    printCharZero_Width_Star(c);
    printCharZero_Precision(c);//ok
    printCharZero_Precision_Number(c);//ok
    printCharZero_Precision_Star(c);//ok
    printCharWidth_Precision(c);//ok
    printCharWidth_Precision_Number(c);//ok
    printCharWidth_Precision_Star(c);//ok
    printCharWidth_Star_Precision(c);
    printCharWidth_Star_Precision_Number(c);
    printCharWidth_Star_Precision_Star(c);
    printCharMinus_Zero_Width(c);//ok
    printCharMinus_Zero_Width_Star(c);
    printCharMinus_Zero_Precision(c);//ok
    printCharMinus_Zero_Precision_Number(c);//ok
    printCharMinus_Zero_Precision_Star(c);//ok
    printCharMinus_Width_Precision(c);//ok
    printCharMinus_Width_Precision_Number(c);//ok
    printCharMinus_Width_Precision_Star(c);//ok
    printCharMinus_Width_Star_Precision(c);
    printCharMinus_Width_Star_Precision_Number(c);
    printCharMinus_Width_Star_Precision_Star(c);
    printCharZero_Width_Precision(c);//ok
    printCharZero_Width_Precision_Number(c); //ok
    printCharZero_Width_Precision_Star(c); // ok
    printCharZero_Width_Star_Precision(c);
    printCharZero_Width_Star_Precision_Number(c); 
    printCharZero_Width_Star_Precision_Star(c);
    printCharMinus_Zero_Width_Precision(c); //ok
    printCharMinus_Zero_Width_Precision_Number(c);//ok
    printCharMinus_Zero_Width_Precision_Star(c);//ok
    printCharMinus_Zero_Width_Star_Precision(c);
    printCharMinus_Zero_Width_Star_Precision_Number(c);
    printCharMinus_Zero_Width_Star_Precision_Star(c);
}

int main(void)
{
    runCharTest();
	return (0);
}
