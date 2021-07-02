#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int     ft_printf(const char *str, ...);

void printNoConversionNoFlag(void)
{
    printf("---NO CONVERSION NO FLAG---\n");
    int a = printf("real printf |%| for no conversion\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Minus(void)
{
    printf("\n---NO CONVERSION + MINUS---\n");
    int a = printf("real printf |%-| for no conversion\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Zero(void)
{
    printf("\n---NO CONVERSION + ZERO---\n");
    int a = printf("real printf |%0| for no conversion\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%0| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Width(void)
{
    printf("\n---NO CONVERSION + WIDTH---\n");
    int a = printf("real printf |%5| for no conversion\n");
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%5| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Width_Star(void)
{
    printf("\n---NO CONVERSION + WIDTH + STAR---\n");
    int a = printf("real printf |%25*| for no conversion\n", 8);
    printf("return %d\n", a);
    a =  ft_printf("ownn printf |%25*| for no conversion\n", 8);
    printf("return ft %d\n", a);
}

void printNoConversion_Precision(void)
{
    printf("\n---NO CONVERSION + PRECISION---\n");
    int a = printf("real printf |%.| for no conversion\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Precision_Number(void)
{
    printf("\n---NO CONVERSION + PRECISION + NUMBER---\n");
    int a = printf("real printf |%.5| for no conversion\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.5| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Precision_Star(void)
{
    printf("\n---NO CONVERSION + PRECISION + STAR---\n");
    int a = printf("real printf |%.*| for no conversion\n", 10);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%.*| for no conversion\n", 10);
    printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO---\n");
    int a = printf("real printf |%-0| for no conversion\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-0| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH---\n");
    int a = printf("real printf |%-5| for no conversion\n");
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-5| for no conversion\n");
    printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width_Star(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH + STAR---\n");
    int a = printf("real printf |%-30*| for no conversion\n", 10);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-30*| for no conversion\n", 10);
    printf("return ft %d\n", a);
}

void printNoConversion_Minus_Precision(void)
{
    printf("\n---NO CONVERSION + MINUS + PRECISION---\n");
    int a = printf("real printf |%-.| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-.| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Precision_Number(void)
{
    printf("\n---NO CONVERSION + MINUS + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-.5| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-.5| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Precision_Star(void)
{
    printf("\n---NO CONVERSION + MINUS + PRECISION + STAR---\n");
    int a = printf("real printf |%-.*| for no conversion\n", 35);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-.*| for no conversion\n", 35);
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width(void)
{
    printf("\n---NO CONVERSION + ZERO + WIDTH---\n");
    int a = printf("real printf |%030| for no conversion\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%030| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width_Star(void)
{
    printf("\n---NO CONVERSION + ZERO +  WIDTH + STAR---\n");
    int a = printf("real printf |%030*| for no conversion\n", 35);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%030*| for no conversion\n", 35);
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Precision(void)
{
    printf("\n---NO CONVERSION + ZERO +  PRECISION---\n");
    int a = printf("real printf |%0.| for no conversion\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%0.| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Precision_Number(void)
{
    printf("\n---NO CONVERSION + ZERO +  PRECISION + NUMBER---\n");
    int a = printf("real printf |%0.5| for no conversion\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%0.5| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Precision_Star(void)
{
    printf("\n---NO CONVERSION + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%0.*| for no conversion\n", 8);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%0.*| for no conversion\n", 8);
printf("return ft %d\n", a);
}

void printNoConversion_Width_Precision(void)
{
    printf("\n---NO CONVERSION + WIDTH + PRECISION---\n");
    int a = printf("real printf |%10.| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10.| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Width_Precision_Number(void)
{
    printf("\n---NO CONVERSION + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10.5| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10.5| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Width_Precision_Star(void)
{
    printf("\n---NO CONVERSION + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%10.*| for no conversion\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10.*| for no conversion\n", 8);
printf("return ft %d\n", a);
}

void printNoConversion_Width_Star_Precision(void)
{
    printf("\n---NO CONVERSION + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%10*.| for no conversion\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10*.| for no conversion\n", 8);
printf("return ft %d\n", a);
}

void printNoConversion_Width_Star_Precision_Number(void)
{
    printf("\n---NO CONVERSION + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%10*.5| for no conversion\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10*.5| for no conversion\n", 8);
printf("return ft %d\n", a);
}

void printNoConversion_Width_Star_Precision_Star(void)
{
    printf("\n---NO CONVERSION + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%10*.*| for no conversion\n", 8, 5);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%10*.*| for no conversion\n", 8, 5);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH---\n");
    int a = printf("real printf |%-025| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width_Number(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH + STAR---\n");
    int a = printf("real printf |%-025*| for no conversion\n", 30);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025*| for no conversion\n", 30);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Precision(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + PRECISION---\n");
    int a = printf("real printf |%-0.| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-0.| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Precision_Number(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-0.10| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-0.10| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Precision_Star(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + PRECISION + STAR---\n");
    int a = printf("real printf |%-0.*| for no conversion\n", 10);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-0.*| for no conversion\n", 10);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width_Precision(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-10.| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10.| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width_Precision_Number(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10.5| for no conversion\n");
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10.5| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width_Precision_Star(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%-10.*| for no conversion\n", 10); //si no se coloca argumento genera null
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10.*| for no conversion\n", 10);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width_Star_Precision(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%-10*.| for no conversion\n", 8); //always put a number as a parameter, otherwise infinite space
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10*.| for no conversion\n", 8);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width_Star_Precision_Number(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-10*.5| for no conversion\n", 8);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10*.5| for no conversion\n", 8);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Width_Star_Precision_Star(void)
{
    printf("\n---NO CONVERSION + MINUS + WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%-10*.*| for no conversion\n", 8, 5);//always put a number as a parameter, otherwise infinite space. Va a predominar el valor del *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-10*.*| for no conversion\n", 8, 5);
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width_Precision(void)
{
    printf("\n---NO CONVERSION + ZERO +  WIDTH + PRECISION---\n");
    int a = printf("real printf |%020.| for no conversion\n");//Does not print the string
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%020.| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width_Precision_Number(void)
{
    printf("\n---NO CONVERSION + ZERO +  WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015.5| for no conversion\n");
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015.5| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width_Precision_Star(void)
{
    printf("\n---NO CONVERSION + ZERO +  WIDTH + PRECISION + STAR---\n");
    int a = printf("real printf |%015.*| for no conversion\n", 10);//si no se coloca argumento genera null
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015.5| for no conversion\n", 10);
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width_Star_Precision(void)
{
    printf("\n---NO CONVERSION + ZERO +  WIDTH + STAR + PRECISION---\n");
    int a = printf("real printf |%015*.| for no conversion\n", 30);//always put a number as a parameter, otherwise infinite zeroes. Va a predominar el valor del *
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015*.| for no conversion\n", 30);
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width_Star_Precision_Number(void)
{
    printf("\n---NO CONVERSION + ZERO +  WIDTH + STAR + PRECISION + NUMBER---\n");
    int a = printf("real printf |%015*.5| for no conversion\n", 30);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015*.5| for no conversion\n", 30);
printf("return ft %d\n", a);
}

void printNoConversion_Zero_Width_Star_Precision_Star(void)
{
    printf("\n---NO CONVERSION + ZERO +  WIDTH + STAR + PRECISION + STAR---\n");
    int a = printf("real printf |%015*.*| for no conversion\n", 30, 5);
    printf("return %d\n", a);
a =  ft_printf("ownn printf |%015*.*| for no conversion\n", 30, 5);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width_Precision(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH + PRECISION---\n");
    int a = printf("real printf |%-025.| for no conversion\n");//Does not print the string
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025.| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width_Precision_Number(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH + PRECISION + NUMBER---\n");
    int a = printf("real printf |%-025.5| for no conversion\n");//Does not take in count the zero
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-025.5| for no conversion\n");
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width_Precision_Star(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010.*| for no conversion\n", 8);
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-010.*| for no conversion\n", 8);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width_Star_Precision(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH + STAR + PRECISION---\n" );    
    int a = printf("real printf |%-010*.| for no conversion\n", 5); //it give prevalence to width given by *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-010*.| for no conversion\n", 5);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width_Star_Precision_Number(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH + STAR + PRECISION + NUMBER---\n" );    
    int a = printf("real printf |%-010*.5| for no conversion\n", 20); //it give prevalence to width given by *
    printf("return %d\n", a);
a = ft_printf("ownn printf |%-010*.5| for no conversion\n", 20);
printf("return ft %d\n", a);
}

void printNoConversion_Minus_Zero_Width_Star_Precision_Star(void)
{
    printf("\n---NO CONVERSION + MINUS + ZERO + WIDTH + STAR + PRECISION + STAR---\n" );    
    int a = printf("real printf |%-010*.*| for no conversion\n", 8, 15);
    printf("return %d\n", a);
    a = ft_printf("ownn printf |%-010*.*| for no conversion\n", 8, 15);
    printf("return ft %d\n", a);
}

void runNoConversionTest(void)
{
    printNoConversionNoFlag();
    printNoConversion_Minus();
    printNoConversion_Zero();
    printNoConversion_Width();
    printNoConversion_Width_Star();
    printNoConversion_Precision();
    printNoConversion_Precision_Number();
    printNoConversion_Precision_Star();
    printNoConversion_Minus_Zero();
    printNoConversion_Minus_Width();
    printNoConversion_Minus_Width_Star();
    printNoConversion_Minus_Precision();
    printNoConversion_Minus_Precision_Number();
    printNoConversion_Minus_Precision_Star();
    printNoConversion_Zero_Width();
    printNoConversion_Zero_Width_Star();
    printNoConversion_Zero_Precision();
    printNoConversion_Zero_Precision_Number();
    printNoConversion_Zero_Precision_Star();
    printNoConversion_Width_Precision();
    printNoConversion_Width_Precision_Number();
    printNoConversion_Width_Precision_Star();
    printNoConversion_Width_Star_Precision();
    printNoConversion_Width_Star_Precision_Number();
    printNoConversion_Width_Star_Precision_Star();
    printNoConversion_Minus_Zero_Width();
    printNoConversion_Minus_Zero_Width_Number();
    printNoConversion_Minus_Zero_Precision();
    printNoConversion_Minus_Zero_Precision_Number();
    printNoConversion_Minus_Zero_Precision_Star();
    printNoConversion_Minus_Width_Precision();
    printNoConversion_Minus_Width_Precision_Number();
    printNoConversion_Minus_Width_Precision_Star();
    printNoConversion_Minus_Width_Star_Precision();
    printNoConversion_Minus_Width_Star_Precision_Number();
    printNoConversion_Minus_Width_Star_Precision_Star();
    printNoConversion_Zero_Width_Precision();
    printNoConversion_Zero_Width_Precision_Number();
    printNoConversion_Zero_Width_Precision_Star();
    printNoConversion_Zero_Width_Star_Precision();
    printNoConversion_Zero_Width_Star_Precision_Number();
    printNoConversion_Zero_Width_Star_Precision_Star();
    printNoConversion_Minus_Zero_Width_Precision();
    printNoConversion_Minus_Zero_Width_Precision_Number();
    printNoConversion_Minus_Zero_Width_Precision_Star();
    printNoConversion_Minus_Zero_Width_Star_Precision();
    printNoConversion_Minus_Zero_Width_Star_Precision_Number();
    printNoConversion_Minus_Zero_Width_Star_Precision_Star();
}

int main(void)
{
    runNoConversionTest();
	return (0);
}
