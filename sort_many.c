/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:09 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:55:38 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	sort_many(t_base *base)
{
	base->size_b = 0;
	base->b = (int *)malloc(sizeof(int) * base->size_a);
	if (!base->b)
		print_error("Error\n", 1);
	sort_seperate(base);
	free(base->b);
}
