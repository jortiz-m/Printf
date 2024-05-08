/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 08:52:28 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/08 14:00:42 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putunsignbr(unsigned int n, size_t *cont)
{
	size_t	count;

	count = 0;
	if (n > 9)
		count += ft_putunsignbr((n / 10), cont);
	count += ft_putcharlen(('0' + n % 10), cont);
	return (count);
}
