/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:34:41 by ael-azra          #+#    #+#             */
/*   Updated: 2021/10/26 14:46:30 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include <stdint.h>
# include <errno.h>
# include "mlx.h"
# include "../src/libft/libft.h"
# include "../src/gnl/get_next_line.h"

typedef	struct	s_map
{
	char		**map;
	int			i;
	int			j;
}				t_map;

void	check_map(char *map_name);

#endif
