#include "../printf.h"
#include <stdio.h>
#include <stdint.h>

int main (void)
{

	// printf("20%%\n");
	// ft_printf("20%%\n");
	// // printf("%#x\n", 10);
	// // ft_printf("%#x\n", 10);
	// printf("printf : %05d\n", 10);
	// ft_printf("printf : %05d\n", 10);
	// printf("%-10s\n", "Hello");
	// ft_printf("%-10s\n", "Hello");
	// printf("%-10.2s\n", "Hello");
	// ft_printf("%-10.2s\n", "Hello");
	// // printf("%+d\n", 10);
	// // ft_printf("%+d\n", 10);
	// printf("|%5d|\n", 5);
	// ft_printf("|%5d|\n", 5);
	// printf("|%-5d|\n", 5);
	// ft_printf("|%-5d|\n", 5);
	// printf("|%5d|\n", 1);
	// ft_printf("|%5d|\n", 1);
	// printf("|%*d|\n", 5, 1); // The next arg 5 indicates the spacing. 1 indicates what will be printed
	// ft_printf("|%*d|\n", 5, 1);
	// printf("%.5d\n", 20);
	// ft_printf("%.5d\n", 20);
	// printf("%.d\n", 20); //If the precision is just ‘.’ then the precision will be 0.
	// ft_printf("%.d\n", 20);
	// // printf("%.3f\n", 20.0);
	// // ft_printf("%.3f\n", 20.0);
	// // printf("%.f\n", 20.0);
	// // ft_printf("%.f\n", 20.0);
	// printf("Hello word coronavirus\n");
	// ft_printf("Hello word coronavirus\n");
	// printf("La tasa de infectados es %d%%\n", 20);
	// ft_printf("La tasa de infectados es %d%%\n", 20);
	// printf("%c\n",'\0');
	// ft_printf("%c\n",'\0');
	// int a = printf("0");
	// int b = ft_printf("0");
	// printf ("valor a: %d, valor b: %d\n" , a, b);
 // 	printf ("valor a: %d, valor b: %d %s %x\n", a, b, "Hello", 23);
 // 	ft_printf ("valor a: %d, valor b: %d %s %x\n", a, b, "Hello", 23);
 	// printf ("this %s is empty\n", "");
 	// ft_printf ("this %s is empty\n", "");

	// char	a01;
	// static unsigned char a02;
	// static short a03;
	// static unsigned short a04;
	// static int a05;
	// static unsigned int a06;
	// static long a07;
	// static unsigned long a08;
	// static long long a09;
	// static unsigned long long a10;
	// static char *a11;
	// static void *a12;

	// printf("|%5p|\n", NULL);
	// ft_printf("\n|%5p|\n", NULL);


 	// printf("hello, %s.\n", NULL);
 	// ft_printf("hello, %s.\n", NULL);
 	// printf("|%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p|\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
 	// ft_printf("|%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p|\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
 	// printf("|%0-8.5s|\n", "pajarito malo malo");
 	// ft_printf("|%0-8.5s|\n", "pajarito malo malo");
	// printf("%.6i\n", -3);
	// ft_printf("%.6i\n", -3);
	// printf("|%.0i|\n", 0);
	// ft_printf("|%.0i|\n", 0);
	// int x = printf("%");
	// printf("|%|\n");
	// // printf("Valor %d\n", x);
	// ft_printf("|%|\n");
	// printf("|%5%|\n");
	// printf("Valor %d\n", y);
	// ft_printf("|%5%|\n");
	// printf("|%05|\n");
	// printf("Valor %d\n", z);
	// ft_printf("|%05|\n");
	// printf("|%-05|\n");
	// ft_printf("|%-05|\n");
	// printf("|%-5|\n");
	// ft_printf("|%-5|\n");
	// printf("|%.0i|\n", 0);
	// ft_printf("|%.0i|\n", 0);
	// printf("|%.i|\n", 0);
	// ft_printf("|%.i|\n", 0);
	// printf("|%-08.5i|\n", 34);
	// ft_printf("|%-08.5i|\n", 34);
	// printf("|%c|\n", '\0');
	// // ft_printf("|%c|\n", '\0');
	// printf("|%-5s|\n", "Hola");
	// ft_printf("|%-5s|\n", "Hola");
	// // printf("|%   0 - 8 . 5 s|\n", "345555");
	// ft_printf("|%   0 - 8 . 5 s|\n", "345555");
	// ft_printf("%  0   -  8 . 5 i\n", 34);

	// static char *s_hidden = "hi low\0don't print me lol\0";
	// printf("|%00-s|\n", s_hidden);
	// ft_printf("|%00-s|\n", s_hidden);
	// printf("|%*s|\n", -32, "abc");
	// ft_printf("|%*s|\n", -32, "abc");

	// static unsigned char a02;
	// printf("|%p|\n",&a02);
	// ft_printf("|%p|\n",&a02);
	// printf("|%p|\n",123445632);
	// ft_printf("|%p|\n",123445632);

	// printf("%d\n", 2147483647);
	// ft_printf("%d\n", 2147483647);
	// printf("%d\n",-2147483648);
	// ft_printf("%d\n",-2147483648);

	// int r00 = 0;
	// printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p\n", 100, "Ly", &r00);
	// ft_printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p\n", 100, "Ly", &r00);
 	// system("leaks checker");

 	// printf("|%-7.5s|\n", "tubular");
 	// ft_printf("|%-7.5s|\n", "tubular");


 	static char *s_hidden = "hi low\0don't print me lol\0";

	// printf("|%9s|\n", s_hidden);
	// ft_printf("|%9s|\n", s_hidden);

	printf("|%s|\n", s_hidden );
	return (0);
}
