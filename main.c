/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:57 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 18:18:36 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_base	base;

	if (ac < 2)
		return (0);
	if (ac == 2)
		set_quotation_args(&base, ac, av);
	else
		set_args(&base, ac, av);
	check_repeating(&base);
	sort_stack(&base);
	return (0);
}
