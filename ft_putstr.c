/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:22:55 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/06 11:27:10 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(char *lst, int *len)
{
	size_t	i;

	i = 0;
	if (!lst)
		return ;
	while (lst[i] != '\0')
	{
		ft_putcharlen(lst[i], len);
	}
}
