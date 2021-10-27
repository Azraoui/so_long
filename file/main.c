/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:40:29 by ael-azra          #+#    #+#             */
/*   Updated: 2021/10/26 11:21:04 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

int		check_arg(int ac, char **av)
{
	int		i;

	i = 0;
	while (av[1][i] != '\0')
		if (!ft_strcmp(av[1] + i++, ".ber") && i - 1 != 0)
				return (1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (check_arg(ac, av))
			check_map(av[1]);
		else
			printf("Error\nInvalid argument.\n");
	}
	else if (ac == 1)
		printf("Error\nMissing file .ber\n");
	else
		printf("Error\nmore than 2 arg\n");
	return (0);
}