/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:58:40 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/06 12:37:55 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

void	ft_check(char c, va_list *lst, int *len, int *i)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	else if (tener en cuenta las flags)(c >= '0' && c <= '9')
}

static int	ft_format(char c, va_list *lst, int *len, int *i)
{
	if (s == 'c')(char)
		ft_putchar()
	else if (c == 's')
		ft_putstr(va_arg (*lst, char*), len);
	else if (c == 'd' || c == 'i' || c == 'u')(entero con y sin signo)
		(tiene en cuenta el signo)ft_num(va_arg(*lst, int len));
	else if (c == 'x')(base 16)

	else if (c == 'X')(base 16)

	else if (c == 'p')(puntero hexadecimal)

	else if (c == '%')
		write (1, '%', 1);
	else
		(*i)--;
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
			ft_format(str[i], &lst, &len, &i);
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
