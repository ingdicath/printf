/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/02 19:29:53 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/04/13 22:13:59 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef enum	e_flag
{
	MINUS = '-', ZERO = '0'
}				t_flag;

typedef enum	e_conversion_type
{
	CHARACTER = 'c', STRING = 's', POINTER = 'p', DECIMAL = 'd', INTEGER = 'i',
	UNSIGNED_INT = 'u', LOWERCASE_HEX = 'x', UPPERCASE_HEX = 'X',
	PERCENTAGE = '%'
}				t_cnvtype;

typedef struct	s_conversion
{
	t_cnvtype	type;
	char		*prefix;
	char		*value;
}				t_cnv;

typedef struct	s_format
{
	t_flag		flag;
	int			width;
	int			precision;
	t_cnv		conversion;
}				t_format;

/*
**	Main functions
*/

int				ft_printf(const char *str, ...);
int				ft_print_all(const char *str, va_list *params);
t_format		ft_find_format(char **shifter, va_list *params);
t_flag			ft_check_flag(char **shifter);
int				ft_check_width(char **shifter, va_list *params);
int				ft_check_precision(char **shifter, va_list *params);
t_cnv			ft_check_cnv(char **shifter, va_list *params);
t_cnv			ft_extract_number(va_list *params, t_cnvtype type);
t_cnv			ft_extract_unsig_int(va_list *params);
t_cnv			ft_extract_hex(va_list *params, t_cnvtype type);
t_cnv			ft_extract_pointer(va_list *params);
t_cnv			ft_extract_char(va_list *params);
t_cnv			ft_extract_string(va_list *params);
t_cnv			ft_extract_percentage(void);
t_cnv			ft_extract_no_conv(void);
int				ft_print_format(t_format *format);
void			ft_apply_format(t_format *format);
void			ft_apply_char(t_format *format);
void			ft_apply_string(t_format *format);
void			ft_apply_number(t_format *format);
void			ft_apply_noconv(t_format *format);
int				ft_print_width(int width, char padding);
int				ft_print_str(char *str);
int				ft_pt_cv(char *str, t_cnvtype type);

/*
**	Auxiliary functions
*/

int				ft_printchar(char c);
size_t			ft_strlen(const char *s);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_add_zeros(char *str, int zeros);
int				ft_nsize(unsigned long num, int base);
char			*ft_unsign_itoa(unsigned long n, int base, char ichar_base);
char			*ft_strdup(const char *s1);
char			*ft_substr(char *s, unsigned int start, size_t len);

#endif
