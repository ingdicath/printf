/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_format.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 09:20:27 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/05/06 20:34:29 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_format		ft_find_format(char **shifter, va_list *params)
{
	t_format	format;

	format.flag = ft_check_flag(shifter);
	format.width = ft_check_width(shifter, params);
	format.precision = ft_check_precision(shifter, params);
	format.conversion = ft_check_cnv(shifter, params);
	return (format);
}

t_flag			ft_check_flag(char **shifter)
{
	t_flag		flag;

	while (**shifter == '0')
	{
		flag = ZERO;
		(*shifter)++;
	}
	while (**shifter == '-')
	{
		flag = MINUS;
		(*shifter)++;
	}
	return (flag);
}

int				ft_check_width(char **shifter, va_list *params)
{
	int			width;

	width = 0;
	while (**shifter >= '0' && **shifter <= '9')
	{
		width *= 10;
		width += **shifter - '0';
		(*shifter)++;
	}
	if (**shifter == '*')
	{
		width = va_arg(*params, int);
		(*shifter)++;
	}
	return (width);
}

int				ft_check_precision(char **shifter, va_list *params)
{
	int			precision;

	precision = -1;
	if (**shifter == '.')
	{
		(*shifter)++;
		precision = ft_check_width(shifter, params);
		if (!precision)
			precision = 0;
		if (precision < 0)
			precision = -1;
	}
	return (precision);
}

t_cnv			ft_check_cnv(char **shifter, va_list *params)
{
	t_cnv		conversion;

	if (**shifter == 'c')
		conversion = ft_extract_char(params);
	else if (**shifter == 's')
		conversion = ft_extract_string(params);
	else if (**shifter == 'p')
		conversion = ft_extract_pointer(params);
	else if (**shifter == '%')
		conversion = ft_extract_percentage();
	else if (**shifter == 'd')
		conversion = ft_extract_number(params, DECIMAL);
	else if (**shifter == 'i')
		conversion = ft_extract_number(params, INTEGER);
	else if (**shifter == 'u')
		conversion = ft_extract_unsig_int(params);
	else if (**shifter == 'x')
		conversion = ft_extract_hex(params, LOWERCASE_HEX);
	else if (**shifter == 'X')
		conversion = ft_extract_hex(params, UPPERCASE_HEX);
	else
		conversion = ft_extract_no_conv();
	if (conversion.type)
		(*shifter)++;
	return (conversion);
}
