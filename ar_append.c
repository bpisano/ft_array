/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_append.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 14:20:27 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/28 16:52:42 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_append(t_array *array, void *value)
{
	t_array		new;
	int			count;
	int			i;

	count = ar_count(*array);
	if (!ar_init(&new, count + 1))
		return (0);
	i = -1;
	while (++i < count)
		new[i] = (*array)[i];
	new[i] = value;
	new[i + 1] = NULL;
	free(*array);
	*array = new;
	return (1);
}
