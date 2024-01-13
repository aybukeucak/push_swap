/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_r_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:46 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:54:47 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

void	rra(t_base *base, bool print)
{
	int	tmp;
	int	i;

	i = base->size_a - 1;
	tmp = base->a[i];
	while (--i >= 0)
		base->a[i + 1] = base->a[i];
	base->a[0] = tmp;
	if (print)
		ft_printf("rra\n");
}

void	rrb(t_base *base, bool print)
{
	int	tmp;
	int	i;

	i = base->size_b - 1;
	tmp = base->b[i];
	while (--i >= 0)
		base->b[i + 1] = base->b[i];
	base->b[0] = tmp;
	if (print)
		ft_printf("rrb\n");
}

void	rrr(t_base *base, bool print)
{
	rra(base, false);
	rrb(base, false);
	if (print)
		ft_printf("rrr\n");
}
