/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 02:51:16 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/15 02:51:28 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	while (argv[i] != 0)
	{
		i++;
	}
	i = i - 1;
	while (i != 0 && argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		--i;
	}
	return (0);
}
