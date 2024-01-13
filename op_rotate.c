/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:39 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 18:26:19 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ra(t_base *base, bool print)
{
	int	tmp;
	int	i;

	tmp = base->a[0];
	i = -1;
	while (++i < base->size_a - 1)
		base->a[i] = base->a[i + 1];
	base->a[i] = tmp;
	if (print)
		ft_printf("ra\n");
}

void	rb(t_base *base, bool print)
{
	int	tmp;
	int	i;

	tmp = base->b[0];
	i = -1;
	while (++i < base->size_b - 1)
		base->b[i] = base->b[i + 1];
	base->b[i] = tmp;
	if (print)
		ft_printf("rb\n");
}

void	rr(t_base *base, bool print)
{
	ra(base, false);
	rb(base, false);
	if (print)
		ft_printf("rr\n");
}
