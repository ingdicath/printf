/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_mapper.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/07 17:01:36 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/04/09 16:26:51 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			ft_nsize(unsigned long num, int base)
{
	int		len;

	len = 0;
	while (num != 0)
	{
		num /= base;
		len++;
	}
	if (len == 0)
		len++;
	return (len);
}

char		*ft_unsign_itoa(unsigned long n, int base, char ichar_base)
{
	long	len;
	char	*str;

	len = ft_nsize(n, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ichar_base -= 10;
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		if (n % base <= 9)
			str[len] = n % base + '0';
		else
			str[len] = n % base + ichar_base;
		len--;
		n = n / base;
	}
	return (str);
}

int			ft_printchar(char c)
{
	int		x;

	x = 0;
	x = write(1, &c, 1);
	return (x);
}
