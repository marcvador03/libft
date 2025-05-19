/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfleury <mfleury@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:20:21 by mfleury           #+#    #+#             */
/*   Updated: 2025/05/19 23:00:41 by mfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* manpage: strlen */
size_t	ft_strlen(const char *str);

/* manpage: isprint */
int		ft_isprint(int c);

/* manpage: isdigit */
int		ft_isdigit(int c);

/* manpage: isascii */
int		ft_isascii(int c);

/* manpage: isalpha */
int		ft_isalpha(int c);

/* manpage: isalnum */
int		ft_isalnum(int c);

/* manpage: memset */
void	*ft_memset(void *s, int c, size_t n);

/* manpage: bzero */
void	ft_bzero(void *s, size_t n);

/* manpage: memcpy */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/* manpage: memmove */
void	*ft_memmove(void *dest, const void *src, size_t n);

/* manpage: strlcpy */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/* manpage: strlcat */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/* manpage: toupper */
int		ft_toupper(int c);

/* manpage: tolower */
int		ft_tolower(int c);

/* manpage: strchr */
char	*ft_strchr(const char *s, int c);

/* manpage: strrchr */
char	*ft_strrchr(const char *s, int c);

/* manpage: strncmp */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* manpage: memchr */
void	*ft_memchr(const void *s, int c, size_t n);

/* manpage: memcmp */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* manpage: strnstr */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/* manpage: atoi */
int		ft_atoi(const char *nptr);

/* manpage: calloc */
void	*ft_calloc(size_t nmemb, size_t size);

/* manpage: strdup */
char	*ft_strdup(const char *s);

/* Function name: ft_susbtr
 * @parameters: s: The original string from which to create the substring.
 * 				start: The starting index of the substring within ’s’.
 * 				len: The maximum length of the substring.
 * @return: The substring. NULL if allocation fails
 * @description: Allocates memory (using malloc(3)) and returns a substring 
 * from the string ’s’. The substring starts at index ’start’ and has a maximum
 * length of ’len’.*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* Function name: ft_strjoin
 * @parameters: s1: the prefix string.
 * 				s2: the suffix string.
 * @return: The new string. NULL if allocation fails
 * @description: Allocates memory (using malloc(3)) and returns a new string,
 * which is the result of concatenating ’s1’ and ’s2’*/
char	*ft_strjoin(char const *s1, char const *s2);

/* Function name: ft_strtrim
 * @parameters: s1: The string to be trimmed.
 * 				set: The string containing the set of characters
 * 				to be removed.
 * @return: The trimmed string. NULL if the allocation fails.
 * @description: Allocates memory (using malloc(3)) and returns a copy of ’s1’
 * with characters fr*om ’set’ removed from the beginning and the end.*/
char	*ft_strtrim(char const *s1, char const *set);

/* Function name: ft_split
 * @parameters: s: The string to be split.
 * 				c : The delimiter character.
 * @return: The array of new strings resulting from the split. NULL if the 
 * allocation fails.
 * @description: Allocates memory (using malloc(3)) and returns an array
 * of strings obtaine*d by splitting ’s’ using the character ’c’ as a delimiter.
 * The array must end with a NULL pointer.*/
char	**ft_split(char const *s, char c);

/* Function name: ft_itoa
 * @parameters: n: The integer to convert.
  * @return: The string representing the integer. NULL if the allocation fails.
  * @description: Allocates memory (using malloc(3)) and returns a string 
  * representing the integer received *as an argument. 
  * Negative numbers must be handled.*/
char	*ft_itoa(int n);

/* Function name: ft_strmapi
 * @parameters: s: The string to iterate over.
 * 				f : The function to apply to each character.
 * @return: The string created from the successive applications of ’f’. 
 * Returns NULL if the allocation fails.
 * @description: Applies the function f to each character of the string s, 
 * passing its index as the first argument and the character itself as the 
 * second. A new string is created (using malloc(3)) to store the results from 
 * the successive applications of f.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Function name: ft_striteri
 * @parameters: s: The string to iterate over.
 * 				f : The function to apply to each character.*
 * @return: NONE
 * @description: Applies the function ’f’ to each character of the string 
 * passed as argument, passing its index as the first argument. Each character 
 * is passed by address to ’f’ so it can be modified if necessary.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Function name: ft_putchar_fd
 * @parameters:	c: The character to output.
				fd: The file descriptor on which to write.
 * @return: NONE
 * @description: Outputs the character ’c’ to the specified file descriptor.*/
