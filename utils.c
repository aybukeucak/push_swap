/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:55:21 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:55:22 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
#include <stdbool.h>

/**
 * @brief Bu atoi'nin aynisi sadece sayimiz INT_MAX
 *  ve INT_MIN araliginda mi kontrolu sagliyor.
 * 
 * @param argv 
 * @return true 
 * @return false 
 */
bool	if_args_mintm(const char *argv)
{
	long	ret_value;
	int		i;
	int		polarity;

	i = 0;
	polarity = 1;
	while (ft_isspace(argv[i]))
		i++;
	if (argv[i] == '-' || argv[i] == '+')
	{
		if (argv[i] == '-')
			polarity *= -1;
		i++;
	}
	ret_value = 0;
	while (argv[i] >= '0' && argv[i] <= '9')
		ret_value = (ret_value * 10) + (argv[i++] - '0');
	ret_value *= polarity;
	if (ret_value > INT_MAX || ret_value < INT_MIN)
		return (true);
	else
		return (false);
}
