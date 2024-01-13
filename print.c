/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:30 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:54:30 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_base *base)
{
	int	i;

	i = -1;
	while (++i < (base->size_a + base->size_b))
	{
		if (!base->a[i])
			ft_printf("%c	", ' ');
		else
			ft_printf("%d	", base->a[i]);
		if (!base->b[i])
			ft_printf("%c	\n", ' ');
		else
			ft_printf("%d\n", base->b[i]);
	}
	ft_printf("_	_\n");
	ft_printf("a	b\n");
}
