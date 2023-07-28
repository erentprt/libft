/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etepret <etepret@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:16:03 by etepret           #+#    #+#             */
/*   Updated: 2023/07/17 16:16:04 by etepret          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(str);
	str2 = (char *)ft_calloc(len + 1, sizeof(char));
	if ((str2) == 0)
		return (0);
	ft_memcpy(str2, str, len + 1);
	return (str2);
}
