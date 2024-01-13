/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:35 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:54:36 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

void	sa(t_base *base, bool print)
{
	int	tmp;

	tmp = base->a[0];
	base->a[0] = base->a[1];
	base->a[1] = tmp;
	if (print)
		ft_printf("sa\n");
}

void	sb(t_base *base, bool print)
{
	int	tmp;

	tmp = base->b[0];
	base->b[0] = base->b[1];
	base->b[1] = tmp;
	if (print)
		ft_printf("sb\n");
}

void	ss(t_base *base, bool print)
{
	sa(base, false);
	sb(base, false);
	if (print)
		ft_printf("ss\n");
}
