/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_remove_at.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/23 19:14:47 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 19:38:42 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"
#include <stdio.h>

int		ar_remove_at(t_array *array, size_t n)
{
	int		i;
	int		j;
	int		count;
	t_array	new;

	count = ar_count(*array);
	if (!(ar_init(&new, count - 1)))
		return (0);
	i = -1;
	j = -1;
	while ((*array)[++i])
	{
		if (i == (int)n)
			continue ;
		new[++j] = (*array)[i];
	}
	new[j + 1] = NULL;
	free(*array);
	*array = new;
	return (1);
}
