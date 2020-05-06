/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_apply_format.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/22 20:01:07 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/05/06 20:34:03 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void		ft_apply_format(t_format *format)
{
	if (format->width < 0)
	{
		format->flag = MINUS;
		format->width *= -1;
	}
	if (format->conversion.type == CHARACTER ||
		format->conversion.type == PERCENTAGE)
		ft_apply_char(format);
	else if (format->conversion.type == STRING)
		ft_apply_string(format);
	else if (format->conversion.type == DECIMAL ||
		format->conversion.type == INTEGER ||
		format->conversion.type == UNSIGNED_INT ||
		format->conversion.type == LOWERCASE_HEX ||
		format->conversion.type == UPPERCASE_HEX ||
		format->conversion.type == POINTER)
		ft_apply_number(format);
	else
		ft_apply_noconv(format);
}

void		ft_apply_char(t_format *format)
{
	format->width--;
}

void		ft_apply_string(t_format *format)
{
	char	*value;

	if (format->precision >= 0)
	{
		value = ft_substr(format->conversion.value, 0, format->precision);
		free(format->conversion.value);
		format->conversion.value = value;
	}
	format->width -= ft_strlen(format->conversion.value);
}

void		ft_apply_number(t_format *format)
{
	char	*str;
	int		str_len;
	int		zeros;

	if (format->conversion.value[0] == '0' && format->precision != -1)
	{
		free(format->conversion.value);
		format->conversion.value = ft_strdup("\0");
	}
	str = format->conversion.value;
	str_len = ft_strlen(str);
	if (format->precision >= 0)
	{
		zeros = format->precision - str_len;
		if (format->flag == ZERO && format->width > 0)
			format->flag = '\0';
		if (zeros > 0)
		{
			format->conversion.value = ft_add_zeros(str, zeros);
			free(str);
			format->width -= zeros;
		}
	}
	format->width -= (ft_strlen(format->conversion.prefix) + str_len);
}

void		ft_apply_noconv(t_format *format)
{
	if (format->flag == MINUS)
		format->width = 0;
	else
		format->width--;
}
