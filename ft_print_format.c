/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_format.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 18:25:09 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/04/13 22:15:10 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_print_format(t_format *format)
{
	int	printed;

	printed = 0;
	ft_apply_format(format);
	if (format->flag == MINUS)
	{
		printed += ft_print_str(format->conversion.prefix);
		printed += ft_pt_cv(format->conversion.value, format->conversion.type);
		printed += ft_print_width(format->width, ' ');
	}
	else if (format->flag == ZERO)
	{
		printed += ft_print_str(format->conversion.prefix);
		printed += ft_print_width(format->width, '0');
		printed += ft_pt_cv(format->conversion.value, format->conversion.type);
	}
	else
	{
		printed += ft_print_width(format->width, ' ');
		printed += ft_print_str(format->conversion.prefix);
		printed += ft_pt_cv(format->conversion.value, format->conversion.type);
	}
	return (printed);
}

int		ft_print_width(int width, char padding)
{
	int	printed;

	printed = 0;
	while (width > 0)
	{
		printed += ft_printchar(padding);
		width--;
	}
	return (printed);
}

int		ft_print_str(char *str)
{
	int	printed;
	int	i;

	i = 0;
	printed = 0;
	while (str[i] != '\0')
	{
		printed += ft_printchar(str[i]);
		i++;
	}
	return (printed);
}

int		ft_pt_cv(char *str, t_cnvtype type)
{
	int	printed;

	printed = 0;
	if (str[0] == '\0' && (type == CHARACTER || !type))
		printed = ft_printchar(str[0]);
	else
		printed = ft_print_str(str);
	return (printed);
}
