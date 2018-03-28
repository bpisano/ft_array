/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_cpy.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 14:21:29 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/28 14:41:21 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

t_array		*ar_cpy(t_array *dst, const t_array *src)
{
	int		i;

	i = -1;
	while (dst[++i] && src[i])
		dst[i] = src[i];
	while (dst[i])
		dst[i++] = NULL;
	return (dst);
}
