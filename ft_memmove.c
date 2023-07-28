/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etepret <etepret@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:23:08 by etepret           #+#    #+#             */
/*   Updated: 2023/07/17 15:23:21 by etepret          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*sr;

	i = len;
	dest = (char *)dst;
	sr = (char *)src;
	if (dst == src)
		return (dst);
	if (dest > sr)
	{
		while (i > 0)
		{
			i--;
			dest[i] = sr[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dest);
}
