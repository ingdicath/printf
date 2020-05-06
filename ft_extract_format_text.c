/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_extract_format_text.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/22 19:55:47 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/04/29 16:31:46 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_cnv		ft_extract_char(va_list *params)
{
	t_cnv	conversion;
	char	value;

	conversion.type = CHARACTER;
	conversion.prefix = "\0";
	value = (char)va_arg(*params, int);
	conversion.value = malloc(2 * sizeof(char));
	if (conversion.value)
	{
		conversion.value[0] = value;
		conversion.value[1] = '\0';
	}
	return (conversion);
}

t_cnv		ft_extract_string(va_list *params)
{
	t_cnv	conversion;
	char	*value;

	conversion.type = STRING;
	conversion.prefix = "\0";
	value = va_arg(*params, char *);
	if (value == NULL)
		value = "(null)";
	conversion.value = ft_strdup(value);
	return (conversion);
}

t_cnv		ft_extract_percentage(void)
{
	t_cnv	conversion;
	char	value;

	conversion.type = PERCENTAGE;
	conversion.prefix = "\0";
	value = '%';
	conversion.value = malloc(2 * sizeof(char));
	if (conversion.value)
	{
		conversion.value[0] = value;
		conversion.value[1] = '\0';
	}
	return (conversion);
}

t_cnv		ft_extract_no_conv(void)
{
	t_cnv	conversion;

	conversion.prefix = "\0";
	conversion.value = ft_strdup("\0");
	conversion.type = '\0';
	return (conversion);
}
