/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_init.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 14:19:18 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 19:09:45 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_init(t_array *array, size_t size)
{
	int		i;

	if (!(*array = (t_array)malloc(sizeof(void *) * (size + 1))))
		return (0);
	size = size == 0 ? 1 : size;
	i = -1;
	while (++i < (int)size)
		(*array)[i] = NULL;
	return (1);
}
