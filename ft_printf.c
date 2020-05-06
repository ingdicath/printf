/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/07 19:38:00 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/04/13 22:16:11 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int				ft_printf(const char *str, ...)
{
	int			printed;
	va_list		params;

	printed = 0;
	va_start(params, str);
	printed = ft_print_all(str, &params);
	va_end(params);
	return (printed);
}

int				ft_print_all(const char *str, va_list *params)
{
	char		*shifter;
	int			printed;
	t_format	format;

	shifter = (char *)str;
	printed = 0;
	while (*shifter != '\0')
	{
		if (*shifter != '%')
		{
			printed += ft_printchar(*shifter);
			shifter++;
		}
		else
		{
			shifter++;
			format = ft_find_format(&shifter, params);
			printed += ft_print_format(&format);
			free(format.conversion.value);
		}
	}
	return (printed);
}
