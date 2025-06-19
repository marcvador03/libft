/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfleury <mfleury@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:59:33 by mfleury           #+#    #+#             */
/*   Updated: 2025/06/19 17:00:53 by mfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# if BUFFER_SIZE > 10000
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif
# define OPEN_MAX 1024
# define FALSE 0
# define TRUE 1
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft.h"

typedef struct s_gnl_list
{
	char				*content;
	int					eol;
	int					fd;
	struct s_gnl_list	*next;
	struct s_gnl_list	*bof;
}	t_gnl_list;

/* Function name: get_next_line
 * @parameters: fd integer representing an opened file descriptor. Will
 * return NULL if fd cannot be accessed
 * @return: a NULL terminated char pointer (char *) containing one line 
 * extracted from a fd. Returns NULL pointer in case of error.
 * @description: Main function to be called to retrieve one line at a time 
 * from a given fd
 * IMPORTANT: memory must be freed by the user */

char		*get_next_line(int fd);

/*additional functions - should have been made static if not for the Norminette
 * :D */
t_gnl_list	*gnl_lst_move(t_gnl_list *lst, int n, int fd);
t_gnl_list	*gnl_free(t_gnl_list *lst);
t_gnl_list	*gnl_new(char *content, t_gnl_list *head, int fd);
char		*gnl_substr(char const *s, unsigned int start, size_t len);

#endif
