/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:04:18 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/19 13:20:16 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_memory
{
	int				fd;
	char			*buffer;
	struct s_memory	*next;
}				t_memory;

int				get_next_line(int fd, char **line);
char			*ft_shift_string(char *str);
int				ft_check_newline(char *reading);
int				ft_concatenate_buffers(t_memory *source, char *line);
t_memory		*ft_new_struct(int fd);
void			ft_free_for_all(t_memory *start);
int				ft_ret(int status, char **mem_pt, t_memory **s_pt,
					t_memory **c_pt);
int				ft_read_fd(t_memory **c_pointer, int *list_len, int fd);

#endif
