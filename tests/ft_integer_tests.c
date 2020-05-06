/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_integer_tests.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/05 15:21:06 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/05 15:21:09 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...);


void printIntegerNoFlag(int x)
{
    printf("---INTEGER NO FLAG---\n");
    int a = printf("real printf |%i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus(int x)
{
    printf("\n---INTEGER + MINUS---\n" );
    int a = printf("real printf |%-i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerZero(int x)
{
    printf("\n---INTEGER + ZERO---\n" );    
    int a = printf("real printf |%0i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerWidth(int x)
{
    printf("\n---INTEGER + WIDTH---\n");
    int a = printf("real printf |%5i| for integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerWidth_Star(int x)
{
    printf("\n---INTEGER + WIDTH + STAR---\n");
    int a = printf("real printf |%5*i| for integer\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5*i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerPrecision(int x)
{
    printf("\n---INTEGER + PRECISION---\n" );
    int a = printf("real printf |%.i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerPrecision_Number(int x)
{
    printf("\n---INTEGER + PRECISION + NUMBER---\n" );
    int a = printf("real printf |%.5i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerPrecision_Star(int x)
{
    printf("\n---INTEGER + PRECISION + STAR---\n");
    int a = printf("real printf |%.*i| for integer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*i| for integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero(int x)
{
    printf("\n---INTEGER + MINUS + ZERO---\n" );
    int a = printf("real printf |%-0i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH---\n" );
    int a = printf("real printf |%-5i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width_Star(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*i| for integer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*i| for integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Precision(int x)
{
    printf("\n---INTEGER + MINUS + PRECISION---\n" );
    int a = printf("real printf |%-.i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Precision_Number(int x)
{
    printf("\n---INTEGER + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Precision_Star(int x)
{
    printf("\n---INTEGER + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*i| for integer\n", 35, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-.*i| for integer\n", 35, x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width(int x)
{
    printf("\n---INTEGER + ZERO + WIDTH---\n" );    
    int a = printf("real printf |%010i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%010i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width_Star(int x)
{
    printf("\n---INTEGER + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*i| for integer\n", 35, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%030*i| for integer\n", 35, x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Precision(int x)
{
    printf("\n---INTEGER + ZERO + PRECISION---\n" );
    int a = printf("real printf |%0.i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Precision_Number(int x)
{
    printf("\n---INTEGER + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5i| for integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Precision_Star(int x)
{
    printf("\n---INTEGER + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*i| for integer\n", 8, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%0.*i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerWidth_Precision(int x)
{
    printf("\n---INTEGER + WIDTH + PRECISION---\n");
    int a = printf("real printf |%5.i| for integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerWidth_Precision_Number(int x)
{
    printf("\n---INTEGER + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerWidth_Precision_Star(int x)
{
    printf("\n---INTEGER + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*i| for integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10.*i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerWidth_Star_Precision(int x)
{
    printf("\n---INTEGER + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.i| for integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerWidth_Star_Precision_Number(int x)
{
    printf("\n---INTEGER + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5i| for integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.5i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerWidth_Star_Precision_Star(int x)
{
    printf("\n---INTEGER + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*i| for integer\n", 8, 5, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%10*.*i| for integer\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH---\n" );    
    int a = printf("real printf |%-010i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width_Star(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*i| for integer\n", 30, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-025*i| for integer\n", 30, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Precision(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + PRECISION---\n" );
    int a = printf("real printf |%-0.i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Precision_Number(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.10i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Precision_Star(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*i| for integer\n", 10, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0.*i| for integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width_Precision(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-5.i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-5.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width_Precision_Number(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width_Precision_Star(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*i| for integer\n", 10, x); //si no se coloca argumento genera null
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10.*i| for integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width_Star_Precision(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.i| for integer\n", 8, x); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width_Star_Precision_Number(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5i| for integer\n", 8, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.5i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Width_Star_Precision_Star(int x)
{
    printf("\n---INTEGER + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*i| for integer\n", 8, 5, x);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-10*.*i| for integer\n", 8, 5, x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width_Precision(int x)
{
    printf("\n---INTEGER + ZERO + WIDTH + PRECISION---\n");    
    int a = printf("real printf |%010.i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%010.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width_Precision_Number(int x)
{
    printf("\n---INTEGER + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5i| for integer\n", x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width_Precision_Star(int x)
{
    printf("\n---INTEGER + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*i| for integer\n", 10, x);//si no se coloca argumento genera null
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015.*i| for integer\n", 10, x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width_Star_Precision(int x)
{
    printf("\n---INTEGER + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.i| for integer\n", 30, x);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.i| for integer\n", 30, x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width_Star_Precision_Number(int x)
{
    printf("\n---INTEGER + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5i| for integer\n", 30, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.5i| for integer\n", 30, x);
    printf("return ft %d\n", a);
}

void printIntegerZero_Width_Star_Precision_Star(int x)
{
    printf("\n---INTEGER + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*i| for integer\n", 30, 5, x);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%015*.*i| for integer\n", 30, 5, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width_Precision(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH + PRECISION---\n");    
    int a = printf("real printf |%-010.i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width_Precision_Number(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");    
    int a = printf("real printf |%-010.5i| for integer\n", x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.5i| for integer\n", x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width_Precision_Star(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH + PRECISION + STAR---\n");    
    int a = printf("real printf |%-010.*i| for integer\n", 8, x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010.*i| for integer\n", 8, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width_Star_Precision(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.i| for integer\n", 5, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.i| for integer\n", 5, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width_Star_Precision_Number(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5i| for integer\n", 20, x); //it give prevalence to width given by *
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.5i| for integer\n", 20, x);
    printf("return ft %d\n", a);
}

void printIntegerMinus_Zero_Width_Star_Precision_Star(int x)
{
    printf("\n---INTEGER + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*i| for integer\n", 8, 15,x);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*i| for integer\n", 8, 15, x);
    printf("return ft %d\n", a);
}

void runIntegerTest(void)
{
    long x;
    // x = 3147483648;
    x = 0;
    
    printIntegerNoFlag(x); //ok
    printIntegerMinus(x); //ok
    printIntegerZero(x);//ok
    printIntegerWidth(x); //ok
    printIntegerWidth_Star(x);
    printIntegerPrecision(x);//ok
    printIntegerPrecision_Number(x);
    printIntegerPrecision_Star(x);
    printIntegerMinus_Zero(x);//ok
    printIntegerMinus_Width(x); //ok
    printIntegerMinus_Width_Star(x);
    printIntegerMinus_Precision(x); //ok
    printIntegerMinus_Precision_Number(x);
    printIntegerMinus_Precision_Star(x);
    printIntegerZero_Width(x);//ok
    printIntegerZero_Width_Star(x);
    printIntegerZero_Precision(x);//ok
    printIntegerZero_Precision_Number(x);
    printIntegerZero_Precision_Star(x);
    printIntegerWidth_Precision(x);//ok
    printIntegerWidth_Precision_Number(x);
    printIntegerWidth_Precision_Star(x);
    printIntegerWidth_Star_Precision(x);
    printIntegerWidth_Star_Precision_Number(x);
    printIntegerWidth_Star_Precision_Star(x);
    printIntegerMinus_Zero_Width(x);
    printIntegerMinus_Zero_Width_Star(x);
    printIntegerMinus_Zero_Precision(x);//ok
    printIntegerMinus_Zero_Precision_Number(x);
    printIntegerMinus_Zero_Precision_Star(x);
    printIntegerMinus_Width_Precision(x);//ok
    printIntegerMinus_Width_Precision_Number(x);
    printIntegerMinus_Width_Precision_Star(x);
    printIntegerMinus_Width_Star_Precision(x);
    printIntegerMinus_Width_Star_Precision_Number(x);
    printIntegerMinus_Width_Star_Precision_Star(x);
    printIntegerZero_Width_Precision(x);//ok
    printIntegerZero_Width_Precision_Number(x);
    printIntegerZero_Width_Precision_Star(x);
    printIntegerZero_Width_Star_Precision(x);
    printIntegerZero_Width_Star_Precision_Number(x); 
    printIntegerZero_Width_Star_Precision_Star(x);
    printIntegerMinus_Zero_Width_Precision(x);
    printIntegerMinus_Zero_Width_Precision_Number(x);
    printIntegerMinus_Zero_Width_Precision_Star(x);
    printIntegerMinus_Zero_Width_Star_Precision(x);
    printIntegerMinus_Zero_Width_Star_Precision_Number(x);
    printIntegerMinus_Zero_Width_Star_Precision_Star(x);
}

int main(void)
{
    runIntegerTest();
	return (0);
}
