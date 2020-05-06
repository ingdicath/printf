/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_tests.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/03 09:09:52 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/03 09:09:53 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "../printf.h"

void printStringNoFlag(char *str)
{
    printf("---STRING NO FLAG---\n");
    int a = printf("real printf |%s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus(char *str)
{
    printf("\n---STRING + MINUS---\n");
    int a = printf("real printf |%-s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Zero(char *str)
{
    printf("\n---STRING + ZERO---\n");
    int a = printf("real printf |%0s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Width(char *str)
{
    printf("\n---STRING + WIDTH---\n");
    int a = printf("real printf |%30s| for string\n", str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%30s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Width_Star(char *str)
{
    printf("\n---STRING + WIDTH + STAR---\n");
    int a = printf("real printf |%25*s| for string\n", 30, str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%25*s| for string\n", 30, str);
    printf("return ft %d\n", a);
}

void printString_Precision(char *str)
{
    printf("\n---STRING + PRECISION---\n");
    int a = printf("real printf |%.s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.s| for string\n", str);
    printf("return ft %d\n", a);
}


void printString_Precision_Number(char *str)
{
    printf("\n---STRING + PRECISION + NUMBER---\n");
    int a = printf("real printf |%.5s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Precision_Star(char *str)
{
    printf("\n---STRING + PRECISION + STAR---\n");
    int a = printf("real printf |%.*s| for string\n", 10, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*s| for string\n", 10, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero(char *str)
{
    printf("\n---STRING + MINUS + ZERO---\n");
    int a = printf("real printf |%-0s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width(char *str)
{
    printf("\n---STRING + MINUS + WIDTH---\n");
    int a = printf("real printf |%-30s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width_Star(char *str)
{
    printf("\n---STRING + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*s| for string\n", 10, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*s| for string\n", 10, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Precision(char *str)
{
    printf("\n---STRING + MINUS + PRECISION---\n");
    int a = printf("real printf |%-.s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Precision_Number(char *str)
{
    printf("\n---STRING + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Precision_Star(char *str)
{
    printf("\n---STRING + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*s| for string\n", 35, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*s| for string\n", 35, str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH---\n");
    int a = printf("real printf |%030s| for string\n", str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width_Star(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*s| for string\n", 35, str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*s| for string\n", 35, str);
    printf("return ft %d\n", a);
}

void printString_Zero_Precision(char *str)
{
    printf("\n---STRING + ZERO +  PRECISION---\n");
    int a = printf("real printf |%0.s| for string\n", str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Zero_Precision_Number(char *str)
{
    printf("\n---STRING + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5s| for string\n", str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Zero_Precision_Star(char *str)
{
    printf("\n---STRING + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*s| for string\n", 8, str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*s| for string\n", 8, str);
    printf("return ft %d\n", a);
}

void printString_Width_Precision(char *str)
{
    printf("\n---STRING + WIDTH + PRECISION---\n");
    int a = printf("real printf |%10.s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Width_Precision_Number(char *str)
{
    printf("\n---STRING + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Width_Precision_Star(char *str)
{
    printf("\n---STRING + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*s| for string\n", 8, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*s| for string\n", 8, str);
    printf("return ft %d\n", a);
}

void printString_Width_Star_Precision(char *str)
{
    printf("\n---STRING + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.s| for string\n", 8, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.s| for string\n", 8, str);
    printf("return ft %d\n", a);
}

void printString_Width_Star_Precision_Number(char *str)
{
    printf("\n---STRING + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5s| for string\n", 8, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5s| for string\n", 8, str);
    printf("return ft %d\n", a);
}

void printString_Width_Star_Precision_Star(char *str)
{
    printf("\n---STRING + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*s| for string\n", 8, 5, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*s| for string\n", 8, 5, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH---\n");
    int a = printf("real printf |%-025s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width_Number(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*s| for string\n", 30, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*s| for string\n", 30, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Precision(char *str)
{
    printf("\n---STRING + MINUS + ZERO + PRECISION---\n");
    int a = printf("real printf |%-0.s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Precision_Number(char *str)
{
    printf("\n---STRING + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Precision_Star(char *str)
{
    printf("\n---STRING + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*s| for string\n", 10, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*s| for string\n", 10, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width_Precision(char *str)
{
    printf("\n---STRING + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-10.s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width_Precision_Number(char *str)
{
    printf("\n---STRING + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5s| for string\n", str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width_Precision_Star(char *str)
{
    printf("\n---STRING + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*s| for string\n", 10, str); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*s| for string\n", 10, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width_Star_Precision(char *str)
{
    printf("\n---STRING + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.s| for string\n", 8, str); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.s| for string\n", 8, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width_Star_Precision_Number(char *str)
{
    printf("\n---STRING + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5s| for string\n", 8, str);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5s| for string\n", 8, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Width_Star_Precision_Star(char *str)
{
    printf("\n---STRING + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*s| for string\n", 8, 5, str);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*s| for string\n", 8, 5, str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width_Precision(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH + PRECISION---\n");
    int a = printf("real printf |%020.s| for string\n", str);//Does not print the string
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%020.s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width_Precision_Number(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5s| for string\n", str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width_Precision_Star(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*s| for string\n", 10, str);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*s| for string\n", 10, str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width_Star_Precision(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.s| for string\n", 30, str);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.s| for string\n", 30, str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width_Star_Precision_Number(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5s| for string\n", 30, str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5s| for string\n", 30, str);
    printf("return ft %d\n", a);
}

void printString_Zero_Width_Star_Precision_Star(char *str)
{
    printf("\n---STRING + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*s| for string\n", 30, 5, str);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*s| for string\n", 30, 5, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width_Precision(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-025.s| for string\n", str);//Does not print the string
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width_Precision_Number(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-025.5s| for string\n", str);//Does not take in count the zero
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025.5s| for string\n", str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width_Precision_Star(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*s| for string\n", 8, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*s| for string\n", 8, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width_Star_Precision(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.s| for string\n", 5, str); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.s| for string\n", 5, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width_Star_Precision_Number(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5s| for string\n", 20, str); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5s| for string\n", 20, str);
    printf("return ft %d\n", a);
}

void printString_Minus_Zero_Width_Star_Precision_Star(char *str)
{
    printf("\n---STRING + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*s| for string\n", 8, 15, str);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*s| for string\n", 8, 15, str);
    printf("return ft %d\n", a);
}
void runStringTest(void)
{
    char *str;
    str = "I don't like Bad Bunny";

    printStringNoFlag(str);//ok
    printString_Minus(str);//ok
    printString_Zero(str);//ok
    printString_Width(str);//ok
    printString_Width_Star(str);//ok
    printString_Precision(str); // MURIOP
    printString_Precision_Number(str);
    printString_Precision_Star(str);
    printString_Minus_Zero(str); //ok
    printString_Minus_Width(str);//ok
    printString_Minus_Width_Star(str);//ok
    printString_Minus_Precision(str);   
    printString_Minus_Precision_Number(str);
    printString_Minus_Precision_Star(str);
    printString_Zero_Width(str); //ok
    printString_Zero_Width_Star(str); //ok
    printString_Zero_Precision(str);
    printString_Zero_Precision_Number(str);
    printString_Zero_Precision_Star(str);
    printString_Width_Precision(str);
    printString_Width_Precision_Number(str);
    printString_Width_Precision_Star(str);
    printString_Width_Star_Precision(str);
    printString_Width_Star_Precision_Number(str);
    printString_Width_Star_Precision_Star(str);
    printString_Minus_Zero_Width(str); // ok
    printString_Minus_Zero_Width_Number(str); // ok
    printString_Minus_Zero_Precision(str);
    printString_Minus_Zero_Precision_Number(str);
    printString_Minus_Zero_Precision_Star(str);
    printString_Minus_Width_Precision(str);
    printString_Minus_Width_Precision_Number(str);
    printString_Minus_Width_Precision_Star(str);
    printString_Minus_Width_Star_Precision(str);
    printString_Minus_Width_Star_Precision_Number(str);
    printString_Minus_Width_Star_Precision_Star(str);
    printString_Zero_Width_Precision(str);
    printString_Zero_Width_Precision_Number(str);
    printString_Zero_Width_Precision_Star(str);
    printString_Zero_Width_Star_Precision(str);
    printString_Zero_Width_Star_Precision_Number(str);
    printString_Zero_Width_Star_Precision_Star(str);
    printString_Minus_Zero_Width_Precision(str);
    printString_Minus_Zero_Width_Precision_Number(str);
    printString_Minus_Zero_Width_Precision_Star(str);
    printString_Minus_Zero_Width_Star_Precision(str);
    printString_Minus_Zero_Width_Star_Precision_Number(str);
    printString_Minus_Zero_Width_Star_Precision_Star(str);
}

int main(void)
{
    runStringTest();
	return (0);
}
