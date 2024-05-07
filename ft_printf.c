/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:58:40 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/07 11:44:13 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_check(char c, va_list *lst, int *len, int *i)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	else if (tener en cuenta las flags)(c >= '0' && c <= '9')
}

static int	ft_format(char c, va_list lst, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(lst, char), len);
	else if (c == 's')
		ft_putstr(va_arg (lst, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg (lst, int), len);
	else if (c == 'u')
		ft_putunsignbr(va_arg (lst, int), len);
	else if (c == 'X' || c == 'x')
		ft_print_hexa(va_arg (lst, int), len);
	else if (c == 'p')(puntero hexadecimal)

	else if (c == '%')
		write (1, '%', 1);
	else
		"no compatible"(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;
	int		len;

	if (!str)
		return (0);
	i = 0;
	len = 0;
	va_start(lst, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_format(str[i], lst, &len);
			i++;
		}
		else
		{
			ft_putcharlen((char)str[i], &len);
			i++;
		}
	}
	va_end (lst);
	return (len);
}
