/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_percentage_tests.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 07:49:24 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/11 07:49:25 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int     ft_printf(const char *str, ...);

void printPercentageNoFlag(void)
{
    printf("---PERCENTAGE NO FLAG---\n");
    int a = printf("real printf |%%| for percentage\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%%| for percentage\n");
    printf("return ft %d\n", a);
}

void printPercentage_Minus(void)
{
    printf("\n---PERCENTAGE + MINUS---\n");
    int a = printf("real printf |%-%| for percentage\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-%| for percentage\n");
    printf("return ft %d\n", a);
}

void printPercentage_Zero(void)
{
    printf("\n---PERCENTAGE + ZERO---\n");
    int a = printf("real printf |%0%| for percentage\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0%| for percentage\n");
    printf("return ft %d\n", a);
}

void printPercentage_Width(void)
{
    printf("\n---PERCENTAGE + WIDTH---\n");
    int a = printf("real printf |%5%| for percentage\n");
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5%| for percentage\n");
    printf("return ft %d\n", a);
}

void printPercentage_Width_Star(void)
{
    printf("\n---PERCENTAGE + WIDTH + STAR---\n");
    int a = printf("real printf |%25*%| for percentage\n", 8);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%25*%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Precision(void)
{
    printf("\n---PERCENTAGE + PRECISION---\n");
    int a = printf("real printf |%.%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Precision_Number(void)
{
    printf("\n---PERCENTAGE + PRECISION + NUMBER---\n");
    int a = printf("real printf |%.5%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%.5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Precision_Star(void)
{
    printf("\n---PERCENTAGE + PRECISION + STAR---\n");
    int a = printf("real printf |%.*%| for percentage\n", 10);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%.*%| for percentage\n", 10);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO---\n");
    int a = printf("real printf |%-0%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-0%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH---\n");
    int a = printf("real printf |%-5%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width_Star(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*%| for percentage\n", 10);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-30*%| for percentage\n", 10);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Precision(void)
{
    printf("\n---PERCENTAGE + MINUS + PRECISION---\n");
    int a = printf("real printf |%-.%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Precision_Number(void)
{
    printf("\n---PERCENTAGE + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-.5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Precision_Star(void)
{
    printf("\n---PERCENTAGE + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*%| for percentage\n", 35);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-.*%| for percentage\n", 35);
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width(void)
{
    printf("\n---PERCENTAGE + ZERO + WIDTH---\n");
    int a = printf("real printf |%030%| for percentage\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%030%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width_Star(void)
{
    printf("\n---PERCENTAGE + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*%| for percentage\n", 35);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%030*%| for percentage\n", 35);
printf("return ft %d\n", a);
}

void printPercentage_Zero_Precision(void)
{
    printf("\n---PERCENTAGE + ZERO +  PRECISION---\n");
    int a = printf("real printf |%0.%| for percentage\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%0.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Zero_Precision_Number(void)
{
    printf("\n---PERCENTAGE + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5%| for percentage\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%0.5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Zero_Precision_Star(void)
{
    printf("\n---PERCENTAGE + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*%| for percentage\n", 8);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%0.*%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Width_Precision(void)
{
    printf("\n---PERCENTAGE + WIDTH + PRECISION---\n");
    int a = printf("real printf |%10.%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Width_Precision_Number(void)
{
    printf("\n---PERCENTAGE + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10.5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Width_Precision_Star(void)
{
    printf("\n---PERCENTAGE + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*%| for percentage\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10.*%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Width_Star_Precision(void)
{
    printf("\n---PERCENTAGE + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.%| for percentage\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10*.%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Width_Star_Precision_Number(void)
{
    printf("\n---PERCENTAGE + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5%| for percentage\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10*.5%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Width_Star_Precision_Star(void)
{
    printf("\n---PERCENTAGE + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*%| for percentage\n", 8, 5);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10*.*%| for percentage\n", 8, 5);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH---\n");
    int a = printf("real printf |%-025%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width_Number(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*%| for percentage\n", 30);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025*%| for percentage\n", 30);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Precision(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + PRECISION---\n");
    int a = printf("real printf |%-0.%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-0.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Precision_Number(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-0.10%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Precision_Star(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*%| for percentage\n", 10);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-0.*%| for percentage\n", 10);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width_Precision(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-10.%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width_Precision_Number(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5%| for percentage\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10.5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width_Precision_Star(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*%| for percentage\n", 10); //si no se coloca argumento genera null
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10.*%| for percentage\n", 10);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width_Star_Precision(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.%| for percentage\n", 8); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10*.%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width_Star_Precision_Number(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5%| for percentage\n", 8);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10*.5%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Width_Star_Precision_Star(void)
{
    printf("\n---PERCENTAGE + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*%| for percentage\n", 8, 5);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10*.*%| for percentage\n", 8, 5);
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width_Precision(void)
{
    printf("\n---PERCENTAGE + ZERO +  WIDTH + PRECISION---\n");
    int a = printf("real printf |%020.%| for percentage\n");//Does not print the string
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%020.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width_Precision_Number(void)
{
    printf("\n---PERCENTAGE + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5%| for percentage\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015.5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width_Precision_Star(void)
{
    printf("\n---PERCENTAGE + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*%| for percentage\n", 10);//si no se coloca argumento genera null
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015.5%| for percentage\n", 10);
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width_Star_Precision(void)
{
    printf("\n---PERCENTAGE + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.%| for percentage\n", 30);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015*.%| for percentage\n", 30);
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width_Star_Precision_Number(void)
{
    printf("\n---PERCENTAGE + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5%| for percentage\n", 30);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015*.5%| for percentage\n", 30);
printf("return ft %d\n", a);
}

void printPercentage_Zero_Width_Star_Precision_Star(void)
{
    printf("\n---PERCENTAGE + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*%| for percentage\n", 30, 5);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015*.*%| for percentage\n", 30, 5);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width_Precision(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-025.%| for percentage\n");//Does not print the string
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025.%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width_Precision_Number(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-025.5%| for percentage\n");//Does not take in count the zero
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025.5%| for percentage\n");
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width_Precision_Star(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*%| for percentage\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-010.*%| for percentage\n", 8);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width_Star_Precision(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.%| for percentage\n", 5); //it give prevalence to width given by *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-010*.%| for percentage\n", 5);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width_Star_Precision_Number(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5%| for percentage\n", 20); //it give prevalence to width given by *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-010*.5%| for percentage\n", 20);
printf("return ft %d\n", a);
}

void printPercentage_Minus_Zero_Width_Star_Precision_Star(void)
{
    printf("\n---PERCENTAGE + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*%| for percentage\n", 8, 15);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-010*.*%| for percentage\n", 8, 15);
printf("return ft %d\n", a);
}

void runPercentageTest(void)
{
    printPercentageNoFlag();
    printPercentage_Minus();
    printPercentage_Zero();
    printPercentage_Width();
    printPercentage_Width_Star();
    printPercentage_Precision();
    printPercentage_Precision_Number();
    printPercentage_Precision_Star();
    printPercentage_Minus_Zero();
    printPercentage_Minus_Width();
    printPercentage_Minus_Width_Star();
    printPercentage_Minus_Precision();
    printPercentage_Minus_Precision_Number();
    printPercentage_Minus_Precision_Star();
    printPercentage_Zero_Width();
    printPercentage_Zero_Width_Star();
    printPercentage_Zero_Precision();
    printPercentage_Zero_Precision_Number();
    printPercentage_Zero_Precision_Star();
    printPercentage_Width_Precision();
    printPercentage_Width_Precision_Number();
    printPercentage_Width_Precision_Star();
    printPercentage_Width_Star_Precision();
    printPercentage_Width_Star_Precision_Number();
    printPercentage_Width_Star_Precision_Star();
    printPercentage_Minus_Zero_Width();
    printPercentage_Minus_Zero_Width_Number();
    printPercentage_Minus_Zero_Precision();
    printPercentage_Minus_Zero_Precision_Number();
    printPercentage_Minus_Zero_Precision_Star();
    printPercentage_Minus_Width_Precision();
    printPercentage_Minus_Width_Precision_Number();
    printPercentage_Minus_Width_Precision_Star();
    printPercentage_Minus_Width_Star_Precision();
    printPercentage_Minus_Width_Star_Precision_Number();
    printPercentage_Minus_Width_Star_Precision_Star();
    printPercentage_Zero_Width_Precision();
    printPercentage_Zero_Width_Precision_Number();
    printPercentage_Zero_Width_Precision_Star();
    printPercentage_Zero_Width_Star_Precision();
    printPercentage_Zero_Width_Star_Precision_Number();
    printPercentage_Zero_Width_Star_Precision_Star();
    printPercentage_Minus_Zero_Width_Precision();
    printPercentage_Minus_Zero_Width_Precision_Number();
    printPercentage_Minus_Zero_Width_Precision_Star();
    printPercentage_Minus_Zero_Width_Star_Precision();
    printPercentage_Minus_Zero_Width_Star_Precision_Number();
    printPercentage_Minus_Zero_Width_Star_Precision_Star();
}

int main(void)
{
    runPercentageTest();
	return (0);
}


// //%% Tests
// int		pct_basic(void){return test("%%");}ok
//  int		pct_5w(void){return test("%5%");}ok
//  int		pct_5wlj(void){return test("%-5%");}ok
//  int		pct_5wzp(void){return test("%05%");}OK
//  int		pct_5wljzp(void){return test("%-05%");} OK

// //Null specifier tests
// int		nocrash_nullspec_basic(void){return test("%");}
// int		nocrash_nullspec_5w(void){return test("%5");}
// int		nocrash_nullspec_5wzp(void){return test("%05");}
// int		nocrash_nullspec_5wzplj(void){return test("%-05");}
// int		nocrash_nullspec_5wlj(void){return test("%-5");}