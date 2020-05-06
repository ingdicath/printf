/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_extract_format_number.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/22 19:58:24 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/05/06 15:15:05 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_cnv				ft_extract_number(va_list *params, t_cnvtype type)
{
	t_cnv			conversion;
	int				value;
	char			*prefix;

	prefix = "\0";
	conversion.type = type;
	value = va_arg(*params, int);
	if (value < 0)
	{
		prefix = "-";
		value *= -1;
	}
	conversion.value = ft_unsign_itoa((unsigned int)value, 10, '0');
	conversion.prefix = prefix;
	return (conversion);
}

t_cnv				ft_extract_unsig_int(va_list *params)
{
	t_cnv			conversion;
	unsigned int	value;

	conversion.type = UNSIGNED_INT;
	conversion.prefix = "\0";
	value = va_arg(*params, unsigned int);
	conversion.value = ft_unsign_itoa(value, 10, '0');
	return (conversion);
}

t_cnv				ft_extract_hex(va_list *params, t_cnvtype type)
{
	t_cnv			conversion;
	unsigned int	value;
	char			initial_hex;

	initial_hex = 'a';
	conversion.type = type;
	if (type == UPPERCASE_HEX)
		initial_hex = 'A';
	value = va_arg(*params, unsigned int);
	conversion.value = ft_unsign_itoa(value, 16, initial_hex);
	conversion.prefix = "\0";
	return (conversion);
}

t_cnv				ft_extract_pointer(va_list *params)
{
	t_cnv			conversion;
	unsigned long	value;

	conversion.type = POINTER;
	value = va_arg(*params, unsigned long);
	conversion.value = ft_unsign_itoa(value, 16, 'a');
	conversion.prefix = "0x";
	return (conversion);
}
