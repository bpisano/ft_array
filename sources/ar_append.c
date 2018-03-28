/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_append.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 14:20:27 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/28 14:41:57 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_append(t_array *array, void *value)
{
	int			count;
	t_array		new;

	count = ar_count(*array);
	if (!(ar_init(&new, count + 1)))
		return (0);
	ar_cpy(&new, array);
	new[count] = value;
	free(*array);
	*array = new;
	return (1);
}
