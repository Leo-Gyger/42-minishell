/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo </var/spool/mail/theo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:30:02 by theo              #+#    #+#             */
/*   Updated: 2022/04/08 15:45:30 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"minishell.h"

//	if the two string are equal			--> return 0
//	if the two string are not equal		--> return 1
//	if one of the two is null pointe	--> return -1
static int	str_cmp(char *s1, char *s2)
{
	if (s1 == 0 || s2 == 0)
		return (-1);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == 0 && *s2 == 0)
		return (0);
	return (1);
}

//	if line is a build command --> return 0
//	if line is not a build command --> return 1
int	check_build(char *line)
{
	if (!str_cmp(line, "exit"))
	{
		free(line);
		exit(0);
	}
	return (0);
}