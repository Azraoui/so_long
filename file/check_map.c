/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:21:20 by ael-azra          #+#    #+#             */
/*   Updated: 2021/10/26 13:35:23 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

int	collect_elements(char *str)
{
	printf("%s\n", str);
	return (1);
}

void	check_map(char *map_name)
{
	int		fd;
	int		i;
	char	*str;

	i = 0;
	fd = open(map_name, O_RDONLY);
	if (fd != -1)
	{
		i = gnl(fd, &str);
		while (i != -1 && i != 0)
		{
			i = collect_elements(str);
			free(str);
			if (i != -1)
				i = gnl(fd, &str);
		}
		if (i != -1)
			i = collect_elements(str);
		free(str);
		if (i == -1)
			printf("Error\nInvalid Map\n");
	}
	else
		printf("Error\n%s doesn't found\n", map_name);
}