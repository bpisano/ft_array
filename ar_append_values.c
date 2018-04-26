/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_append_values.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/26 16:23:58 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/26 16:26:07 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_append_values(t_array *array, size_t n, ...)
{
	int		i;
	va_list	params;

	i = -1;
	va_start(params, n);
	while (++i < (int)n)
		if (!ar_append(array, va_arg(params, void *)))
		{
			free(array);
			va_end(params);
			return (0);
		}
	va_end(params);
	return (1);
}
