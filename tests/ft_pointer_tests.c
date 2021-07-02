/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer_tests.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/06 09:54:52 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/06 09:54:54 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "../printf.h"

int             ft_printf(const char *str, ...);

void printPointerNoFlag(int *x)
{
    printf("---POINTER NO FLAG---\n");
    int a = printf("real printf |%p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus(int *x)
{
    printf("\n---POINTER + MINUS---\n");
    int a = printf("real printf |%-p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Zero(int *x)
{
    printf("\n---POINTER + ZERO---\n");
    int a = printf("real printf |%0p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Width(int *x)
{
    printf("\n---POINTER + WIDTH---\n");
    int a = printf("real printf |%30p| for pointer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%30p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Width_Star(int *x)
{
    printf("\n---POINTER + WIDTH + STAR---\n");
    int a = printf("real printf |%25*p| for pointer\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%25*p| for pointer\n", 30, x);
    printf("return ft %d\n", a);
}

void printPointer_Precision(int *x)
{
    printf("\n---POINTER + PRECISION---\n");
    int a = printf("real printf |%.p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Precision_Number(int *x)
{
    printf("\n---POINTER + PRECISION + NUMBER---\n");
    int a = printf("real printf |%.5p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Precision_Star(int *x)
{
    printf("\n---POINTER + PRECISION + STAR---\n");
    int a = printf("real printf |%.*p| for pointer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*p| for pointer\n", 10, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero(int *x)
{
    printf("\n---POINTER + MINUS + ZERO---\n");
    int a = printf("real printf |%-0p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH---\n");
    int a = printf("real printf |%-30p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width_Star(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*p| for pointer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*p| for pointer\n", 10, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Precision(int *x)
{
    printf("\n---POINTER + MINUS + PRECISION---\n");
    int a = printf("real printf |%-.p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Precision_Number(int *x)
{
    printf("\n---POINTER + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Precision_Star(int *x)
{
    printf("\n---POINTER + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*p| for pointer\n", 35, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*p| for pointer\n", 35, x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH---\n");
    int a = printf("real printf |%030p| for pointer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width_Star(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*p| for pointer\n", 35, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*p| for pointer\n", 35, x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Precision(int *x)
{
    printf("\n---POINTER + ZERO +  PRECISION---\n");
    int a = printf("real printf |%0.p| for pointer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Precision_Number(int *x)
{
    printf("\n---POINTER + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5p| for pointer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Precision_Star(int *x)
{
    printf("\n---POINTER + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*p| for pointer\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*p| for pointer\n", 8, x);
    printf("return ft %d\n", a);
}

void printPointer_Width_Precision(int *x)
{
    printf("\n---POINTER + WIDTH + PRECISION---\n");
    int a = printf("real printf |%10.p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Width_Precision_Number(int *x)
{
    printf("\n---POINTER + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Width_Precision_Star(int *x)
{
    printf("\n---POINTER + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*p| for pointer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*p| for pointer\n", 8, x);
    printf("return ft %d\n", a);
}

void printPointer_Width_Star_Precision(int *x)
{
    printf("\n---POINTER + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.p| for pointer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.p| for pointer\n", 8, x);
    printf("return ft %d\n", a);
}

void printPointer_Width_Star_Precision_Number(int *x)
{
    printf("\n---POINTER + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5p| for pointer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5p| for pointer\n", 8, x);
    printf("return ft %d\n", a);
}

void printPointer_Width_Star_Precision_Star(int *x)
{
    printf("\n---POINTER + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*p| for pointer\n", 8, 5, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*p| for pointer\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH---\n");
    int a = printf("real printf |%-025p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width_Number(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*p| for pointer\n", 30, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*p| for pointer\n", 30, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Precision(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + PRECISION---\n");
    int a = printf("real printf |%-0.p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Precision_Number(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Precision_Star(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*p| for pointer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*p| for pointer\n", 10, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width_Precision(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-10.p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width_Precision_Number(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5p| for pointer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width_Precision_Star(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*p| for pointer\n", 10, x); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*p| for pointer\n", 10, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width_Star_Precision(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.p| for pointer\n", 8, x); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.p| for pointer\n", 8, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width_Star_Precision_Number(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5p| for pointer\n", 8, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5p| for pointer\n", 8, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Width_Star_Precision_Star(int *x)
{
    printf("\n---POINTER + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*p| for pointer\n", 8, 5, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*p| for pointer\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width_Precision(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH + PRECISION---\n");
    int a = printf("real printf |%020.p| for pointer\n", x);//Does not print the string
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%020.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width_Precision_Number(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5p| for pointer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width_Precision_Star(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*p| for pointer\n", 10, x);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*p| for pointer\n", 10, x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width_Star_Precision(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.p| for pointer\n", 30, x);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.p| for pointer\n", 30, x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width_Star_Precision_Number(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5p| for pointer\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5p| for pointer\n", 30, x);
    printf("return ft %d\n", a);
}

void printPointer_Zero_Width_Star_Precision_Star(int *x)
{
    printf("\n---POINTER + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*p| for pointer\n", 30, 5, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*p| for pointer\n", 30, 5, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width_Precision(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-025.p| for pointer\n", x);//Does not print the string
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width_Precision_Number(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-025.5p| for pointer\n", x);//Does not take in count the zero
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.5p| for pointer\n", x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width_Precision_Star(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*p| for pointer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*p| for pointer\n", 8, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width_Star_Precision(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.p| for pointer\n", 5, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.p| for pointer\n", 5, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width_Star_Precision_Number(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5p| for pointer\n", 20, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5p| for pointer\n", 20, x);
    printf("return ft %d\n", a);
}

void printPointer_Minus_Zero_Width_Star_Precision_Star(int *x)
{
    printf("\n---POINTER + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*p| for pointer\n", 8, 15, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*p| for pointer\n", 8, 15, x);
    printf("return ft %d\n", a);
}

void runPointerTest(void)
{
    int x;
    int *p;
    
    x = 10;
    p = &x; 

    printPointerNoFlag(p);
    printPointer_Minus(p);
    printPointer_Zero(p);
    printPointer_Width(p);
    printPointer_Width_Star(p);
    printPointer_Precision(p);
    printPointer_Precision_Number(p);
    printPointer_Precision_Star(p);
    printPointer_Minus_Zero(p);
    printPointer_Minus_Width(p);
    printPointer_Minus_Width_Star(p);
    printPointer_Minus_Precision(p);
    printPointer_Minus_Precision_Number(p);
    printPointer_Minus_Precision_Star(p);
    printPointer_Zero_Width(p);
    printPointer_Zero_Width_Star(p);
    printPointer_Zero_Precision(p);
    printPointer_Zero_Precision_Number(p);
    printPointer_Zero_Precision_Star(p);
    printPointer_Width_Precision(p);
    printPointer_Width_Precision_Number(p);
    printPointer_Width_Precision_Star(p);
    printPointer_Width_Star_Precision(p);
    printPointer_Width_Star_Precision_Number(p);
    printPointer_Width_Star_Precision_Star(p);
    printPointer_Minus_Zero_Width(p);
    printPointer_Minus_Zero_Width_Number(p);
    printPointer_Minus_Zero_Precision(p);
    printPointer_Minus_Zero_Precision_Number(p);
    printPointer_Minus_Zero_Precision_Star(p);
    printPointer_Minus_Width_Precision(p);
    printPointer_Minus_Width_Precision_Number(p);
    printPointer_Minus_Width_Precision_Star(p);
    printPointer_Minus_Width_Star_Precision(p);
    printPointer_Minus_Width_Star_Precision_Number(p);
    printPointer_Minus_Width_Star_Precision_Star(p);
    printPointer_Zero_Width_Precision(p);
    printPointer_Zero_Width_Precision_Number(p);
    printPointer_Zero_Width_Precision_Star(p);
    printPointer_Zero_Width_Star_Precision(p);
    printPointer_Zero_Width_Star_Precision_Number(p);
    printPointer_Zero_Width_Star_Precision_Star(p);
    printPointer_Minus_Zero_Width_Precision(p);
    printPointer_Minus_Zero_Width_Precision_Number(p);
    printPointer_Minus_Zero_Width_Precision_Star(p);
    printPointer_Minus_Zero_Width_Star_Precision(p);
    printPointer_Minus_Zero_Width_Star_Precision_Number(p);
    printPointer_Minus_Zero_Width_Star_Precision_Star(p);
}

int main(void)
{

    runPointerTest();
	return (0);
}

