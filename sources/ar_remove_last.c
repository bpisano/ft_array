/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_remove_last.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 17:15:59 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/28 17:19:50 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_remove_last(t_array *array)
{
	t_array		new;
	int			count;
	int			i;

	if ((count = ar_count(*array)) == 0)
		return (0);
	if (!ar_init(&new, count - 1))
		return (0);
	i = -1;
	while (++i < count)
		new[i] = (*array)[i];
	new[i + 1] = NULL;
	free(*array);
	*array = new;
	return (1);
}
