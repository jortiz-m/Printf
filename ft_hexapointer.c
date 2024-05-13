/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexapointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:02:42 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/13 12:42:45 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexapointer(uintptr_t ptr)
{
	int	count;

	count = 0;
	count = ft_putchar('0');
	if (count != -1)
	{
		count += ft_putchar('x');
		if (count != 0)
			count += ft_puthex(ptr, 'x');
		else
			return (-1);
	}
	return (count);
}
