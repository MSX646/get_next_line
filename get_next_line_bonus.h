/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:25:45 by ajordan-          #+#    #+#             */
/*   Updated: 2021/10/18 19:17:51 by kezekiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*read_to(int fd, char *str);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *str, char *buff);
char	*get_line(char *str);
char	*new_str(char *str);

#endif
