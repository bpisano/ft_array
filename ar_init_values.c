/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_init_values.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/26 15:45:48 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/26 15:57:38 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_init_values(t_array *array, size_t size, ...)
{
	int		i;
	va_list	params;

	if (!ar_init(array, 0))
		return (0);
	i = -1;
	va_start(params, size);
	while (++i < (int)size)
		if (!ar_append(array, va_arg(params, void *)))
		{
			free(array);
			va_end(params);
			return (0);
		}
	va_end(params);
	return (1);
}
