/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcho <bcho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:13:20 by bcho              #+#    #+#             */
/*   Updated: 2022/07/08 20:38:28 by bcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int input)
{
	if ((input >= 'A' && input <= 'Z'))
		return (1);
	else if ((input >= 'a' && input <= 'z'))
		return (2);
	else
		return (0);
}