void	ft_putchar_fd(char c, int fd);

/* Function name: ft_putstr_fd
 * @parameters:	s: The string to output.
				fd: The file descriptor on which to write.
 * @return: NONE
 * @description: Outputs the string ’s’ to the specified file descriptor.*/
void	ft_putstr_fd(char *s, int fd);

/* Function name: ft_putendl_fd
 * @parameters:	s: The string to output.
				fd: The file descriptor on which to write.
 * @return: NONE
 * @description: Outputs the string ’s’ to the specified file descriptor 
 * followed by a newline.*/
void	ft_putendl_fd(char *s, int fd);

/* Function name: ft_putnbr_fd
 * @parameters:	n: The integer to output.
				fd: The file descriptor on which to write.
 * @return: NONE
 * @description: Outputs the integer ’n’ to the specified file descriptor.*/
void	ft_putnbr_fd(int n, int fd);

/* Function name: ft_lstnew
 * @parameters:	content: The content to store in the new node.
 * @return: A pointer to the new node
 * @description: Allocates memory (using malloc(3)) and returns a new node. 
 * The ’content’ member variable is initialized with the given parameter 
 * ’content’. The variable ’next’ is initialized to NULL.*/
t_list	*ft_lstnew(void *content);

/* Function name: ft_lstadd_front
 * @parameters:	lst: The address of a pointer to the first node of a list.
				new: The address of a pointer to the node to be added.
 * @return: NONE
 * @description: Adds the node ’new’ at the beginning of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new_t);

/* Function name: ft_lstsize
 * @parameters:	lst: The beginning of the list.
 * @return: The length of the list
 * @description: Counts the number of nodes in the list.*/
int		ft_lstsize(t_list *lst);

/* Function name: ft_lstlast
 * @parameters:	lst: The beginning of the list.
 * @return: Last node of the list
 * @description: Returns the last node of the list.*/
t_list	*ft_lstlast(t_list *lst);

/* Function name: ft_lstadd_back
 * @parameters:	lst: The address of a pointer to the first node of a list
				new: The address of a pointer to the node to be added.
 * @return: NONE
 * @description: Adds the node ’new’ at the end of the list.*/
void	ft_lstadd_back(t_list **lst, t_list *new_t);

/* Function name: ft_lstdelone
 * @parameters:	lst: The node to free.
				del: The address of the function used to delete the content.
 * @return: NONE
 * @description: Takes a node as parameter and frees its content using the 
 * function ’del’. Free the node itself but does NOT free the next node.*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/* Function name: ft_lstclear
 * @parameters:	lst: The address of a pointer to a node.
				del: The address of the *function used to delete the content of
			   	the node.
 * @return: NONE
 * @description: Deletes and frees the given node and all its successors, 
 * using the function ’del’ and free(3). Finally, set the pointer to the list 
 * to NULL.*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/* Function name: ft_lstiter
 * @parameters: lst: The address of a pointer to a node.
				f : The address of the function to apply to each node’s content.
 * @return: NONE
 * @description: Iterates through the list ’lst’ and applies the function ’f’ 
 * to the content of each node.*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/* Function name: ft_lstmap
 * @parameters: lst: The address of a pointer to a node.
				f : The address of the fun*ction applied to each node’s content.
				del: The address of the function used to delete a node’s content
			   	if needed.
 * @return: The new list. NULL if the allocation fails.
 * @description: Iterates through the list ’lst’, applies the  function ’f’ to 
 * each node’s content, and creates a new list resulting of the successive 
 * applications of the function ’f’. The ’del’ function is used to  delete the 
 * content of a node if needed.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
