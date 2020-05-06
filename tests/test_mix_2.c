/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.3.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ybakker <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/07 14:54:52 by ybakker        #+#    #+#                */
/*   Updated: 2020/01/20 11:38:21 by ybakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "printf.h"

int     main(void)
{
	int t;
	char c;

	c = 'a';
	t = 50;
	ft_printf("|");
	ft_printf("\n|");
	ft_printf("pp %.50d\n", 10000);
	ft_printf("|");
	printf("pp %.50d\n", 10000);
	ft_printf("\n|");
	ft_printf("p1 %.4s\n", "cccc");
	ft_printf("|");
	printf("p1 %.4s\n", "cccc");
	ft_printf("\n|");
	ft_printf("p2 %.10s\n", "cccc");
	ft_printf("|");
	printf("p2 %.10s\n", "cccc");
	ft_printf("\n|");
	ft_printf("p3 %.4s\n", NULL);
	ft_printf("|");
	printf("p3 %.4s\n", NULL);
	ft_printf("\n|");
	ft_printf("p4 %.5s\n", "aaaaa");
	ft_printf("|");
	printf("p4 %.5s\n", "aaaaa");
	ft_printf("\n|");
	ft_printf("p5 %.3d\n", 100);
	ft_printf("|");
	printf("p5 %.3d\n", 100);
	ft_printf("\n|");
	ft_printf("p6 %.0d\n", 100);
	ft_printf("|");
	printf("p6 %.0d\n", 100);
	ft_printf("\n|");
	ft_printf("p7 %.4d\n", 100);
	ft_printf("|");
	printf("p7 %.4d\n", 100);
	ft_printf("\n|");
	ft_printf("p8 %.10d\n", 100);
	ft_printf("|");
	printf("p8 %.10d\n", 100);
	ft_printf("\n|");
	ft_printf("p9 %.50d\n", 100);
	ft_printf("|");
	printf("p9 %.50d\n", 100);
	ft_printf("\n|");
	ft_printf("p10 %.1d\n", 100);
	ft_printf("|");
	printf("p10 %.1d\n", 100);
	ft_printf("\n|");
	ft_printf("p11 %.3d\n", 100);
	ft_printf("|");
	printf("p11 %.3d\n", 100);
	ft_printf("\n|");
	ft_printf("p12 %.0d\n", 0);
	ft_printf("|");
	printf("p12 %.0d\n", 0);
	ft_printf("\n|");
	ft_printf("p13 %.3i\n", 100);
	ft_printf("|");
	printf("p13 %.3i\n", 100);
	ft_printf("\n|");
	ft_printf("p14 %.0i\n", 100);
	ft_printf("|");
	printf("p14 %.0i\n", 100);
	ft_printf("\n|");
	ft_printf("p15 %.4i\n", 100);
	ft_printf("|");
	printf("p15 %.4i\n", 100);
	ft_printf("\n|");
	ft_printf("p16 %.10i\n", 100);
	ft_printf("|");
	printf("p16 %.10i\n", 100);
	ft_printf("\n|");
	ft_printf("p17 %.50i\n", 100);
	ft_printf("|");
	printf("p17 %.50i\n", 100);
	ft_printf("\n|");
	ft_printf("p18 %.1i\n", 100);
	ft_printf("|");
	printf("p18 %.1i\n", 100);
	ft_printf("\n|");
	ft_printf("p19 %.3x\n", 100);
	ft_printf("|");
	printf("p19 %.3x\n", 100);
	ft_printf("\n|");
	ft_printf("p20 %.0x\n", 0);
	ft_printf("|");
	printf("p20 %.0x\n", 0);
	ft_printf("\n|");
	ft_printf("p21 %.3x\n", 100);
	ft_printf("|");
	printf("p21 %.3x\n", 100);
	ft_printf("\n|");
	ft_printf("p22 %.0x\n", 100);
	ft_printf("|");
	printf("p22 %.0x\n", 100);
	ft_printf("\n|");
	ft_printf("p23 %.4x\n", 100);
	ft_printf("|");
	printf("p23 %.4x\n", 100);
	ft_printf("\n|");
	ft_printf("p24 %.10x\n", 100);
	ft_printf("|");
	printf("p24 %.10x\n", 100);
	ft_printf("\n|");
	ft_printf("p25 %.50x\n", 100);
	ft_printf("|");
	printf("p25 %.50x\n", 100);
	ft_printf("\n|");
	ft_printf("p26 %.1x\n", 100);
	ft_printf("|");
	printf("p26 %.1x\n", 100);
	ft_printf("\n|");
	ft_printf("p27 %.3x\n", 100);
	ft_printf("|");
	printf("p27 %.3x\n", 100);
	ft_printf("\n|");
	ft_printf("p28 %.0x\n", 0);
	ft_printf("|");
	printf("p28 %.0x\n", 0);
	ft_printf("\n|");
	ft_printf("p29 %.3u\n", 100);
	ft_printf("|");
	printf("p29 %.3u\n", 100);
	ft_printf("\n|");
	ft_printf("p30 %.0u\n", 100);
	ft_printf("|");
	printf("p30 %.0u\n", 100);
	ft_printf("\n|");
	ft_printf("p31 %.4u\n", 100);
	ft_printf("|");
	printf("p31 %.4u\n", 100);
	ft_printf("\n|");
	ft_printf("p32 %.10u\n", 100);
	ft_printf("|");
	printf("p32 %.10u\n", 100);
	ft_printf("\n|");
	ft_printf("p33 %.50u\n", 100);
	ft_printf("|");
	printf("p33 %.50u\n", 100);
	ft_printf("\n|");
	ft_printf("p34 %.1u\n", 100);
	ft_printf("|");
	printf("p34 %.1u\n", 100);
	ft_printf("\n|");
	ft_printf("p35 %.3u\n", 100);
	ft_printf("|");
	printf("p35 %.3u\n", 100);
	ft_printf("\n|");
	ft_printf("p36 %.0u\n", 0);
	ft_printf("|");
	printf("p36 %.0u\n", 0);
	ft_printf("\n|");
	ft_printf("%%\n");
	ft_printf("|");
	printf("%%\n");
	ft_printf("\n|");
	ft_printf("Hello 42 school! %s\n", NULL);
	ft_printf("|");
	printf("Hello 42 school! %s\n", NULL);
	ft_printf("\n|");
	ft_printf("%010%\n");
	ft_printf("|");
	printf("%010%\n");
	ft_printf("\n|");
	ft_printf("%d\n", 2147483647);
	ft_printf("|");
	printf("%d\n", 2147483647);
	ft_printf("\n|");
	ft_printf("%x\n", 2147483647);
	ft_printf("|");
	printf("%x\n", 2147483647);
	ft_printf("\n|");
	ft_printf("%X\n", 2147483647);
	ft_printf("|");
	printf("%X\n", 2147483647);
	ft_printf("\n|");
	ft_printf("%x\n", 0);
	ft_printf("|");
	printf("%x\n", 0);
	ft_printf("\n|");
	ft_printf("%-15x\n", 0);
	ft_printf("|");
	printf("%-15x\n", 0);
	ft_printf("\n|");
	ft_printf("%010x\n", 0);
	ft_printf("|");
	printf("%010x\n", 0);
	ft_printf("\n|");
	ft_printf("%010x\n", 20);
	ft_printf("|");
	printf("%010x\n", 20);
	ft_printf("\n|");
	ft_printf("%010x\n", -20);
	ft_printf("|");
	printf("%010x\n", -20);
	ft_printf("\n|");
	ft_printf("%10x\n", 20);
	ft_printf("|");
	printf("%10x\n", 20);
	ft_printf("\n|");
	ft_printf("%10.2x\n", -20);
	ft_printf("|");
	printf("%10.2x\n", -20);
	ft_printf("\n|");
	ft_printf("%-10x\n", 50);
	ft_printf("|");
	printf("%-10x\n", 50);
	ft_printf("\n|");
	ft_printf("%.1x\n", 500);
	ft_printf("|");
	printf("%.1x\n", 500);
	ft_printf("\n|");
	ft_printf("%*.*x\n", 50, 10, 2);
	ft_printf("|");
	printf("%*.*x\n", 50, 10, 2);
	ft_printf("\n|");
	ft_printf("%x\n", -1);
	ft_printf("|");
	printf("%x\n", -1);
	ft_printf("\n|");
	ft_printf("%40.50d\n", 50);
	ft_printf("|");
	printf("%40.50d\n", 50);
	ft_printf("\n|");
	ft_printf("%d\n", -589);
	ft_printf("|");
    printf("%d\n", -589);
	ft_printf("\n|");
	ft_printf("%-4d\n", -2464);
	ft_printf("|");
    printf("%-4d\n", -2464);
	ft_printf("\n|");
	ft_printf("%.5d\n", -2372);
	ft_printf("|");
    printf("%.5d\n", -2372);
	ft_printf("\n|");
	ft_printf("%p\n", NULL);
	ft_printf("|");
	printf("%p\n", NULL);
	ft_printf("\n|");
	ft_printf("%15p\n", NULL);
	ft_printf("|");
	printf("%15p\n", NULL);
	ft_printf("\n|");
	ft_printf("%-15p\n", NULL);
	ft_printf("|");
	printf("%-15p\n", NULL);
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%010d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%010d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%10d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%10d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%.5d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%.5d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%01.1d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%01.1d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%010.1d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%010.1d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%01.50d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%01.50d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%1.50d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%1.50d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%0100.50d]\n", -8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%0100.50d]\n", -8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%010d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%010d]\n", 8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%10d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%10d]\n", 8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%.5d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%.5d]\n", 8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%01.1d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%01.1d]\n", 8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%010.1d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%010.1d]\n", 8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%01.50d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%01.50d]\n", 8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%1.50d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%1.50d]\n", 8473));
	ft_printf("\n|");
	ft_printf("ret = %d\n", printf("%%p::[%0100.50d]\n", 8473));
	ft_printf("|");
    printf("ret = %d\n", printf("%%p::[%0100.50d]\n", 8473));
	ft_printf("\n|");
	ft_printf("%c\n", 'a');
	ft_printf("|");
	printf("%c\n", 'a');
	ft_printf("\n|");
	ft_printf("%10c\n", 't');
	ft_printf("|");
	printf("%10c\n", 't');
	ft_printf("\n|");
	ft_printf("%1c\n", 'y');
	ft_printf("|");
	printf("%1c\n", 'y');
	ft_printf("\n|");
	ft_printf("%50.2s\n", "Coucou");
	ft_printf("|");
	printf("%50.2s\n", "Coucou");
	ft_printf("\n|");
	ft_printf("%50.2s\n", NULL);
	ft_printf("|");
	printf("%50.2s\n", NULL);
	ft_printf("\n|");
	ft_printf("%5.0s\n", "Hello");
	ft_printf("|");
	printf("%5.0s\n", "Hello");
	ft_printf("\n|");
	ft_printf("%.1s\n", "Test");
	ft_printf("|");
	printf("%.1s\n", "Test");
	ft_printf("\n|");
	ft_printf("%10s\n", NULL);
	ft_printf("|");
	printf("%10s\n", NULL);
	ft_printf("\n|");
	ft_printf("%10s\n", "Ok");
	ft_printf("|");
	printf("%10s\n", "Ok");
	ft_printf("\n|");
	ft_printf("%d\n", printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));
	ft_printf("|");
	printf("%d\n", printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));
	ft_printf("\n|");
	ft_printf("%d\n", printf("Les bornes :  %u, %u\n", 0, 4294967295));
	ft_printf("|");
    printf("%d\n", printf("Les bornes :  %u, %u\n", 0, 4294967295));
	ft_printf("\n|");
	ft_printf("%d\n", printf("Les bornes :  %x, %x\n", 0, 4294967295));
	ft_printf("|");
	printf("%d\n", printf("Les bornes :  %x, %x\n", 0, 4294967295));
	ft_printf("\n|");
	ft_printf("%d\n", printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("2chiffre 1 %   d chiffre 2 % d\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("2chiffre 1 %   d chiffre 2 % d\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%    i\n", -60);
	ft_printf("|");
	printf("%    i\n", -60);
	ft_printf("\n|");
	ft_printf("%   i\n", -60);
	ft_printf("|");
    printf("%   i\n", -60);
	ft_printf("\n|");
	ft_printf("%1p\n", &t);
	ft_printf("|");
    printf("%1p\n", &t);
	ft_printf("\n|");
	ft_printf("%1p\n", &t);
	ft_printf("|");
    printf("%1p\n", &t);
	ft_printf("\n|");
	ft_printf("t1 %050d\n", 10);
	ft_printf("|");
	printf("t1 %050d\n", 10);
	ft_printf("\n|");
	ft_printf("t2 %-50d\n", 10);
	ft_printf("|");
	printf("t2 %-50d\n", 10);
	ft_printf("\n|");
	ft_printf("t3 %50.0d\n", 10);
	ft_printf("|");
	printf("t3 %50.0d\n", 10);
	ft_printf("\n|");
	ft_printf("t4 %50.50d\n", 10);
	ft_printf("|");
	printf("t4 %50.50d\n", 10);
	ft_printf("\n|");
	ft_printf("t5 %50.10d\n", 10);
	ft_printf("|");
	printf("t5 %50.10d\n", 10);
	ft_printf("\n|");
	ft_printf("t6 %*.*d\n", 50,  5, 10);
	ft_printf("|");
	printf("t6 %*.*d\n", 50,  5, 10);
	ft_printf("\n|");
	ft_printf("t7 %1.50d\n", -10);
	ft_printf("|");
	printf("t7 %1.50d\n", -10);
	ft_printf("\n|");
	ft_printf("t8 %1.50d\n", 10);
	ft_printf("|");
	printf("t8 %1.50d\n", 10);
	ft_printf("\n|");
	ft_printf("t9 %2.2d\n", 10);
	ft_printf("|");
	printf("t9 %2.2d\n", 10);
	ft_printf("\n|");
	ft_printf("t10 %2.2d\n", -10);
	ft_printf("|");
	printf("t10 %2.2d\n", -10);
	ft_printf("\n|");
	ft_printf("t12 %.0d\n", 0);
	ft_printf("|");
	printf("t12 %.0d\n", 0);
	ft_printf("\n|");
	ft_printf("t13 %01d\n", -20);
	ft_printf("|");
	printf("t13 %01d\n", -20);
	ft_printf("\n|");
	ft_printf("t14 %10d\n", 1000);
	ft_printf("|");
	printf("t14 %10d\n", 1000);
	ft_printf("\n|");
	ft_printf("%d\n", printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	ft_printf("|");
	printf("%d\n", printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	ft_printf("\n|");
	ft_printf("%d\n", printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	ft_printf("|");
	printf("%d\n", printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	ft_printf("\n|");
	ft_printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	ft_printf("|");
	printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	ft_printf("\n|");
	ft_printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	ft_printf("|");
	printf("%d\n", printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	ft_printf("\n|");
	ft_printf("%d\n", printf("1pointeur 1 %p pointeur 2 %p\n", &c, &c));
	ft_printf("|");
	printf("%d\n", printf("1pointeur 1 %p pointeur 2 %p\n", &c, &c));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4pointeur 1 %12p pointeur 2 %12p\n", &c, &c));
	ft_printf("|");
	printf("%d\n", printf("4pointeur 1 %12p pointeur 2 %12p\n", &c, &c));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4pointeur 1 %-12p pointeur 2 %-12p\n", &c, &c));
	ft_printf("|");
	printf("%d\n", printf("4pointeur 1 %-12p pointeur 2 %-12p\n", &c, &c));
	ft_printf("\n|");
	ft_printf("%d\n", printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	ft_printf("|");
	printf("%d\n", printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	ft_printf("\n|");
	ft_printf("%d\n", printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	ft_printf("|");
	printf("%d\n", printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	ft_printf("\n|");
	ft_printf("%d\n", printf("%%\n"));
	ft_printf("|");
	printf("%d\n", printf("%%\n")); 
	ft_printf("\n|");
	ft_printf("%d\n", printf("%-.12u\n", -20000000));
	ft_printf("|");
	printf("%d\n", printf("%-.12u\n", -20000000));
	ft_printf("\n|");
	ft_printf("%d\n", printf("%-.12i\n", -20000000));
	ft_printf("|");
	printf("%d\n", printf("%-.12i\n", -20000000));
	ft_printf("\n|");
	ft_printf("%d\n", ft_printf("truc"));//
	ft_printf("|");
	printf("%d\n", printf("truc"));//
	ft_printf("\n|");
	ft_printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	ft_printf("|");
	printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	ft_printf("\n|");
	ft_printf("31 This is an int : %.0d\n", 0);
	ft_printf("|");
	printf("31 This is an int : %.0d\n", 0);
	ft_printf("\n|");
	ft_printf("32 This is an int : %0d\n", 0);
	ft_printf("|");
	printf("32 This is an int : %0d\n", 0);
	ft_printf("\n|");
	ft_printf("|ft: percent 1 %012%|\n");
	printf("|rl: percent 1 %012%|\n\n");
	ft_printf("|ft: percent 2 %12%|\n");
	printf("|rl: percent 2 %12%|\n");
	ft_printf("\n|");
	ft_printf("ft: percent 3 %-12%|");
	ft_printf("\n|");
	printf("rl: percent 3 %-12%|\n");
	ft_printf("\n|");
	ft_printf("ft: percent 4 %0%|");
	ft_printf("\n|");
	printf("rl: percent 4 %0%|\n");

	// ft_printf("\n|");
	// ft_printf("ft: percent 5 % %|");
	// ft_printf("\n|");
	// printf("rl: percent 5 %  %|\n");
	// ft_printf("\n|");
	// ft_printf("ft: percent 6 % 15%|");
	// ft_printf("\n|");
	// printf("rl: percent 6 % 15%|\n");
	// ft_printf("\n|");
	// ft_printf("ft: percent 7 % 12%|");
	// ft_printf("\n|");
	// printf("rl: percent 7 % 12%|");
	// ft_printf("\n|");
	// ft_printf("ft: percent 8 %  *%|", 13);
	// ft_printf("\n|");
	// printf("rl: percent 8 %  *%|\n", 13);
	
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", t);
	ft_printf("|");
	printf("%d\n", t);
	ft_printf("\n|");
	ft_printf("%d\n", printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
	ft_printf("|");
	printf("%d\n", printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
	ft_printf("\n|");
	ft_printf("%d\n", printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
	ft_printf("|");
	printf("%d\n", printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
	ft_printf("\n|");
	ft_printf("st1 %*.*d\n", 10, 10, 50);
	ft_printf("|");
	printf("st1 %*.*d\n", 10, 10, 50);
	ft_printf("\n|");
	ft_printf("st2 %*.*d\n", 1, 50, 50);
	ft_printf("|");
	printf("st2 %*.*d\n", 1, 50, 50);
	ft_printf("\n|");
	ft_printf("st3 %*.*d\n", 0, 0, 50);
	ft_printf("|");
	printf("st3 %*.*d\n", 0, 0, 50);
	ft_printf("\n|");
	ft_printf("st4 %*.*d\n", 0, 50, 50);
	ft_printf("|");
	printf("st4 %*.*d\n", 0, 50, 50);
	ft_printf("\n|");
	ft_printf("st5 %*.*d\n", 10, 0, 50);
	ft_printf("|");
	printf("st5 %*.*d\n", 10, 0, 50);
	ft_printf("\n|");
	ft_printf("st6 %*.*d\n", 10, 10, 50);
	ft_printf("|");
	printf("st6 %*.*d\n", 10, 10, 50);
	ft_printf("\n|");
	ft_printf("st12 %*d\n", 10, 50);
	ft_printf("|");
	printf("st12 %*d\n", 10, 50);
	ft_printf("\n|");
	ft_printf("st13 %*d\n", 0, 0);
	ft_printf("|");
	printf("st13 %*d\n", 0, 0);
	ft_printf("\n|");
	ft_printf("st14 %.*d\n", 0, 1);
	ft_printf("|");
	printf("st14 %.*d\n", 0, 1);
	ft_printf("\n|");
	ft_printf("st15 %*d\n", 50, 5);
	ft_printf("|");
	printf("st15 %*d\n", 50, 5);
	ft_printf("\n|");
	ft_printf("st16 %0.*d\n", 50, 5);
	ft_printf("|");
	printf("st16 %0.*d\n", 50, 5);
	ft_printf("\n|");
	ft_printf("st17 %0.*d\n", 0, 0);
	ft_printf("|");
	printf("st17 %0.*d\n", 0, 0);
	ft_printf("\n|");
	ft_printf("st7 %*.*s\n", 1, 50, "hey");
	ft_printf("|");
	printf("st7 %*.*s\n", 1, 50, "hey");
	ft_printf("\n|");
	ft_printf("st8 %*.*s\n", 0, 0, "coucou");
	ft_printf("|");
	printf("st8 %*.*s\n", 0, 0, "coucou");
	ft_printf("\n|");
	ft_printf("st9 %*.*s\n", 0, 50, "hey");
	ft_printf("|");
	printf("st9 %*.*s\n", 0, 50, "hey");
	ft_printf("\n|");
	ft_printf("st10 %*.*s\n", 10, 0, "dsa");
	ft_printf("|");
	printf("st10 %*.*s\n", 10, 0, "dsa");
	ft_printf("\n|");
	ft_printf("st11 %*.*s\n", 10, 10, "hello");
	ft_printf("|");
	printf("st11 %*.*s\n", 10, 10, "hello");
	ft_printf("\n|");
	ft_printf("st8 %.*s\n", 0, "coucou");
	ft_printf("|");
	printf("st8 %.*s\n", 0, "coucou");
	ft_printf("\n|");
	ft_printf("st9 %*s\n", 0, "hey");
	ft_printf("|");
	printf("st9 %*s\n", 0, "hey");
	ft_printf("\n|");
	ft_printf("st10 %*s\n", 10, "dsa");
	ft_printf("|");
	printf("st10 %*s\n", 10, "dsa");
	ft_printf("\n|");
	ft_printf("neg1 %*s\n", -9, "coucou");
	ft_printf("|");
	printf("neg1 %*s\n", -9, "coucou");
	ft_printf("\n|");
	ft_printf("neg2 %*.*s\n", -9, 4, "coucou");
	ft_printf("|");
	printf("neg2 %*.*s\n", -9, 4, "coucou");
	ft_printf("\n|");
	ft_printf("neg3 %*s\n", -9, NULL);
	ft_printf("|");
	printf("neg3 %*s\n", -9, NULL);
	ft_printf("\n|");
	ft_printf("neg4 %*.*s\n", 0, 0, "coucou");
	ft_printf("|");
	printf("neg4 %*.*s\n", 0, 0, "coucou");
	ft_printf("\n");

	ft_printf("|ft: ***************%*s%*d**************%*u*************|\n", 10, "coucou", 10, 10, -50, 20);
	printf("|rl: ***************%*s%*d**************%*u*************|\n\n", 10, "coucou", 10, 10, -50, 20);

	ft_printf("|ft: taaa %100s|\n", "hello");
	printf("|rl: taaa %100s|\n", "hello");
	
	// while (1)
	// {
	// 	0;
	// }
	return (0);
}