/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexapointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:02:42 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/10 09:53:36 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexapointer(uintptr_t ptr)
{
	size_t	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthex(ptr);
	return (count);
}
