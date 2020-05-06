/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 11:12:34 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/04/13 19:05:23 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t		ft_strlen(const char *s)
{
	int		count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

char		*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*s3;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	free(s1);
	return (s3);
}

char		*ft_add_zeros(char *str, int zeros)
{
	char	*str_zeros;
	int		i;
	char	*result;

	i = 0;
	str_zeros = (char *)malloc(sizeof(char) * (zeros + 1));
	while (i < zeros)
	{
		str_zeros[i] = '0';
		i++;
	}
	str_zeros[i] = '\0';
	result = ft_strjoin(str_zeros, str);
	if (!result)
		return (NULL);
	return (result);
}

char		*ft_strdup(const char *s1)
{
	char	*str;
	size_t	size;

	size = 0;
	while (s1[size] != '\0')
		size++;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	size = 0;
	while (s1[size] != '\0')
	{
		str[size] = s1[size];
		size++;
	}
	str[size] = '\0';
	return (str);
}

char		*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;
	size_t	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start > length)
		return (ft_strdup(""));
	if (length - start < len)
		len = length - start;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len && length > start)
	{
		string[i] = s[start];
		start++;
		i++;
	}
	string[i] = '\0';
	return (string);
}
