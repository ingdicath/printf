/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tests_runner.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/06 11:04:56 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/03/06 11:04:57 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int				ft_printf(const char *str, ...);

void runCharTest(void);
void runStringTest(void);
void runDecimalTest (void);
void runIntegerTest(void);
void runUnsignedIntTest(void);
void runLowercaseHexTest(void);
void runUppercaseHexTest(void);
void runPointerTest(void);
void runPercentageTest(void);


int main(void)
{
	// char c = 'g';
	// float f = 1.2254545454;
	// int x = 124234;
	// printf("String is: |%-010*c|\n", 20, c);
	// printf("Number is: |%.5f|\n", f);
	// printf("Number is: |%.8*d|\n", 2, x);
	runCharTest();
	runStringTest();
	runDecimalTest();
	runIntegerTest();
	runUnsignedIntTest();
	runLowercaseHexTest();
	runUppercaseHexTest();
	runPointerTest();
	runPercentageTest();

	return (0);
}
