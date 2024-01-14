/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:16 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 19:23:59 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include "libft/libft.h"

void	set_quotation_args(t_base *base, int ac, char **av)
{
	char	**args;
	int		i;

	args = ft_split(av[1], ' ');
	if (!args)
		print_error("Error\n", 1);
	ac = 0;
	while (args[ac])
		ac++;
	base->a = (int *)malloc(sizeof(int) * ac);
	if (base->a == NULL)
		print_error("Error\n", 1);
	i = -1;
	while (args[++i])
	{
		check_number(args[i]);
		if (if_args_mintm(args[i]))
			print_error("Error\n", 1);
		base->a[i] = ft_atoi(args[i]);
	}
	free(args);
	base->size_a = i;
}

void	set_args(t_base *base, int ac, char **av)
{
	int	i;

	base->size_a = ac - 1;
	base->a = (int *)malloc(sizeof(int) * base->size_a);
	if (base->a == NULL)
		print_error("Error\n", 1);
	i = 0;
	while (++i < ac)
	{
		check_number(av[i]);
		if (if_args_mintm(av[i]))
			print_error("Error\n", 1);
		base->a[i - 1] = ft_atoi(av[i]);
	}
}
